
#include<stdio.h>
#include<math.h>
int main(){
int i1,i2,i3,i4,i5,large,odd=0,even=0;
printf("enter five integers");
scanf("%d%d%d%d%d",&i1,&i2,&i3,&i4,&i5);
if(i1>i2)
    large=i1;
    else large=i2;

if(i3>large)
    large=i3;
if(i4>large)
    large=i4;
if(i5>large)
    large=i5;


if(i1%2==0)
    even++;
    else
        odd++;
       if(i2%2==0)
   even++;
    else
       odd++;
       if(i3%2==0)
   even++;
    else
       odd++;
       if(i4%2==0)
   even++;
    else
        odd++;
       if(i5%2==0)
   even++;
    else
       odd++;
   if(even==3){
    printf("largest number =%d",large);
   }





return 0;

}

