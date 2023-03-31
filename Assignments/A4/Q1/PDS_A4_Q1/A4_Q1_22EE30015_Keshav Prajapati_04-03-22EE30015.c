/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 4
Description : To print numbero pyramid for given number of rows
*/

#include<stdio.h>

int main()
{
    int n_of_rows, value;
    printf("Enter number of rows : ");
    scanf("%d", &n_of_rows);

    for(int i = 1; i <= n_of_rows; i++)
    {

        //This for loop is to print the space that is present before start
        for(int j = 1; j<= n_of_rows-i; j++)
        {
            printf(" ");
        }

        //The below two loops is to print the elements in each row
        for(int k = i; k <= (2*i-1); k++)
        {
            printf("%d",k%10);//We are printing the remainder so as to get numbers not larger than 9
            value = k;
        }
        for(int m = value-1; m >= i; m--)//This loop prints the other reverse part of the series
        {
            printf("%d", m%10);
        }
        printf("\n");
    }

    //So i is defined for rows
    //j is defined for spaces
    //And k, m are defined for values of series

    return 0;
}
