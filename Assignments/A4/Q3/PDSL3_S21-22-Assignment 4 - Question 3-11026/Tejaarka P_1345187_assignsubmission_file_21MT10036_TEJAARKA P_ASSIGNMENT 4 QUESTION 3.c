/*TEJAARKA PIRIDI

  21MT10036

  ASSIGNMENT 4 QUESTION 3*/


//C program to implement a queue using an array

#include <stdio.h>


# define max 100

int enque(int A[],int len, int n)
{
    int i,flag=1;


    for (i=0;i<len;i++){

        if (A[i]==n){

            printf("The queue contain %d",n);

            flag=0;

            break;

        }
    }

    if (flag==1){

        if (len==max) printf("Queue reached its maximum size MAX");

        else {
            A[len]=n;

            len++;

            printf("The queue contains : ");


            printf("%d",*A);


            for (i=1;i<len;i++) printf(",%d",A[i]);

        }
    }
    return flag;

}

int deque (int A[],int len)

{
    int i,flag=0;


    if (len==0) printf("The queue is empty !!");

         // shift all the elements from index 2 till rear
        // to the left by one

      else{

        flag=1;

        printf("Removed element %d\n",*A);

        for (i=0;i<len-1;i++) A[i]=A[i+1];

        len--;

        // print queue elements

        printf("The queue contains : ");

        printf("%d",*A);

        for (i=1;i<len;i++) printf(",%d",A[i]);
    }
    return flag;
}

// Driver code

int main()
{
    int n,op,nums[max];


    static int LEN=0;


    printf("Enter the option: 1. Enque, 2. Deque \n");

    scanf("%d",&op);


    while (op!=1){

        if (op==2) {deque(nums,LEN);printf("\nEnter the option: 1. Enque, 2. Deque \n");}

        else
            printf("Enter a valid option !!");

             scanf("%d",&op);

    }
    if (op==1) {
            printf("Enter the element : ");


            scanf("%d",&n);


            if (enque(nums,LEN,n)==1) LEN++;


    }
    printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");



    scanf("%d",&op);


    while (1>0){
        if (op==1){

            printf("Enter the element : ");


            scanf("%d",&n);


            if (enque(nums,LEN,n)==1) LEN++;


            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");

        }
        else
            if (op==2) {if(deque(nums,LEN)==1) LEN--;printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");}

        else
            if (op==3) break;


        else printf("Enter a valid option");


        scanf("%d",&op);


    }
    printf("exit !!");
}
