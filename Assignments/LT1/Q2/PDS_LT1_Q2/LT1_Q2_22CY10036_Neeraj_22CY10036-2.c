/*Name:Neeraj
  Roll No.: 22CY10036
  Section: 2
  Problem No.:02
  Description:

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);

    int A = n%2;


    if(A == 1){

        printf("%d,%d,%d,%d",n,n%1000,n%100,n%10);
    }
    if(A == 0){
         int a= n/10;
        int b= a/10;
        int c=b/10;

        printf("%d,%d,%d,%d",c,b,a,n);}

}
