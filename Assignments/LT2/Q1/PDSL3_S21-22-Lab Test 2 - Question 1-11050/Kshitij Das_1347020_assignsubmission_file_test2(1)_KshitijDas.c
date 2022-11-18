/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>

  int main(){
      int i,n,sum,max,j;
      max = 0;
      printf("Enter n:");
      scanf("%d",&n);
      int s[n];
      printf("\nEnter elements:");
      for(i=0;i<n;i++){
          scanf("%d",&s[i]);
      }
      //1. for integer x from 0 to n-1 index, add subsequent element one by one.Let it be sum.
      for(i=0;i<n;i++) {
          sum = 0;
          for(j = i;j<n;j++){
              sum = sum + s[j];
      //2. Pick out the largest sum and check if it is greater than temp_max(initially 0).
              if(sum > max){
                  max = sum;
              }
          }
      }
      //3. print the largest sum.
      //4.print the subarrays
      printf("\nThe largest sum: %d",max);

      printf("\nSubarrays: ");  
      /*idea to print the subarrays is basically the same as above algorithm but what
      I will do is that instead of finding max(which i already did),I will find subarrays
      equal to max(which will be from i to j).*/

      for(i=0;i<n;i++) {
          sum = 0;
          for(j = i;j<n;j++){
              sum = sum + s[j];
              if(sum == max){
                int v;
                printf("[");
                for(v = i ;v <= j;v++){
                    printf("%d,",s[v]);
                }
                printf("\b]");
                printf("\t");  
              }
          }
      }  
      return 0;
  }