// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
/*
Versatile scanf()
The scanf() is a popular function in C defined in stdio.h, which is used to read any input value from the keyboard. The function has the following syntax.
    int scanf( const char *format, ... );
Here,
(a)	int is the return type.
(b)	format is a string that contains the format specifiers(s).
(c)	“…” indicates that the function accepts a variable number of arguments.

Example format specifiers recognized by scanf():
(a)	%d to accept input of integers.
(b)	%ld to  accept input of long integers
(c)	%lld to accept input of long long integers
(d)	%f to accept input of real number.
(e)	%c to accept input of character types.
(f)	%s to accept input of a string.

(a)	Using different format specifiers to read values from the keyboard
Read any type of values from the keyboard and print the values on the screen then.
(b)	Using %s to read any string
What the scanf() will read if you call the function below?
char str[100], str1[20], str2[30];
scanf(“%s”, str);    // Say to read “IIT Kharagpur”
int x = scanf(%19s %29s”, str1, str2);
Write a function void abc() which will call the above piece of code and print the values of x, str, str1 and str2 under the following test cases:


(c)	Using scanset format

   char str1[20],str2[20];
   scanf("%[^\n]%*c", str1);
   scanf("%[^\n]s",str2);

Note:
Here, [] is the scanset character. ^\n tells to take input until newline doesn’t get encountered. Here, ^ (XOR -Operator ) is used. Once the character is equal to New-line (‘\n’),  ^ (XOR Operator ) gives false to read the string.  Then, with this %*c, it reads newline character and here used * indicates that this newline character is discarded.

Use the above information to read a message (say up to 1024 characters) from the key board and print the number of numeric characters, special printable characters, words, vowels and consonant and the sentences in the message.
[10 +  5 + 20 = 35]
 
Test cases:

#	INPUT
a1	Indian Institute of Technology Kharagpur

a2	IndianInstituteofTechnologyKharagpur West Bengal

a3	IIT Kharagpur

b1	pds lab week7 question2.
b2	iit@kgp spring semester.
b3	Week7 lab.#iitkgp.
b4 This sentence has 9 digits, 6 special charcters, 16 words, 21 vowels, 46 consonants, 1 sentences.
*/

#include <stdio.h>

#include <string.h>

int my_scanf(char *format)
{
    int ret = 0;
    int ctr = 0;
    switch (format[++ctr])
    {
    // Example format specifiers recognized by scanf():
    // (a)	%d to accept input of integers.
    // (b)	%ld to  accept input of long integers
    // (c)  %lf to accept input of double
    // (d)	%lld to accept input of long long integers
    // (e)	%f to accept input of real number.
    // (f)	%c to accept input of character types.
    // (g)	%s to accept input of a string.
    case 'd':
    {
        int d;
        printf("Enter an integer: ");
        if (scanf("%d", &d) == 1)
        {
            printf("Input is a integer: %d\n", d);
            ret++;
        }
        break;
    }
    case 'l':
    {
        switch (format[++ctr])
        {
        case 'd':
        {
            long int ld;
            printf("Enter a long integer: ");
            if (scanf("%ld", &ld) == 1)
            {
                printf("Input is a long integer: %ld\n", ld);
                ret++;
            }
            break;
        }
        case 'f':
        {
            long double ld;
            printf("Enter a long double: ");
            if (scanf("%Lf", &ld) == 1)
            {
                printf("Input is a long double: %Lf\n", ld);
                ret++;
            }
            break;
        }
        case 'l':
        {
            switch (format[++ctr])
            {
            case 'd':
            {
                long long int lld;
                printf("Enter a long long int: ");
                if (scanf("%lld", &lld) == 1)
                {
                    printf("Input is a long long integer: %lld\n", lld);
                    ret++;
                }
                break;
            }
            default:
            {
                printf("Unknown format specifier: '%s'\n", format);
                return -1;
            }
            }
            break;
        }

        default:
        {
            printf("Unknown format specifier: '%s'\n", format);
            return -1;
        }
        }
    }
    case 'f':
    {
        float f;
        printf("Enter a float: ");
        if (scanf("%f", &f) == 1)
        {
            printf("Input is a float: %f\n", f);
            ret++;
        }
        break;
    }
    case 'c':
    {
        char c;
        printf("Enter a character: ");
        if (scanf(" %c", &c) == 1)
        {
            printf("Input is a character: %c\n", c);
            ret++;
        }
        break;
    }
    case 's':
    {
        char s[100];
        printf("Enter a string: ");
        if (scanf("%s", s) == 1)
        {
            printf("Input is a string: %s\n", s);
            ret++;
        }
        break;
    }
    default:
    {
        printf("Unknown format specifier: '%s'\n", format);
        return -1;
    }
    }
    return ret;
}

int main()
{
    int x;
    // ### Part (a) START ###
    printf("\n### Part (a) START ###\n");
    // ### A verstile scanf that can read any type of input and print it properly ###
    // Ask user for format specifier
    char format[5];
    printf("Enter format specifier: ");
    scanf("%[^\n]s", format);
    x = my_scanf(format);  // call my_scanf function
    // ### Part (a) END ###
    printf("### Part (a) END ###\n");


    // ### Part (b) START ###
    printf("\n### Part (b) START ###\n");
    // ### Code to saving only the first 19 characters in str1 and the rest 29 in str2 ###
    // Initialize strings
    char str[100], str1[20], str2[30];
    // Take input
    printf("Enter a string with at least 2 spaces: ");
    scanf("%s", str);
    x = scanf("%19s %29s", str1, str2);
    // Print the output
    printf("%d %s %s %s", x, str, str1, str2);
    // ### Part (b) END ###
    printf("\n### Part (b) END ###\n");

    // ### Part (c) START ###
    printf("\n### Part (c) START ###\n");
    fflush(stdin);
    // ### Counting the number of numeric characters, special printable characters, words, vowels and consonant and the sentences in the message. ###
    char str3[1024];
    printf("Enter a long string: ");
    scanf("%[^\n]%*c", str3);
    // Get string length
    int len = strlen(str3);
    // Check for string length
    if (len > 1024)
        return printf("String too long!\n");
    // Counters to store respective values
    int num = 0, sp = 0, words = 0, vow = 0, con = 0, sent = 0;
    // Loop to iterate over the string
    for (int i = 0; i < len; i++)
    {
        // Check for number of digits
        if (str3[i] >= '0' && str3[i] <= '9')
            num++;
        // Check for number of special characters
        else if (str3[i] == '@' || str3[i] == '#' || str3[i] == '$' || str3[i] == '%' || str3[i] == '^' ||
                 str3[i] == '&' || str3[i] == '*' || str3[i] == '(' || str3[i] == ')' || str3[i] == '-' ||
                 str3[i] == '_' || str3[i] == '+' || str3[i] == '=' || str3[i] == '{' || str3[i] == '}' ||
                 str3[i] == '[' || str3[i] == ']' || str3[i] == '|' || str3[i] == '\\' || str3[i] == ':' ||
                 str3[i] == ';' || str3[i] == '"' || str3[i] == '\'' || str3[i] == '<' || str3[i] == '>' ||
                 str3[i] == ',' || str3[i] == '.' || str3[i] == '?' || str3[i] == '!' || str3[i] == '~' ||
                 str3[i] == '`')
            sp++;
        // Check for number of vowels
        else if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u' ||
                 str3[i] == 'A' || str3[i] == 'E' || str3[i] == 'I' || str3[i] == 'O' || str3[i] == 'U')
            vow++;
        // Check for number of consonants
        else if ((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z'))
            con++;
        // Check for number of words
        if (str3[i] == ' ')
            words++;
        // Check for number of sentences
        if (str3[i] == '.' || str3[i] == '?' || str3[i] == '!' || str3[i] == '\n')
        {
            sent++;
            words++;
        }
    }
    printf("Number of digits: %d\n", num);
    printf("Number of special characters: %d\n", sp);
    printf("Number of words: %d\n", words);
    printf("Number of vowels: %d\n", vow);
    printf("Number of consonants: %d\n", con);
    printf("Number of sentences: %d\n", sent);

    // ### Part (c) END ###
    printf("### Part (c) END ###\n");
    return 0;
}