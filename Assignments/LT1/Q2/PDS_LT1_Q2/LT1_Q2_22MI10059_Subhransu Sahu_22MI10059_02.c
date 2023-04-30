#include <stdio.h>
int main ()
{
    int n, m, j=1, k, h, a, b,c=10,s=10;
    printf("Enter the integer:");
    scanf("%d", &n);

      if(n%2!=0)
        {
            printf("Least Significant to most significant digit:"); while(1){
            m = n/c;
            k = n - m*c;
            c = c*10;
            printf("%d",k);

            if(k == n)
            {
                break;
            }
            printf(",");
        }}
        if(n%2==0)
        { printf("Most Significant to least significant digits:");
            while(1){
            h = n/j;
            j = j*10;


            if(h==0)
            {
                break;
            }
             printf("%d",h);
            printf(",");}


        }
        printf("\n The reverse of the number is:");
        while(n>0){
            b=n;
            n/=s;
            a = b - n*s;
            s = s*10;
            printf("%d", a);

        }




    return 0;





}
