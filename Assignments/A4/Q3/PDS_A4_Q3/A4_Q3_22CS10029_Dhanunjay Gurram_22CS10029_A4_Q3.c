//This program prints the digits of given number in reverse in words
#include <stdio.h>
int main()
{
    int x;
    long int num;                                                    //long int ensures that we can store an int with more than 9 digits
    printf("Enter the integer:");
    scanf("%ld",&num);
    if (num==0) printf("Zero ");
    while (num!=0){
         x=num%10;
         switch (x) {
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");                                   
                    break;                                               
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
            case 0: printf("Zero ");
                    break;  }
          num=num/10; }
     printf("\n");
     return 0;
}
