/*
Section = 2
Roll No. = 22AG30036
Name = Priyangshu Barman
Assignment = 4(Q3)
Description = To print the Numero-Pyramid for a given height.
*/
#include<stdio.h>
int main()
{
    int rows;
    int count1 = 0;//counting number of rows
    int count2 = 0;//counting number of spaces
    int a = 0;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    int i;
    int j;// initialising the number of spaces
    for(i = 1;i <= rows;++i)
    {
        for(j = 1;j <= rows-i;++j)
        {


            printf(" ");
            ++count1;
    }
    while(a != 2 * i - 1)
    {
        if(count1 <= rows - 1)
        {
        printf("%d ", i + a);
        ++count1;
    }
    else{
            ++count2;
    printf("%d ", (i + a - 2 * count2));
}
++a;
    }
    count2 = count1 = a = 0;
    printf("\n");
    }
return 0;
}
