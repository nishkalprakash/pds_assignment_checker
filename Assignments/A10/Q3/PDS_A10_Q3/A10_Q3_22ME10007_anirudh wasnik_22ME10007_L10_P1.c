#include<stdio.h>



int main()
{
int L[20],K[20];
int a,b,c,f;
int same=1;
char count;
printf("enter elements:(press 'x' to stop)\n");
for(a=0,count=1;a<20;a++){
scanf("%d",&L[a]);
if(getchar()=='x'){
break;}
count++;
}
for(a=0;a<count-1;a++){
printf("%d\n",L[a]);   
}       
for(a=0;a<count-1;a++){
for(b=a+1;b<count-1;b++){
if(L[a]>L[b]){
f=L[a];
L[a]=L[b];
L[b]=f;
}
}}



printf("maximum value entered is:%d\nminimum value entered is:%d",L[count-2],L[0]);
  
        
                     
return 0;}
