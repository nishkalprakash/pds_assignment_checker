/*NAME   :K.Mohana Priya Nandini
ROLL NO:22AE30015
SECTION: 2
AASIGNMENT NO:4*/
#include<stdio.h>
int main()
{
    int n,rows ,r1,r2,r3,num=0;
    n=0 ;
    printf("enter the no of rows");
    scanf("%d",&rows);
    for (r1=1;r1<=rows;r1++)
    for (r2=1;r2<=rows;r2++){
        printf("%d",num%10);
    }
    for (r3=1;r3<=rows;r3++){
        printf("%d",num%10);
    }
    printf("\n");



}
