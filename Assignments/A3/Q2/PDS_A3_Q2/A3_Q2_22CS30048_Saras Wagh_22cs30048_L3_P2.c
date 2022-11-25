/*Section 14
Roll no.:22CS30048
Name:Saras Dipak Wagh
Assignment no:3
Description:Program to check points
*/
#include<stdio.h>
int main()
{
int a;
printf("Enter the number:\n");
scanf("%d",&a);
if(a<20&&a>99)
{
printf("Out of the range");
}
if(a>=20&&a<=99)
{
int x=a/10;
int y=a%10;
scanf("%d%d",&x,&y);
if(x>=2&&x<=9&&y>=0&&y<=9)
{
if(x=2){
printf("twenty");}
if(x=3){
printf("thirty");}
if(x=4){
printf("fourty");}
if(x=5){
printf("fifty");}
if(x=6){
printf("sixty");}
if(x=7){
printf"seventy");}
if(x=8){
printf("eighty");}
if(x=9){
printf("ninety");}
if(y=2){
printf=("two");}
if(y=3){
printf("three");}
if(y=4){
printf("four");}
if(y=5){
printf("five)";}
if(y=6){
printf("six)";}
if(y=7){
printf("seven");}
if(y=8){
printf("eight");}
if(y=9){
printf("nine");}
}
}
return 0;
}

