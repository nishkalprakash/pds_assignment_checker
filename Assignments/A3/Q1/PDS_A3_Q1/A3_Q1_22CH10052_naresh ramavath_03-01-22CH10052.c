# include<stdio.h>
# include<math.h>

int main() {
    int a,b,c,d,e;
    printf(" enter five numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if ((a%2!=0)&&(b%2!=0)&&(c%2!=0)&&(d%2!=0)&&(e%2!=0)) {
    if(a>b>c>d>e)
            printf("smallest three odd numbers ");

    }
    return 0;
}
