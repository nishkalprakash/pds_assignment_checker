#include<stdio.h>
int main()
{
int n,s,count;
printf("Enter the value for n:");
scanf("%d",&n);
s = 1;
   while(count <= n){
        s = 1 - s; 
        printf("%d ",s);
        count = 1;
        count++;
        if(count<=n)continue;
        if(count>n)break;
        
   }
   return 0;
}
