/*Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta
LAB TEST 1 : SET A -> (Q.2)
Description :Program to find out a certain pattern on the user input
*/
#include<stdio.h>
int main()     
{
    int n;
    printf("Enter a number[2,10] : ");
    scanf("%d", &n);
    
for(int row=1;row<=n;++row)
    {
    int column=1;
    while(column<=row)
    {
    if(column%2==0){
    int g;          // function for the numbers of the even columns respectively 
    for(int i=1;i<=column;i++)
    printf("%d",g = 2+(i(i+1))/2);
    ++column;
}
   else {
    int h; // function for the numbers of the odd columns respectively
    for(int i=1;i<=column;i++)
    printf("%d", h = 2+(i(i+1))/2);
    ++column;
}

   }
   printf("\n");
   }
    
return 0;

}








