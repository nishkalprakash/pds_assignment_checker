/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 3(c)
*/

#include <stdio.h>
int main()
{
    int c,d;
    printf("Enter the two numbers : ");
    scanf("%d %d",&c, &d);
    for (int i=10000;i<100000;i++) //for loop to check all the 5 digit numbers
    {
        int num=i;
        int temp1=0;
        for (int j=0;j<5;j++) //for loop for only those integers which contain c and d
        {
            if(num%10 != c && num%10 != d)
            {
                temp1=1;
            }
            num=num/10;
        }
        if(temp1==0 && (i%(c+d))!=0)
        {
            printf("%d ",i); //printing the numbers which contain only c and d and are not divisible by (c+d)
        }
    }
    printf("\n");
    return 0;
}