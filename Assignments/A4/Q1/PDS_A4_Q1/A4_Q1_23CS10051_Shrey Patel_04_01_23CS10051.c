//Shrey G Patel
//23CS10051

#include <stdio.h>
int main()
{
int dis,time,sum=0;
printf("Enter the distance travelled(in km) and time(in hours):");
scanf("%d %d",&dis,&time);
if(dis<=8)
{
sum=20;}
else if(dis<=12 && dis>8)
{
sum=20+(dis-8)*10;
}
else if(dis>12 && dis<=16)
{
sum=20+4*10+(dis-12)*8;
}
else if(dis>16 && dis<=20)
{
sum=20+4*10+4*8+(dis-16)*6;
}
else if(dis>20)
{
sum=20+4*10+4*8+4*6+(dis-20)*5;
}

if(time>=1 && time<=12)
sum=sum+200;
else if(time>12 && time<=24)
sum=sum+500;
else if((time-24)>0)
{
if (time%24==0)
{
sum=sum+500+300*(time/24-1);}
else{
sum=sum+500+300*(time/24);
}
}
printf("The fare is %d\n",sum);
return 0;
}
