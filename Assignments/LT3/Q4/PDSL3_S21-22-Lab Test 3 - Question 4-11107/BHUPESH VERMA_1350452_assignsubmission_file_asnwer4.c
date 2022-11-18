#include <stdio.h>
#include<string.h>

int isValid(char *s){

    char r[4000];
    int top = -1;
    int flag = 0;
    int i=0;
    while (s[i] != '\0') {

        if ((s[i] == '{') || (s[i] == '(') || (s[i] == '[')) {
            r[++top] = s[i];
            flag = 1;
        }
        else if ((top>=0) && (flag) && (s[i] == '}') && (r[top] == '{'))
            top--;
        else if ((top>=0) && (flag) && (s[i] == ')') && (r[top] == '('))
            top--;
        else if ((top>=0) && (flag) && (s[i] == ']') && (r[top] == '['))
            top--;
        else if ((s[i] == ']') || (s[i] == '}') ||  (s[i] == ')') )
            return 0;
        i++;
    }

    if (flag && (top == -1))
        return 1;
    return 0;

}
int main()
{
    char str[100];
    printf("Enter Expresseion: ");
    gets(str);
    if(isValid(str) == 1){
        printf("\nMatched Parenthesis");
    }
    else{
        printf("\nUnmatched Parenthesis");
    }
    return 0;
}
