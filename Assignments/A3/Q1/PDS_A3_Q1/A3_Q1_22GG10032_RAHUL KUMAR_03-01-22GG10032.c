# include<stdio.h>

int main()
{
    int a,b,c,e,f;
    printf("Enter the numbers : a,b,c,e,f");
    scanf("%d %d %d %d %d",&a,&b,&c,&e,&f);
    int A=a%2;
    printf("%d",A);
    int B=b%2;
    printf("%d",B);
    int C=c%2;
    printf("%d",C);
    int E=e%2;
    printf("%d",E);
    int F=f%2;
    printf("%d\n",F);
    scanf("%d %d %d %d %d",&A,&B,&C,&E,&F);
     int sum=A+B+C+E+F;
    printf("%d\n",sum);

    return 0;

}
