#include<stdio.h>
struct list
{
    int size;
    int elm[100];
    int fi;
    int li;

}queue;
int main()
{
    int l,i,ch;
    printf("enter size of queue \n ");
    scanf("%d",&l);
    queue.size=l;
    queue.fi=0;
    queue.li=0;
    while(1) /*repeating adding and removing elements of queue*/
    {
    printf("\n enter 1 for enque or 2 for deque 3 to exit");
    scanf("%d",&ch);
    if(ch==3)
        break;
    switch(ch)
    {
        case 1:enque(queue);
        printf("\n the new array is:");/*printing new array*/
        for(i=0;i<queue.li;i++)
            printf("queue.elm[i]");
    printf("\n queue contains :%d",queue.li);
        break;
        case 2: deque(queue);
             printf("\n the new array is:");/*printing new array*/
             printf("\n queue contains :%d",queue.li);
             if(queue.li !=0)
             {

        for(i=0;i<queue.li;i++)
            printf("queue.elm[i]");
             }
             break;

             default:printf("wrong choice\n");
    }}
    return 0;
    }

void enque(struct list queue)
{

    if(queue.li<queue.size)/*checking if queue exceeds size of array*/
    {
        printf("enter the element to be inserted:");
    scanf("%d",&queue.elm[queue.li]);/*enter new element*/
    queue.li++;
    }
    else {
    printf("overflow data");
    }


}
void deque(struct list queue)
{ if(queue.li!=0)
{

    printf("removed elements is %d",queue.elm[0]);
    for(int i=0;i<(queue.li-1);i++)
        queue.elm[i]=queue.elm[i+1];/*replacing every elemt with succeding element*/
        queue.li--;
} else printf("the queue is empty");
}
