#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of rows");
   scanf("%d",&n);
   for(int i=1;i<n;++i){
     for(int j=1;j<=(n-i);++j){
        printf(" ");}
     for(int j=i;j<=(i+((2*i)-1));++j){
        if (j>9) printf("%d",j%10);
        else printf("%d",j);}
    } 
   return 0;
}         
