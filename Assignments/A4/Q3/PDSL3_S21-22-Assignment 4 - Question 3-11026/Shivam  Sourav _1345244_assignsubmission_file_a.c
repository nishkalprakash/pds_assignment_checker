

#include <stdio.h>
# define MAX 1000
int a;
static int index_front=0,index_last=0;
void enque(int b[],int index_last,int a)
{
    b[index_last++]=a;
}
void deque(int b[],int n,int index_front)
{
    index_front++;
}

int main()
{
    void enque(int[],int,int);
    void deque(int[],int,int);
    int c,i;
    int b[MAX];
    printf("enter the option 1 enque 2 deque 3 exit");
    scanf("%d",&c);
    if(c==1)
    {
        printf("enter the element");
        scanf("%d",&a);
        if(index_last>MAX)
        printf("queue is full");return(0);
        printf("the queue contains");
        enque(b[MAX],a,index_last);
        for(i=index_front;i<=index_last;i++) printf(" %d",b[i]);
        
    }
    if(c==2)
    {
        if(index_front<0)
        printf("queue is empty");return(0);
        deque(b[MAX],index_front,index_last);
        printf("the queue contains");
       
        for(i=index_front;i<=index_last;i++) printf(" %d",b[i]);
        
        
    }
    if(c==3)
    return(0);

}

