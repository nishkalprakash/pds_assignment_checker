//SHRITIK JAISWAL
//21BT30026
//MACOS
//CODE FOR Queing and Dequing elements.
#include<stdio.h>
void print(char ARRAY[50])
{
printf("%s",ARRAY);
}
const int MAX=100;
//Declaering the function "QUE" to que the data.
int QUE(int ARRAY[],int L, int n)
{
    int i;
    int Theflag=1;
    //making the for loop for showing that the entered element already exists in the data
    for(i=0;i<L;i++)
    {
        if(ARRAY[i]==n)
        {
           printf("The queue contains the element %d",n);
           Theflag=0;
           break;
        }
    }
    if(Theflag==1)
    {
        if(L==MAX)
        {
         printf("Queue has reached the limiting size");
        }
        else
        {
            ARRAY[L]=n;
            L=L+1;
            printf("The queue contains:");
            printf("%d", *ARRAY);
            for(i=1;i<L;i++)printf(",%d",ARRAY[i]);
        }
    }
    return Theflag;
}
//Declaering the function "DEQUE" to deque the data.
int DEQUE(int ARRAY[],int L)
{
    int i;
    int Theflag=0;
    if (L==0) printf("The queue is empty!");
    else
    {
        Theflag=1;
        printf("Removed element %d\n",*ARRAY);
        //for loop for transfering data in a que one by one
        for (i=0;i<L-1;i++) 
        ARRAY[i]=ARRAY[i+1];

        L--;
        printf("The queue contains the elements : ");
        printf(" %d ",*ARRAY);
        for (i=1;i<L;i++) printf(",%d",ARRAY[i]);
    }
    return Theflag;
}

int main()
{
    int n;
    int Z;
    int NO_[MAX];
    //declaring a static variable
    static int LENGHT=0;
    printf("Enter the option: 1. Enque, 2. Deque \n");
    scanf("%d",&Z);
    while (Z!=1)
    {
        //PRINTING the statement of deque when Z is 2
        if (Z==2) 
        {
            DEQUE(NO_,LENGHT);printf("\nEnter the option: 1. Enque, 2. Deque \n");
        }
        else 
        printf("Please Enter a valid option!The input is invalid");
        scanf("%d",&Z);
    }
    if (Z==1) {
            printf("Enter the element : ");
            scanf("%d",&n);
            if (QUE(NO_,LENGHT,n)==1)
             LENGHT=LENGHT+1;
    }
    printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit \n");
    scanf("%d",&Z);
    //Making a infinite while loop till we want and then we use break; to exit the loop
    while (1>0)
    {
        if (Z==1)
        {
            printf("Enter the element : ");
            scanf("%d",&n);
    //counting +1 to the length of que when (QUE(nums,LEN,n)==1)
            if (QUE(NO_,LENGHT,n)==1)
             LENGHT=LENGHT +1;
            printf("\nEnter the option : 1. Enque, 2. Deque, 3. Exit\n");
        }
        //deque when operation (Z)  is 2
        else if (Z==2)
        {
            if(DEQUE(NO_,LENGHT)==1) 
            {
                LENGHT=LENGHT-1;
                printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
            }
        //exiting the program
        else if (Z==3) break;
        else printf("Enter a valid option!");
        scanf("%d",&Z);
    }
    printf("Exiting the program!");
}
}