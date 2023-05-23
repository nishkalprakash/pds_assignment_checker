/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 07
* Question Number - 01
* Description - Generate Random number & check it is perfect number or not
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    srand(time(0));
    int *a = (int*) malloc(n * sizeof(int));
    a = (int*) malloc(n * sizeof(int));
    printf("%d- Random Number array : ",n);
    int count=0;
    for(int i=0;i<n;i++){
        int r;
        r = 2 + rand()%1000;
        *(a+i)=r;
        int b = *(a+i);
         int sum=0;
           for(int j=1;j<*(a+i);j++){
               if(*(a+i)%j==0) sum = sum +j;
       }
                if(sum==*(a+i)) count++;
               printf("%d ",b);
    }
    if(count==0)printf("\nNo perfect number found\n");
    else if(count!=0)printf("%d numbers are perfect number\n",count);

      return 0;
}
