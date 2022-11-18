/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#define MAX 200 //initialising max as 200

//structure definition
typedef struct {
    int a[MAX];
    int f_ind;
    int r_ind;
}queue;
queue q; //structure declaration

//enque function1
int enque(int c){
    q.a[q.r_ind]=c; //appends c 
    q.r_ind++;

    return 0;
}

//deque function
int deque(){
    int temp;
    temp=q.a[q.f_ind]; //stores front end element
    for (int i=1; i<=q.r_ind; i++){ //left shifts the array
        q.a[i-1]=q.a[i]; 
    }
    q.r_ind--;

    return temp;
}

int main(){
    q.f_ind=0;
    q.r_ind=0;

    int opt=0;
    int c;

    //runs until 3 isn't printed
    while (opt!=3){
        printf("\nEnter the option: \n1.Enque\n2.Deque\n3.Exit");
        scanf("%d",&opt);

        if (opt==1){ //enque call
            printf("Enter the element:");
            scanf("%d",&c);
            enque(c); 
            printf("The queue contains: ");
            for (int i=0;i<q.r_ind;i++){
                printf("%d ",q.a[i]);
            }
        }

        if (opt==2){ //deque call
            int temp=deque();
            //condition for no elements in queue
            if (q.r_ind==0){ 
                printf("\nQueue is empty");
            }
            else{
                printf("Removed element: %d\n",temp);
                printf("The queue contains: ");
                for (int i=0;i<q.r_ind;i++){
                    printf("%d ",q.a[i]);
                }
            }

        }

    }
    return 0;
}
