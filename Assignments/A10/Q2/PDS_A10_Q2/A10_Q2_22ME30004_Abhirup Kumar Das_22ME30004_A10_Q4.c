#include<stdio.h>
//struct customer{
//int 







int main(){
int a[5],i,j,temp;
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++){
for(j=i;j<4;j++){
if(a[i]>a[j+1])
printf("The input is in descending order\n");
else if(a[i]<a[j+1])
printf("The input is in ascending order\n");
else
printf("The input is not sorted");
}
}

return 0;
}

