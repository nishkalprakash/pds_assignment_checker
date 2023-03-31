//Roll no : 22MT10050
//Name : Shivee Gupta
//LAB : 4
#include<stdio.h>
int main ()
{
    int i,r,j,k;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=r-i;j>=i;j--) printf(" ");
        for(k=1;k<=i;k++) printf("1");
        printf("\n");
            }

return 0;
}
