/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

/*
1.taking two digits as input
2.starting from 5th place recursively allotting the places to c,d respectively
3.finally checking the condition given
*/

void finder(int c,int d,int order)
{
    static int number=0;
    if(order==0)
    {
        if(number%(c+d)==0)return;
        printf("%d\n",number);
        return;
    }
    number += c*order;
    finder(c,d,order/10);
    number -= c*order;
    number += d*order;
    finder(c,d,order/10);
    number -= d*order;
}

int main()
{
    int c,d;
    printf("Enter two digits c,d : ");
    scanf("%d %d",&c,&d);
    printf("Numbers : \n");
    finder(c,d,10000);
    return 0;
}
