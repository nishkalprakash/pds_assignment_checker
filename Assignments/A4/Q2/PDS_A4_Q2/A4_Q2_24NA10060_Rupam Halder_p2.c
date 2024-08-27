#include <stdio.h>
int main(){
int n,i;
printf("Enter numbers:");
while(i<=n){
scanf("%d",&n);
if(n<0){
break;}
i++;}
if (n==1){
printf("Largest number:1");
printf("Second largest number:Value not yet entered");}
else if(n<0){
printf("<Program terminates>");}
else{
printf("Largest number:%d",n);
printf("Second largest number:%d",n-1);
}


}
