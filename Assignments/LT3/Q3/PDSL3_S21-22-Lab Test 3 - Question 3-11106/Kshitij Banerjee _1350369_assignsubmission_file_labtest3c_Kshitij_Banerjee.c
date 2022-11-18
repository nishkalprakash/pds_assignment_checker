// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks


#include <stdio.h>
#include <stdlib.h>

void combination(char a, char b, char *output, int index)
{
    if (index == 5)
    {
        // printf("%s ",output);
        // return;

        int number = 0;
        int place = 10000;
        for (int i = 0; i < 5; i++)
        {
            number = number + ((output[i] - '0') * place);
            place /= 10;
        }

        // printf("Numbers : %d\n", number);

        if (number % ((a - '0') + (b - '0')) != 0)
        {
            printf("%d ", number);
        }
        return;
    }
    output[index] = a;
    combination(a, b, output, index + 1);
    output[index] = b;
    combination(a, b, output, index + 1);
}
int main()
{
    char a, b;
    printf("Enter two Digits : ");
    scanf("%c", &a);
    // getchar();
    // gets(a);
    getchar();
    scanf("%c", &b);

    // printf("%c %c\n", a, b);

    char output[5];
    for (int i = 0; i < 5; i++)
    {
        output[i] = 'a';
    }
    // printf("%s", output);

    int index = 0;
    printf("Numbers : \n");
    combination(a, b, output, index);
    return 0;
}
