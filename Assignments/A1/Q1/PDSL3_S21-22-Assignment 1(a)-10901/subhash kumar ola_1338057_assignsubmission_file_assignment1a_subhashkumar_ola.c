 #include<stdio.h>
int main()
{
int a,u,alpha,t;

float dist;

scanf("%d%d%d%d",&a,&u,&alpha,&t);

dist=a+u*t+0.5*t*t*alpha;

printf("distance=%f",dist);

return 0;
}
