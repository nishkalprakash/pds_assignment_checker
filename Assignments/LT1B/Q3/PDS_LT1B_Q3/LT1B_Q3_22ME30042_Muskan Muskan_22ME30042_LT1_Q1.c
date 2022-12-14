/*
  Muskan
  Section - 14*/
#include<stdio.h>
int main()
{
int n,i,count,max;
printf("enter how many numbers you want to enter:");
scanf("%d",&count);
int a[count];
for(i=0;i<count;i++)
{
  scanf("%d",&a[i]);
}                                                                                                               
for(i=0;i<count;i++){

if(a[i]>0)
{ 
 max=a[0];
 if(max<a[i])
{ 
  max=a[i];
}
}

}printf("the largest number is %d",max);
return 0;
}
