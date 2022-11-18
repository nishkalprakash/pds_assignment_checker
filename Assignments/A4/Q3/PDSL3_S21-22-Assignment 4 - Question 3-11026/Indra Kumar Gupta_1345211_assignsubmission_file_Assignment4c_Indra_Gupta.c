/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 4(c)

#include <stdio.h>


struct que{
int front;
int rear;
int array[100];

} iq;

int enque(int n){
iq.array[iq.rear]=n;


}
int deque(int n){
    int j;
    for(j=0; j<iq.rear; j++){
        iq.array[j]=iq.array[j+1];

    }

iq.rear-=1;

}




int main(){
int o, i=0, n;

iq.front=0;
iq.rear=0;
while(1){
  printf("Enter the option: 1. Enque, 2. Deque\n");
scanf("%d", &o);

if(o==1){
printf("Enter the element: ");
scanf("%d", &n);
enque(n);
printf("The queue contains ");
for(i=0; i<=iq.rear; i++){
printf("%d ,", iq.array[i]);

}
printf("\n");
iq.rear+=1;
}else if(o==2){
printf("Enter the element: ");
scanf("%d", &n);
deque(n);
printf("The queue contains ");
for(i=0; i<=iq.rear; i++){
printf("%d ,", iq.array[i]);
}
printf("\n");

}





}

}
