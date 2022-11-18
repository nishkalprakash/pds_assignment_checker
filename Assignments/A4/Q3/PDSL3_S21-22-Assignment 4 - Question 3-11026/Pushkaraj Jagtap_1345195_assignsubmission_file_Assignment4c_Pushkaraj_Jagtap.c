/* Name- Pushkaraj Jagtap
   Roll- 21MF3IM12
   Package- Code block
   Assignment 4c*/

#include<stdio.h>
int main(){
struct queue{
       int enque;    // writing structur for enque and deque and assigning a and b resp
       int deque;
}a,b,q[20];
   int i,k,n,w;
   i=0;
   k=0;
   w=0;

  for(i;i>=0;i++){                           //loop for first time
    printf("Enter the option: 1. Enque, 2. Deque");
      scanf("%d",&n);

      if(n==1){              // If n==1 then add element and enclose one more loop under it
         printf("Enter the element:");
         scanf("%d",&a.enque);
         printf("The queue contains %d",a.enque);
         q[0]=a.enque;                        //q[] is an array where we store the element here we stored it in q[0]

         for(k,k>=0,k++){           // now this loop will be ended only when user select 3
             if(n==1){
                 for(w,w>=0,w++){
                printf("Enter the element:");//here i have made an loop in which when n=1 that time w will increase and the element will be stored in q[w] value
                scanf("%d",&a.enque);
                q[w+1]=a.enque;             // if next time again n=1 comes then we will store it in w+1
                printf("The queue contains %d",q[20]);
             }}

             else if(n==2){
                 printf("Removed element")
                for(w,w>=0,w++){
                 q[20]=q[20]-q[w]
                 printf("The queue contains %d",q[20]);  //similarly in case of n=2
                    }}
                    else{                  //if n=3 then it will exit loop
                    return 0;
                    }
             }

         }


         else{

            printf("No element to remove:")
         }
      }

  }


}
