/* Name- Rajpriya Rani
 roll number- 22CS10057
 sec-2
 program-2
 */
#include<stdio.h>
#include<math.h>
void main()
{
    int num,n,d,rev,c=0,x,y,diff;
    printf("Enter a number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)       //reversing digits
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
        c++;
    }
    printf("reversed number= %d \n",rev);       //printing reversed digit
    if((rev-n)>0)
        diff=rev-n;
    else
        diff=n-rev;
    printf("Difference between original and reversed number= %d \n",diff);  //printing difference
    if((n%2)==0)
    {
        printf("Least significant digits to most significant digits:\n");
        while(c>0)
        {
            x=pow(10,c);
            y=n%x;
            printf("%d,",y);        //printing sequence
            c--;
        }
    }
    else
    {
        printf("Most significant digits to least significant digits:\n");
        while(c>0)
        {
            c--;
            x=pow(10,c);
            y=n/x;
            printf("%d,",y);        //printing sequence

        }
    }

}
