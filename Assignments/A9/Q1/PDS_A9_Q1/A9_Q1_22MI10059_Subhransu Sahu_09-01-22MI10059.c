#include<stdio.h>
int main(){
long int n, m, b, i, f[500];
f[0]=0;
f[1]=1;
for(i=2;i<50;i++){
    f[i]=f[i-1]+f[i-2];
}

scanf("%d", &n);
printf("Value of n:%d",n);
if(n<0)
    printf("Please enter a positive number");

for(i=0;i<500;i++){
    if(n==f[i])
        printf("\n%d is a fibonacci number",n);

}
return 0;}


