/* Name- Pushkaraj Jagtap
   Roll- 21MF3IM12
   Package- Code block
   Assignment 4b*/

#include<stdio.h>
#include<stdlib.h>
int myHostelChangingTrips(int k,int i, int m, int n){
        int count,final,rand;
        count=0;       // This will do the sum of the things taken to new hostel at different day
        final=0;       //It is the total no. of trips
        rand= 1+(rand % m);  // It will pick random number from 1 to m
        if(i>n){
         return 0;
        }
        if(i<=n){              //when i<n
            count=count+rand;  // it will find sum of the random number picked
            if(count==k){      // if the total sum is equal to no. of item k then our proccess is complete
               final++;         // Final is counting no. of such possibility
               return(myHostelChangingTrips(k,1,m,n));        // This will return back to original state to find other possibility
            }
            else if(count<=k){
              return (myHostelChangingTrips(k,i++,m,n)); //If sum is less than equal to k then shift other items on next day

            }

            else{
              return (myHostelChangingTrips(k,1,m,n)) ; // If sum exceeds k then we start finding combination again
            }
        }
}


int main(){
   int k,m,n,done,finel;
    printf("Enter the value of k");   // Taking value from user
    scanf("%d",&k);
    printf("Enter the value of m");
    scanf("%d",&m);
      printf("Enter the value of n");
       scanf("%d",&n);

    done=myHostelChangingTrips(k,1,m,n);  //attributing done for above recursive statement

    if(done==1){
       printf("The total number of trips=%d",finel); //done=1 means we satisfied all condition and will print the total count
    }
    else{
     printf("\n");
    }
}
