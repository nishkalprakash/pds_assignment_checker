# include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of points\n"); //value of n
    scanf("%d",&n);
    float x[n],y[n],m,b=0,a=0,x1,y1;
    printf("Enter %d x co-ordinates :\n",n);
    for(int i=1;i<=10;i++){
        scanf("%f",&x[i]);
        }

    printf("Enter %d y co-ordinates :\n",n);
    for(int i=1;i<=10;i++){
        scanf("%f",&y[i]);
        }
    float sumx=0,sumy=0;
    for(int i=1;i<=10;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
    }
    sumx=sumx/n;
    sumy=sumy/n;
    for(int i=1;i<=10;i++)
    {
        a+=(x[i]-sumx)*(x[i]-sumx);
    }
    for(int i=1;i<=10;i++)
    {
        b+=(x[i]-sumx)*(y[i]-sumy);
    }

float c;
//printf("the sumx=%f sumy%f ,a=%f ,b=%f",sumx,sumy,a,)
    m=b/a;
    c=sumy-m*sumx;
    printf("\nThe slope of line is :%0.1f \nThe y itercept is %0.1f\n",m,c);
    if(c>0){
        printf("\nLine equation y=%0.1fx+%0.1f\n",m,c);}
    if(c<0){
        printf("\nLine equation y=%0.1fx 0.1%f\n",m,c);}
}
