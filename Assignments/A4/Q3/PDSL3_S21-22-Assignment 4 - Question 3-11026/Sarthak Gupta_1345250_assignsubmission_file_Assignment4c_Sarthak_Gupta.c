#include<stdio.h>
#define Max 100
typedef struct 
{
    char element[Max];
    int index1;
    int index2;
}queue;
queue enque(queue a)//for adding 1 element
{
    int i;
    if(a.index1==0&&a.index2==0)
    {
        scanf(" %c",&a.element[0]);
        a.index2++;//increases index2 by 1
    }
    else
    {
        scanf(" %c",&a.element[a.index2]);
        a.index2++;
    }
    printf("queue contains");
    for(i=0;i<a.index2;i++)
    {
        printf("%c,",a.element[i]);
    }
    printf("\n");
    return a;
}
queue deque(queue a)//for removing one element
{
    int i;
    if(a.index1==0&&a.index2==0)
    {
        printf("no elements in queue\n");
    }
    else
    {
        printf("%c removed from queue\n",a.element[a.index1]);
        a.element[a.index1]='\0';//replaces the element at index1
        a.index1++;
        if(a.element[a.index1]!='\0')
        {
            printf("queue contains");
        
        for(i=a.index1;i<=a.index2;i++)
        {
            printf("%c,",a.element[i]);//for printing remaining elements
        }
        printf("\n");
        }
        else
        {
            printf("no elements\n");
        }
        
    }
    return a;

}

int main()
{
    int operation,i;
    queue queue;
    queue.index1=0;
    queue.index2=0;
    for(i=0;i<Max;i++)
    {
        queue.element[i]='\0';//replacing all elements with \0 initially
    }
    printf("Enter the option: 1. Enque, 2. Deque, 3. Exit \n");
    scanf("%d",&operation);
    while(operation!=3)//loop will run until user enters 3
    {
        if(operation==1)
        {
            queue=enque(queue);
        }
        if(operation==2)
        {
        queue=deque(queue);
        }
        printf("Enter the option: 1. Enque, 2. Deque, 3. Exit \n");
        scanf("%d",&operation);
    }
    return 0;
}
