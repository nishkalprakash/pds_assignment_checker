#include<stdio.h>

int main(){
int a[100],i;
printf("Enter elements: ");
for(i=1;i<=12;i++)
scanf("%d",&a[i]);
int max=-99999;
int min=99999;
for(i=0;i<=12;i++){
if(a[i]>max)
max=a[i];
else if(a[i]<min)
min=a[i];
}
printf("Maximum number is %d\n",max);
printf("Minimum number is %d\n",min);
return 0;
}
