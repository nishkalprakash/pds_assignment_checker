
#include<stdio.h>
#include<math.h>

//Maximum of positive Numbers

int max, i,n,count=1;
printf("enter a number");
scanf("%d",&n);
for(i=1;   ;i++)
{
scanf("%d",&n);
if(n<0)
{
printf("program terminates");
break;
count++;
}
max=n;
printf("%d",n);

}
return 0;
}

