/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char s, a[100];//s holds the char inputted one at a time and stores it in array a of max length 100
    int count = -1;//counter for indexing in char array a
    printf("Enter the expression(string terminates on pressing enter):");
    scanf("%c", &s);
    while (s != '\n') {//stores string until enter is pressed
        a[++count] = s;
        //similar logic to stacks
        if ((a[count] == ')' && a[count - 1] == '(') || (a[count] == ']' && a[count - 1] == '[') || (a[count] == '}' && a[count - 1] == '{')) {//looking for a match in the brackets
            a[count] = '\0';//as the brackets have matched, we are removing them.
            a[count - 1] = '\0';
            count -= 2;//going 2 places back as we removed pair of brackets
        }
        scanf("%c", &s);
    }
    printf("\nThe string left after eliminating bracket pairs is:%s\nResult:",a);

    if (a[0] == '\0') {//nothing is left, all elements are matched
        printf("Matched parenthesis!\n");
    }
    else {//some brackets are still left
        printf("Unmatched Parenthesis!\n");
    }
    return 0;
}
