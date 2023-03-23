#include<stdio.h>
#include<math.h>
int main(){
int n,s1,s2,s3,a,b,c,z;
printf("ENTER A INTEGER:-\n");

scanf("%d",&n);


s1=(n*(n+1))/2;{
printf("S1=%d\n",s1);
}
s2=(n*(n+1)*(2*n+1))/6;{
printf("S2=%d\n",s2);
}
a=n/100;
z=n/10;
b=z%10;
c=n%10;
s3=a+b+c;
printf("S3=%d",s3);
return 0;
}


