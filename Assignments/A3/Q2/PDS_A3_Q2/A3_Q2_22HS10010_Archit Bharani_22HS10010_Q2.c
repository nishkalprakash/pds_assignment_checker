/*
SECTION 14
ROLL NO. : 22HS10010
Name: Archit Bharani
Assignment No. : 3
Description:To check if time entered is valid or invalid
*/
#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a integer between 20 to 99");
scanf("%d",&x);
z= x%10;
y= (x-z)/10;
printf("%d %d",y,z);

if(y==2){
printf("Twenty");
}else if(y==3){
printf("Thirty");
}else if(y==4){
printf("Forty");
}else if (y==5){
printf("Fifty");
}else if (y==6){
printf("Sixty");
}else if (y==7){
printf("Seventy");
}else if(y==8){
printf("Eighty");
}else if (y==9){
printf("Ninety");
}
if(z==1){
printf("One");
}else if (z==2){
printf("Two");
}else if (z==3){
printf("Three");
}else if (z==4){
printf("Four");
}else if (z==5){
printf("Five");
}else if (z==6){
printf("Six");
}else if (z==7){
printf("Seven");
}else if (z==8){
printf("Eight");
}else if (z==9){
printf("Nine");
}
return 0;
}
