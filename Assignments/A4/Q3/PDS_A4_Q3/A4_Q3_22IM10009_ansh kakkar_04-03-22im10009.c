#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int a=i;a<=2*i-1;a++)
        {     printf("%d",a%10);

        }
        for(int s=2*i-2;s>=i;s--)
        {
            printf("%d",s%10);
        }
         printf("\n");
    }
return 0;
}
