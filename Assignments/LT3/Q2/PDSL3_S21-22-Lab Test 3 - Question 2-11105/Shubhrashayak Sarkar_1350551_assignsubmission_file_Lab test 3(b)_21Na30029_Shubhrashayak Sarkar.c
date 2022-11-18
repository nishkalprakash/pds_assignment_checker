/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>
#define n 26

typedef struct Polynomial
{
    int term;
    int coefficient[10];
    int exponent[10];
} P;

int term_count(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) // this loops provides total number of + or - sign
    {
        if ((s[i] == '+') || (s[i] == '-'))
        {
            count++;
        }
    }
    count += 2;     // As there is two term  after the last and before the first sign
    if (count == 2) // This condition makes sure that when there is not any + or - sign then it returns 1 as term number
    {
        count = 1;
    }
    return count;
}

int main()
{
    P a, b;
    char s[n], t[n];
    printf("Enter the string\n");
    scanf("%s", s);
    printf("Enter the second string\n");
    scanf("%s", t);
    a.term = term_count(s);
    b.term = term_count(t);
    return 0;
}