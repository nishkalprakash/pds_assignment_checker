// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct polynomial
{
    int number_of_terms;
    int coefficient[1000];
    int exponent[1000];

} polynomial;

int main()
{
    char s1[1000];
    printf("Enter the first polynomial as string : ");
    scanf("%s", s1);

    char s2[1000];
    printf("Enter the second polynomial as string : ");
    scanf("%s", s2);
    polynomial first, second;
    int index_c = 0, index_ex = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == 'x')
        {
            int w = i;
            int coff = 0;
            int j = 0;
            w--;
            int flag = 1;
            while (w >= 0 && (s1[w] > '0' && s1[w] < '9'))
            {
                coff += (s1[w] - '0') * pow(10, j);
                j++;
                w--;
                flag = 0;
                if (s1[w] == '+')
                {
                    break;
                }
                else if (s1[w] == '-')
                {
                    coff *= -1;
                    break;
                }
            }
            if (flag)
            {
                if (s1[w] == '+')
                {
                    coff += 1;
                }
                else if (s1[w] == '-')
                {
                    coff -= 1;
                }
            }
            first.coefficient[index_c] = coff;
            index_c++;
        }
        if (s1[i] == '+' || s1[i] == '-')
        {
            int w = i;
            int exp = 0;
            int j = 0;
            w--;
            int flag = 1;
            while (w >= 0 && (s1[w] > '0' && s1[w] < '9'))
            {
                exp += (s1[w] - '0') * pow(10, j);
                j++;
                w--;
                flag = 0;
                if (s1[w] == '^')
                {
                    break;
                }
            }
            if (flag)
            {
                exp++;
            }
            first.exponent[index_ex] = exp;
            index_ex++;
        }
    }
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s2[i] == 'x')
        {
            int w = i;
            int coff = 0;
            int j = 0;
            w--;
            int flag = 1;
            while (w >= 0 && (s2[w] > '0' && s2[w] < '9'))
            {
                coff += (s2[w] - '0') * pow(10, j);
                j++;
                w--;
                flag = 0;
                if (s2[w] == '+')
                {
                    break;
                }
                else if (s2[w] == '-')
                {
                    coff *= -1;
                    break;
                }
            }
            if (flag)
            {
                if (s2[w] == '+')
                {
                    coff += 1;
                }
                else if (s2[w] == '-')
                {
                    coff -= 1;
                }
            }
            second.coefficient[index_c] = coff;
            index_c++;
        }
        if (s2[i] == '+' || s2[i] == '-')
        {
            int w = i;
            int exp = 0;
            int j = 0;
            w--;
            int flag = 1;
            while (w >= 0 && (s2[w] > '0' && s2[w] < '9'))
            {
                exp += (s2[w] - '0') * pow(10, j);
                j++;
                w--;
                flag = 0;
                if (s2[w] == '^')
                {
                    break;
                }
            }
            if (flag)
            {
                exp++;
            }
            second.exponent[index_ex] = exp;
            index_ex++;
        }
    }
    return 0;
}
