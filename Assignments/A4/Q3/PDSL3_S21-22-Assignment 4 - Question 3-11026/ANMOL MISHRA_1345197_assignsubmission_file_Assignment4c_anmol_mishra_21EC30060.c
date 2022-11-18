
#include <stdio.h>
// ANMOL KUMAR MISHRA
//ROLL NO.- 21EC30060
// SUBJECT- PDS LAB ASSIGNMNENT NO.4 QUESTION- 3
//WE USE TO DEFINE THE STRUCTURE 
struct line
    {
        int begin;
        int finish;
        int chart[20];
    };

void enque(struct line * ap)      //ap is Address  of W
{
    ap->finish++;
    printf(" Please Enter the element : ");
    scanf("%d",&ap->chart[ap->finish]);   //Created for collecting input from user of prgram
    printf("The queue contains : ");
    printf("%d",ap->chart[0]);
    for(int i=1;i<=ap->finish;i++)       //It is use for printing the queue
    {
        printf(", %d",ap->chart[i]);
    }
    printf("\n\n");
}

void deque(struct line* ap)
{
    // EMPTY CASE CREATION
    if(ap->finish==-1)
    {
        printf("The queue is empty\n\n");
        return;
    }

    //SINGLE ELEMENT CASE
    if(ap->finish==0)
    {
        printf("Deleted element : %d\n",ap->chart[0]);
        printf("The queue is empty\n\n");
        ap->finish--;
        return;
    }

    //GENERAL CASE CREATION

    printf("Deleted element are : %d\n",ap->chart[0]);
    for(int i=0;i<ap->finish;i++)   // IT IS USE TO REARRANGE THE ARRAY BY DELETING THE FIRST ELEMENT.
    {
        ap->chart[i]=ap->chart[i+1];
    }
    ap->finish--;
    printf("The queue contains : ");
    printf("%d",ap->chart[0]);
    for(int i=1;i<=ap->finish;i++)   //It is use to print the sequence or queue
    {
        printf(", %d",ap->chart[i]);
    }
    printf("\n\n");
}

int main()
{
    int inp;
    struct line w;
    w.finish=-1;
    while(1)
    {
        printf("Enter the option: 1. Enque, 2. Deque, 3. Exit : ");
        scanf ("%d",&inp);
        // It is use to take input from the programmer
        if (inp==3) return 0;
        else if (inp==1) enque(&w); //Passing structure by reference
        else deque(&w);
    }
    return 0;
}

