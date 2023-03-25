#include <stdio.h>            //22EC30015
int main()    //main function
{
    int n1,new,n2;      //declaring variables
    printf("Enter the numbers(-999 to 999):");
    scanf("%d%d",&n1,&n2);     //taking input of the 2 numbers
    if((n1/100==0 && n2/100!=0)||(n1/100!=0 && n2/100==0) || n1<-999 || n2<-999 || n1>999 || n2>999)   //checking if the user enters 2 numbers of different digits
        printf("Wrong Input");
    else
    {

    if(n1/100!=0)    //3-digit number
        new=(n1%10)*100+(n1/100)+((n1/10)%10)*10;   //reversing the digits
    else
        new=(n1%10)*10+(n1/10);                     //reversing the digits

     if(n2==new)  //comparing the reversed number with the input number
            printf("Perfect Pair");
     else
            printf("Not a Perfect Pair");
    }

     return 0;    //end


}
