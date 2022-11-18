/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>

int main()
{
    int a,b,c,n;
    printf("enter two digits:");//user input
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("numbers:\n");
    for(int i=0;i<32;i++)//make all possible 5 digit binary number
    {                       //this gives us all permutations
        n=0;
        int chk=i;
        for(int j=0;j<5;j++)
        {
            if(chk%2==0)//convert 0 and 1s to user input numbers
            n=n*10+a;
            else
            n=n*10+b;
            chk=chk/2;
        }
        if(n%c!=0)//check if number is to be printed
        printf("%d\n",n);//print
    }
    printf("\n");
    
    return 0;
}