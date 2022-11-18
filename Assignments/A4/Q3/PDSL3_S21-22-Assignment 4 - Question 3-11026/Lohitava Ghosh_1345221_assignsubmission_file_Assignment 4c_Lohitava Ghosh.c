/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

void enqueue(int li[])
{
    int i=sizeof(li)/sizeof(int);
    scanf("%d",&li[i]);
}

void dequeue(int li[0])
{
    int i=1,n,y;
    printf("The removed element is: %d",li[0]);
    y=sizeof(li)/sizeof(int);
    for (i=1;i<y;i++)
    {
        li[i-1]=li[i];
    }
}

int main()
{
    int n,i,x;
    printf("Enter maximum number of elements: ");
    scanf("%d",&n);
    int li[n];
    printf("Enter choice: ");
    scanf("%d",&x);
    while (1)
    {
        if (x==1)
        {
            i=sizeof(li)/sizeof(int);
            enqueue(li[i]);
        }
        else if (x==2)
        {
            dequeue(li[0]);
        }
        else
        {
            break;
        }

        return 0;
    }
}
