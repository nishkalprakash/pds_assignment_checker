#include <stdio.h>
int main()
{
    int n, S1, S3;
    long S2;
    printf("n = ");
    scanf("%d", &n);
    S1=n*(n+1)/2; //As we are not allowed to use loops we would use the formula for adding consecutive integers till n as given
    S2=((long)n*(n+1)*(2*n+1)/6); //As we are not allowed to use loops we would use the formula for adding consecutive integers till n as given
    int n1, n2, n3; /*as we are not allowed to use loops, justification for taking extra integer values n1 n2 and n3 is to avoid complexity and errors in the program n1
    represents unit digit n2- tens and n3 - hundreds, simply  add them to get sum of digits*/
    n1=n%10;//remainder when divided with 10 is units place
    n2=(n%100-n1)/10;//Logically gives tens place as n2
    n3=(n-n1-n2*10)/100;//hundreds place
    S3=n1+n2+n3;
    printf("\nS1=%d \n", S1);
    printf("S2=%ld \n", S2);
    printf("S3=%d \n", S3);
    return 0;
}
