
#include<stdio.h>






int main()
{
int A[10];
int i,j,count;

for(i=0;i<10;i++){
scanf("%d",&A[i]);}
for(i=0,count=0;i<10;i++){
   for(j=i+1;j<10;j++){
       if(A[j]>A[i])
        count++ ;
       }
   }
printf("%d",count);
return 0;
}
