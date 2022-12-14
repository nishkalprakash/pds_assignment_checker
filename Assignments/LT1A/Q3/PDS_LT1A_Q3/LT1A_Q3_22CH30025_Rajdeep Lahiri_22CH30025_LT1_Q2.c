#include <stdio.h>
#include <math.h>
double side(int x1,int y1,int x2,int y2)
{
double y = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
double x = sqrt(y);
return x;
}
int main()
{
int i,j,k;
double arr[3];
printf("Enter the coordinates\n");
int x1,y1,x2,y2,x3,y3;
scanf("%d",&x1);
scanf("%d",&y1);
printf("\n");
scanf("%d",&x2);
scanf("%d",&y2);
printf("\n");
scanf("%d",&x3);
scanf("%d",&y3);
printf("\n");
double s1 = side(x1,y1,x2,y2);
double s2 = side(x2,y2,x3,y3);
double s3 = side(x3,y3,x1,y1);
double max = s1,min = s1,mid;
 arr[0] = (double)s1;
 arr[1] = (double)s2;
 arr[2] = (double)s3;



if((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))
{
printf("the triangle exists\n");
for(i=0;i<3;i++)
{
if(arr[i]>max)
max = arr[i];
if(arr[i]<min)
min = arr[i];
}
for(i=0;i<3;i++)
{
if(arr[i]<= max && arr[i]>=min)
mid = arr[i];
}
if(max*max == mid*mid + min*min)
printf("right angled");
else if(max*max > mid*mid + min*min)
printf("obtuse angled");
else
printf("acute angled");
}
else
printf("triangle does not exist");
return 0;
}


