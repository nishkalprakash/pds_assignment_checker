#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x0,x1,e;
    printf("value of x0\n");
    scanf("%f",&x0);
    printf("value of  tolerance limit\n");
    scanf("%f",&e);
    printf("maximum number of iterations\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    x1=x0-(pow(x0,3)-25)/(3*pow(x0,2));

    printf("%f %f %f %f\n",x0,x1,fabs(x1-x0));
    if(fabs(x1-x0)<e){
        break;
    }
    x0=x1;
    return 0;
    }
}
