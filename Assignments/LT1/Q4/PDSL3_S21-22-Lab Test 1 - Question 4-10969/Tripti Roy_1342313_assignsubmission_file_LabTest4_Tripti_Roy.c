# include<stdio.h>
# include<math.h>
int main(){
    int x[100], y[100], i, j, n, sum1=0, sum2=0;
    float m1=0, m2=0, b, xm=0, ym=0, m;
    printf("Enter number of points: \n");
    scanf("%d", &n);
    printf("n=%d\n", n);
    printf("Enter the x coordinates: \n");
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);

    }
    for(i=0;i<n;i++){
            sum1=sum1+x[i];
    }
    xm=sum1/(float)n;
    printf("Enter the y coordinates: \n");
    for(j=0;j<n;j++){
        scanf("%d", &y[i]);

    }
    for(j=0;j<n;j++){
            sum2=sum2+y[i];
    }
    ym=sum2/(float)n;
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                m1=m1+((x[i]-xm)*(y[j]-ym));
                m2=m2+(pow(x[i]-xm,2));

            }

    }
    m=(float)m1/m2;
    b=ym-m*xm;
    printf("m = %0.2f\n", m);
    printf("b = %0.2f\n", b);
    printf("Line equation: y=%0.2f*x+(%0.2f).\n", m, b);

    return 0;
}
