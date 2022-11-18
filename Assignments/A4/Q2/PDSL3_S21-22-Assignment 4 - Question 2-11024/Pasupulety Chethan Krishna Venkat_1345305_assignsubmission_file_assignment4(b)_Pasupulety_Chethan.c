/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include <stdio.h>

/*function to count number of possible trips by taking number of days n,total number of items k,max number of items m as input*/

int myHostelChangingTrips(int k,int i,int n,int m){
    //these are the set of termination conditions

    //if all our items are transferred in less than or equal to n days,we return 1 way possible
    if(k==0 && i<=n+1){
        return 1;
    }
    //we stop if items become negative
    if(k<0){
        return 0;
    }
    //we stop if number of days is greater than n
    if(i>n+1){
        return 0;
    }


    int count=0;

    // calling out function recursively keeping number of days,max number of items constant
    //removing j items each time from our initial k items and after each iteration increasing our day count i.e i by 1
    for(int j=1;j<=m;++j){
        count+=(myHostelChangingTrips(k-j,i+1,n,m));
    }
    //returning the total number of trips
    return count;
}
int main(){
    int n,k,m;

    printf("enter number of days n:"); scanf("%d",&n);
    printf("enter total number of items k:"); scanf("%d",&k);
    printf("enter max number of items m:"); scanf("%d",&m);

   printf("the number of journeys possible are: %d\n",myHostelChangingTrips(k,1,n,m));
}
