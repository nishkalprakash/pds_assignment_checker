#include<stdio.h>
/*Section-2
Roll No- 22HS10058
Name - Ujjawal Jain
Assignment no.4
Question-3  */
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            //for spaces
            for(int j=1;j<=(n-i);j++){
                printf(" ");
            }
            for(int t=i;t<=(2*i-1);t++)
            {
                printf("%d",t%10);
            }
            for(int t=(2*i-2);t>=i;t--)
            {
                printf("%d",t%10);
            }
            //for spaces
            for(int j=1;j<=(n-i);j++){
                printf(" ");
            }
            printf("\n");
    }
return 0;
}
