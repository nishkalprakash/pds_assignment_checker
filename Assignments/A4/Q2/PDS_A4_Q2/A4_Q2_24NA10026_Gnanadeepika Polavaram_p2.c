#include <stdio.h>

int main(){
int n,max2,y;
int max1=0;

printf("Enter numbers: \n");
scanf("%d",&n);

if(n=1){
printf("Largest number:%d\n",n);
printf("Second largest number:Value not yet entered");



}

else{
if(n > max1)
max1 = n;
scanf("%d",&max1);
if((n>max2)&&(max2<max1))
n=max2;
scanf("%d",&max2);
printf("Largest number:%d",max1);
printf("Second Largest number:%d",max2);}









return 0;





}
