#include<stdio.h>
 struct vector{int n[100]};
int main()
{struct vector v1,v2;
int i;
printf("elements of the first vector");
scanf("%d",&v1);
printf("elements of the second vector");
scanf("%d",&v2);
for(i=0;i<1;i++)
{
    printf("%d",v1.n[i]);
}
 for(i=0;i<2;i++)
 {
     printf("%d",v2.n[i]);
     }




