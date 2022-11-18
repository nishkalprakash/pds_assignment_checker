/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>

int MAX=100;
typedef struct{
        int element[100];
        int frontIndex = 0;
        int endIndex = 0;

    }myqueue;

myqueue test;

void enqueue()
  {
   int n;
   scanf("%d",&n);
   int k=test.endIndex;
    test.element[k]=n;
    test.endIndex++;

}
void dequeue()
    {
        int n=test.frontIndex;
        test.element[n]=0;
        for(int i=0;i<=test.endIndex;i++){
            test.element[i]=test.element[i+1];
        }
        test.endIndex--;
    }


    int main()
{
    printf("Enter the option: 1.Enqueue 2.Dequeue");
    int i=0;
    scanf("%d",&i);
    if(i==1){
            enqueue();
        }
        if(i==2){
            printf("The queue is empty!");

    while(i!=3)
    {
        printf("Enter the option: 1.Enqueue 2.Dequeue 3.Exit");
        scanf("%d",&i);
        if(i==1){
            enqueue();
        }
        if(i==2){
            if(test.endIndex==0)
            printf("The queue is empty!");
            else
                dequeue();

        }
        if(i==3)
        {
            return 0;
        }
    }


    return 0;
}
