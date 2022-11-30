/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:4program:patterns*/
#include<stdio.h>
int main()
{
int value=1,mline,x=1;
printf("Enter a number in range in question");
scanf("%d",&mline);
if(mline<2||mline>10)
printf("Enter the number");
else{
for(;value<=mline;)
{
value++;
while(x<=value)
{if(x%2!=0)printf("1");
else printf("0");
x++;
}
x=1;
printf("\n");}
}
return 0;
}

