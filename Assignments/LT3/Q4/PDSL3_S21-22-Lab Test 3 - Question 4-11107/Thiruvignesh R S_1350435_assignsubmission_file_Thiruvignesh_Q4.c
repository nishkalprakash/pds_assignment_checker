/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#define N 200

int main() {
    char s1,s2[N]; //defining s2 for stack, s1 takes in every char
    int c=-1; //count variable

    printf("enter expression(hit \"space\" when you're done ): ");
    scanf("%c", &s1);

    //loop runs as long as space is not entered
    while (s1 != ' ') {
        c=c+1; //adding one to traverse every element
        s2[c]=s1; //taking that character in stack

        if ((s2[c]=='}' && s2[c-1]=='{') || (s2[c]==')' && s2[c-1]=='(') || (s2[c]==']' && s2[c-1]=='[')) {//checking if their corresponding paranthesis is entered at the right position or not
            //if yes, we remove those parenthesis
            s2[c]='\0';
            s2[c-1]='\0';
            c=c-2;
        }

        scanf("%c", &s1); //scans expression element by element
    }

    //checking if stack has any elements after deletions
    //if it does, its unmatched parenthesis 
    if (s2[0]!='\0'){
        printf("Unmatched parenthesis\n");
    }
    else{
        printf("Matched parenthesis\n");
    }


    return 0;
}