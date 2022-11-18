/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>

  int maxAlphaValue(int x,int S[x]);
  
  int main(){
      int n;
      printf("Enter the no. of elements: ");
      scanf("%d",&n);
      int s[n];
      //taking input
      int i;
      printf("\nEnter array s[%d]:",n);
      for(i=0;i<n;i++){
          scanf("%d",&s[i]);
      }
      int alpha;
      alpha = maxAlphaValue(n,s);
      printf("max alpha = %d",alpha);
      return 0;
  }

  int maxAlphaValue(int x,int S[x]){
      int t = 1;//will calc alpha value starting from 2nd element
      int i,max;
      max = 0;
      int count = 0;
      while(t<x){
          //checking divisibility all elements before t by S[t];
          for(i=0;i<t;i++){
              if(S[i] % S[t] == 0){
                  count++;
              }
          }

          if(count > max){
              max = count;
          }
          count = 0;//refreshing the value
          t++;//next element
      }
      return max;
  }