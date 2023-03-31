/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 4
Description: Numero pyramid*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows:");//request number of lines from the user
    scanf("%d", &n);//input n
    int i;
    if(n>0)//Number of rows cannot be negative
    {
      for(i=1;i<n+1;++i)//each iteration is for a single line
    {
        int j=0;
        for(j=0;j<n-i;++j)//print the blank spaces to create the shape of a triangle
        {
            printf(" ");
        }
        int k=i, m=1;
        while(k>9){k=k-10;}//check if the first digit of each line is a single digit character
        while(m<=i)//print nos. in ascending order
        {
            while(k>9){k=k-10;}//check if k is single digit or not
            printf("%d",k);
            ++k;
            ++m;
        }
        --k;//decrement k
        while(i<0){k=k+10;}//check if k is positive or not
        int l=0;
        while(l<i-1)//print nos. in descending order
        {
            --k;//decrement k
            while(k<0){k=k+10;}//check if k is positive or not
            printf("%d", k);
            ++l;
        }
        printf("\n");//next row
    }
    }
return 0;
}

