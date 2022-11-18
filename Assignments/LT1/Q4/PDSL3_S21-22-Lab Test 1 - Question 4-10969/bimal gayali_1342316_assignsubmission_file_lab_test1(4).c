//NAME;BIMAL GAYALI
//ROLL;21MA10017
//SEC;3
//QUESTION;4

#include<stdio.h>
#include<math.h>
int main()
{
    //float x[i],y[i];
    int n=10;
    float sum_x,sum_y,mean_x,mean_y,m,b;
    int i;
    float x[n],y[n];
    printf("how many numbers of coordinates of x enter");
    // scanf("%d",&n);
    printf("enter numbers:");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
        sum_x=0.0;
    for(i=0;i<n;i++)
        sum_x+=x[i];
        mean_x=sum_x/n;
    printf("how many numbers of coordinates of y enter");
    scanf("%d",&n);
    printf("enter numbers:");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);
        sum_y=0.0;
    for(i=0;i<n;i++)
        sum_y+=y[i];
        mean_y=sum_y/n;
    //printf("%f\n",mean_x);
    //printf("%f\n",mean_y);
    m=((x[i]-mean_x)*(y[i]-mean_y))/((x[i]-mean_x)*(x[i]-mean_x));
    b=(mean_y)-(m*mean_x);
    printf("%f\n",mean_x);
    printf("%f\n",mean_y);
    printf("%f\n",m);
    printf("%f\n",b);

   return 0;
}
