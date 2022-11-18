/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 50
#define T 1
#define F 0


struct Stack {
    int first;
    int arr[MAXSIZE];
} ex;


void start() {
 ex.first = -1;
}


int Full() {                                                          //Full function
    if(ex.first >= MAXSIZE-1)
        return T;
    else
        return F;
}

void increment(int num) {                                             //increment function
    if (Full())
        printf("Stack is Full\n");
    else {
        ex.arr[ex.first + 1] = num;
        ex.first++;
    }
}

int Empty() {                                                          //Empty function
 if(ex.first == -1)
     return T;
 else
     return F;
}


int decrement() {                                                        //decrement function
    if (Empty())
        printf("Stack is Empty\n");
    else {
     ex.first = ex.first - 1;
        return ex.arr[ex.first+1];
    }
}

int main() {                                                                     //main function
    char inputexpression[50], c;
    int i, size;
    start();
    printf("Enter expression:\n");
    gets(inputexpression);
    size = strlen(inputexpression);


    for(i = 0; i < size; i++){
        if(inputexpression[i] == ('{')||('(')||('['))
            increment(inputexpression[i]);
        else if(inputexpression[i] == ('}')||(')')||(']'))
            deecrement();
            return 0;
        }
    }

    if(Empty())
        printf("Result: Matched parenthesis\n");
    else
        printf("Result: Unmatched parenthesis\n");

    return 0;
}
