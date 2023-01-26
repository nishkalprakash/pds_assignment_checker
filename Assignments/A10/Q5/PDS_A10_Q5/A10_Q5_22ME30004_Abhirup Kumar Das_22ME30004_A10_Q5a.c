#include<stdio.h>

int main(){
int a1[5],a2[100],i;
printf("Enter the elements of L1: "); 
for(i=0;i<5;i++)
scanf("%d",&a1[i]);
printf("Enter the elements of L2: "); 
for(i=0;i<6;i++)
scanf("%d",&a2[i]);
int a3[];
for(i=0;i<11;i++){
a3[i]=a1[i];
a3[i]=a2[i];
printf("%d ",a3[i]);
}

return 0;
}
