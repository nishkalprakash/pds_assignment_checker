#include<stdio.h>
#define max 50
void enque(), deque(), show();
int arr[max], rear=-1, front=-1;


void enque(){

    int element;                                            //insert

    if(rear == max - 1)                                     //rear is at the last position
        printf("Queue full \n");

    else{

        if(front== - 1)                                        //that is no element
            front = 0;                                             //incrementing rear to the new rear position
            printf("Inset the element in queue : ");
            scanf("%d", &element);                                   //adding the element
            rear = rear + 1;
            arr[rear] = element;
        }
}



void deque() {

    if (front == -1 || front > rear) {printf("queue empty\n"); return;}             //if front and rear coincide, empty queue

    else{
        printf("%d is deleted", arr[front]);
        printf("\n");
        front+=1;
    }
}


void show() {

    int i;

    if (front == -1) {printf("empty queue\n");}                        //that is the queue never initialised

    else{
        printf("queue is \n");
        for (i= front; i<= rear; i++) {printf("%d\n", arr[i]);}        // front to rear iteration to print elements
    }

    printf("\n");
}


int main(){

    int ans=1;          //for initialising while loop

    while (ans == 1) {

        printf("1. enque\n");
        printf("2. deque\n");
        printf("3. exit\n");
        printf("\n");

        int option;                                                                //choose the option
        printf("choose the option with 1 or 2 or 3\n");
        scanf("%d", &option);
        printf("\n");

        switch (option) {

            case 1: enque(); show();
                    printf("do you want to continue? press 1 or 0\n");      //to continue the while loop
                    scanf("%d", &ans);
                    break;

            case 2: deque(); show();
                    printf("do you want to continue? press 1 or 0\n");
                    scanf("%d", &ans);
                    break;
            case 3: ans = 0;                                               // stops the while iteration
                    break;
        }
    }


return 0;
}
