#include<stdio.h>
#include<string.h>

/*name-Chetna
  dep-CSE
  Roll no.-21CS10019
  package-codeblocks*/

 struct queue
{
 int sizearr[20];
 int first;
 int last;
}que;

int enque(int count1);
int deque(int count2);

int main()
{
    int a[20],n;
    int count=0;

    printf("1.Enque 2.Deeque\n");
    scanf("%d",&n);

    if(n==1) enque(count++);
    else deque(count);
    do
    {
        n=0;

        printf("1.Enque 2.Deque 3.Exit\n");
        scanf("%d",&n);
        if(n==1) enque(count++);
        else if(n==2) deque(count--);
    }while(n!=3);

    return 0;
}

int enque(int count1)
{
    int z;

    printf("Enter an Element: ");   //asking user input for element
    scanf("%d",&z);

    que.sizearr[count1]=z;
    que.first=que.sizearr[0];
    que.last=que.sizearr[count1];

    printf("the queue contains: ");   //Printing the queue

    for(int i=0;i<=count1;i++) printf("%d ",que.sizearr[i]);
    printf("\n");
    return count1;
}
int deque(int count2)
{
    if(count2==0)
    {
        return printf("The queue is empty\n");
    }
    else{
       //condition for removing the element
        if(count2==1) {
            printf("removed element : %d\n", que.sizearr[0]);
            printf("Empty List");
        }
        else
        {
            printf("removed element : %d\n", que.sizearr[0]);

            for(int i=0;i<count2;i++) que.sizearr[i]=que.sizearr[i+1];
            count2--;
            printf("Remaining Array: ");

            for(int i=0;i<count2;i++) printf("%d ",que.sizearr[i]);
        }
    que.first=que.sizearr[0];
    que.last=que.sizearr[count2];
    printf("\n");

   return count2;}

}
