/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q2
*/



#include <stdio.h>
int n;

int maxAlphaValue(int S[]){

 int maxVal=0;

 for(int i=0;i<n;i++){                     //loop for first fixed element
  int val=0;

  for(int j=0;j<i;j++){                    //loop to check other elements before it

    if(S[j]%S[i]==0)
    val++;
  }


  if(maxVal<val)
   maxVal=val;
 }

 return maxVal;                     //returning the number of maximum

}

int main(){

 int i;

 printf("Enter the n:\n");
 scanf("%d",&n);

 int a[n];

 printf("Enter array s[]:");

 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output: %d",maxAlphaValue(a));

 return 0;
}
