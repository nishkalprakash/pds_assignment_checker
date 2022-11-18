/* TEJAARKA PIRIDI

   21MT10036


   ASSIGNMENT 4 QUESTION 2*/

//FUNCTION TO CALCULATE POSSIBLE TRIPS

#include <stdio.h>


int f(int n,int k,int m,int curl,int curi){

if(curl==k){

    if(curi>n) return 0;


    return 1;

}

if(curl>k) return 0;


int ans=0;

for(int i=1;i<=m;i++){

 ans+=(f(n,k,m,curl+i,curi+1));

}
return ans;    //RETURNING VALUE TO FUNTION
}


//MAIN FUNCTION

int main()
{

 int n,k,m;

 printf("enter no of days:");

 scanf("%d",&n);


 printf("enter no of items:");

 scanf("%d",&k);

 printf("enter no of max items carrying for a trip:");

 scanf("%d",&m);

 int ans1=f(n,k,m,0,0);

 printf("%d", ans1);

}
