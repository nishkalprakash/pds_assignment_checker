/*section 2
Roll No: 22EC10067
Name :   Ratan Kumar
Assignment No:4 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
            for(j=1;j<=n;j++){
               printf("%d\n",j);
            }
    }

    return 0;
}