//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{
int p,q;
printf("Enter the coordinates\n");
scanf("%d %d", &p, &q);
if(p==0 && q==0)
printf("The point is at origin\n");
else 
{if(p==0)
printf("The point lies on y axis\n");
else if(q==0)
printf("The point lies on x axis\n");
else if(p>0 && q>0)
printf("The point lies in the first quadrant\n");
else if(p<0 && q>0)
printf("The point lies in the second quadrant\n");
else if(p<0 && q<0)
printf("The point lies in the third quadrant\n");
else printf("The point lies in the fourth quadrant\n");
}
return 0;
}

