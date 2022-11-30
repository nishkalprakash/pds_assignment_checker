/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 4
Description : Program to print out a pattern on the input range[2,10]
*/

#include<stdio.h>
int main()
{
    int z;
    printf("Enter a number[2,10] : ");
    scanf("%d", &z);
    
    const int ROWS = z;
     
    for(int row=1;row<=z;++row)
    {
    int column=1;
    while(column<=row)
    {
    if(column%2==0){
    printf("0 ");
    ++column;
}
   else {
   printf("1 ");
 ++column;
}

   }
   printf("\n");
   }
return 0;

}
