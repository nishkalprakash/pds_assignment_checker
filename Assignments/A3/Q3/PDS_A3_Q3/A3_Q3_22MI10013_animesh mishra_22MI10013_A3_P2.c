/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:3
discription : to do operations
*/

#include<stdio.h>
int main()
{ 
    char a;
    float mynum1,mynum2;
    printf("input two float numbers\n");
    scanf("%c\n%f\n%f" , &a, &mynum1 , &mynum2);
    switch(a){
    case '+':
            printf("addition of %f and %f is %f " , mynum1, mynum2, mynum1+mynum2);
            break;
    case '-':
            printf("subtraction of %f and %f is %f" , mynum1, mynum2 ,mynum1-mynum2);
            break;
    case '*':
            printf("multiplication of %f and %f is %f" ,mynum1 , mynum2,mynum1*mynum2);
            break;
    case '/':
            printf("division of %f and %f is %f" ,mynum1 , mynum2, mynum1/mynum2);
            break;
    }
       return 0;
}
