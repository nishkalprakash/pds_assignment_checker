// Program to find whether numbers are co prime
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>

void CoPrime(int a, int b){
int i=1;
while(b==0) {
int temp=b;
b=a%b;
a=temp;
printf("%d %d",a,b);
i++;
}
if (b==0) printf("%d and %d are not co prime \n",a,b);
else printf("%d and %d are coprime \n ",a,b);
return ;
}

int main()
{
  int arr[5];
  printf("ENTER THE ELEMENTS OF ARRAY:");
  
  for (int i=0; i<5; i++) 
  scanf("%d" , &arr[i]);
  for (int j=0; j<5; j++) {
                             for (int k=0; k<j; k++) 
                             CoPrime(arr[k],arr[j]);
                             }
 return 0;
 }















