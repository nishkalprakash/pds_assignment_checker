/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 4
Operating System: windows
*/
#include<stdio.h>
#define max 3
void enque(int A[],int x)
{
    int i;
    for(i=0;i=max;++i)
    {
        if(A[i]=='\0')
        {
            A[i]=x;
            break;
        }
    }
}
void deque(int A[])
{
    int i;
    for(i=0;i=max;i++)
    {
        A[i]=A[i+1];
    }

}
int main()
{
    int i,x,k;
    struct queue
    {
        int A[max];
        int a1;
        int a2;
    } q;
    q.a1=q.A[0];
    for(k=0;i==3;k++)
    {
    printf("Enter the Option\n1.enque 2.deque");
    scanf("%d",&i);
    if (i==1)
        {
            printf("enter the value to be added:");
            scanf("%d",&x);
            enque(q.A,x);
            printf("the queue contains:");
            for(i=0;q.A[i]!='\0';++i)
            printf("%d",q.A[i]);
        }
    if (i==2)
        {
            printf("the removed value:%d",q.a1);
            deque(q.A);
            printf("the queue contains:");
            for(i=0;q.A[i]!='\0';++i)
            printf("%d",q.A[i]);
        }
    }
}
