#include <stdio.h>                   //including the standard input output library

/*declaring global variables*/

unsigned int n;                      //unsigned int is a datatype to store only positive integers and zero
char c;                              //declaring the character variable c
double fl;                           //declaring a very large floating datatype variable

int main()
{
    scanf("%u %c %lf",&n,&c,&fl);    //taking the positive integer, character and large floating point inputs respectively 
    printf("%2d %d %0.3e",n,c,fl);   //printing the positive integer, character and large floating point values in the specified format
    return 0;                        //the int main() will return 0
}
