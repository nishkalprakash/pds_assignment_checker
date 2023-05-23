#include<stdio.h>
int main(){
int n,i ;
char *a, *b;

printf("Enter no. of names : ");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%c",&a);
printf("## After reading X ##\n");
printf("Printing %d names : ");

return 0;
}
