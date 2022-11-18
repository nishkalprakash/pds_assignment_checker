/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:LAb test 3 ,Question 3
*/


#include <stdio.h>
#include <stdlib.h>

void solution(int number,int c,int d)
{
    if(number > 9999 && number < 100000)  //checks 5 digit number when called
    {
        if(number%(c+d) != 0)     //checks if number is divisible by c+d or not
            printf("%d ",number);
        return;
    }
    solution(number*10+c,c,d);    //recursive calling of the function again and the number is being buildup
    // and its digit are increasing recurisvely
    solution(number*10+d,c,d);
}

int main()
{
    int c,d;
    printf("Enter two digits:");
    scanf("%d %d",&c,&d);   //enter two numbers
    printf("Numbers:\n");
    solution(0,c,d);  //recursive calling of the function
}
