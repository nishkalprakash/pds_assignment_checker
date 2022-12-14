#include<stdio.h>
#include<math.h>
int length(int a,int b, int c,int d);
int main()
{
int x1,x2,x3,y1,y2,y3,len1,len2,len3;
printf("enter the first point");
scanf("%d %d",&x1,&y1);
printf("enter the second point");
scanf("%d %d",&x2,&y2);
printf("enter the third point");
scanf("%d %d",&x3,&y3);
len1=length(x1,x2,y1,y2);
len2=length(x1,x3,y1,y3);
len3=length(x2,x3,y2,y3);
if(len1*len1==len2*len2+len3*len3 || len2*len2==len3*len3+len1*len1 || len3*len3==len2*len2+len1*len1)
{
printf("right angled");
}
else if(len1<len2+len3 || len2<len1+len3 || len3<len1+len2)
{
printf("invalid");
}
return 0;
}

int length(int a,int b,int c,int d)
{
int h,k,len;
h=(a-b)*(a-b);
k=(c-d)*(c-d);
len=sqrt(h+k);
return len;
}

