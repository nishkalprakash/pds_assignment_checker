/*
name: JANAK Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:5(A)
*/

#include<stdio.h>

void swap(int* x, int* y,int* z);


int main(){

    int a,b,c;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;


    //take input value of a,b,c  from user

    printf("enter the value of a: \n");
    scanf("%d",&a);
    printf("enter the value of b : \n");
    scanf("%d",&b);
    printf("enter the value of c : \n");
    scanf("%d",&c);

    // before calling a function

    printf("address of a : %u \n",ptr1);
    printf("address of b : %u \n",ptr2);
    printf("address of c : %u \n",ptr3);


    //after calling function

    printf("address of a : %u \n",ptr1);
    printf("address of b : %u \n",ptr2);
    printf("address of c : %u \n",ptr3);




    // call by reference

    swap(&a,&b,&c);
    printf("the value of a :%d \n",a);
    printf("the value of b :%d \n",b);
    printf("the value of c :%d \n",c);
    return 0;


}

void swap(int* x, int* y,int* z){

    if(*x>*y){

      int t =*x;
      *x = *y;
      *y = t;

    }
    else if (*x > *z){
        int t = *x;
        *x = *z;
        *z =t;
    }
}

