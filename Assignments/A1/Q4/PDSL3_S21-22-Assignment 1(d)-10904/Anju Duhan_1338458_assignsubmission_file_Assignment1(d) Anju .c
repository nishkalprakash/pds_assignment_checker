#include<stdio.h>
#include <stdlib.h>
main()
{
    int a1,a2,b1,b2,c1,c2;
    float s1,s2,s3;
printf("Enter the 3 coordinates: ");
scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);
s1=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
s2=sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2));
s3=sqrt((c1-b1)*(c1-b1)+(c2-b2)*(c2-b2));
if((s1+s2<=s3)||(s2+s3<=s1)||(s1+s3<=s2))
{
    printf("This is a invalid triangle");
}
else
{
    printf("This is a valid triangle\n");
}
if(((s1*s1)+(s2*s2)==(s3*s3))||((s1*s1)+(s3*s3)==(s2*s2))||((s3*s3)+(s2*s2)==(s1*s1)))
{
printf("This is a right-angled triangle.\n");
}
else if(((s1*s1)+(s2*s2)<(s3*s3))||((s1*s1)+(s3*s3)<(s2*s2))||((s3*s3)+(s2*s2)<(s1*s1)))
{
printf("This is an acute-angled triangle.\n");
}
 else if(((s1*s1)+(s2*s2)>(s3*s3))||((s1*s1)+(s3*s3)>(s2*s2))||((s3*s3)+(s2*s2)>(s1*s1)))
{
printf("This is an obtuse-angled triangle.\n");
}
return 0;
}
