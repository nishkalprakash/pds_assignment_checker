
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 7
* Description : Program to find perfect numbers
*/
#include <stdio.h>
#include <math.h>
#include <time.h>

int perfect(int num)
{
    int sum=0;
    for (int i=1;i<num;i++)
    {
        if (num%i == 0) {sum+=i;}
    }
    if (sum==num) return 1;
    else return 0;
}
int main()

{
     int n, *arr,m;
     scanf("%d",&n);
     arr=(int *)malloc(n*sizeof(int));
     time_t t;
     srand(time(t));

     for (int r=0; r<n; r++)
     {
         m=2+rand()%1000;
         arr[r]=m;
     }
    printf("\n%d-random number array: ",n);


    int fact[n],count=0;
    for (int r=0; r<n; r++) {printf("%d ",arr[r]);}
    printf("\n");



     for (int i=0; i<n; i++)
     {
         if (perfect(arr[i])==1){
                fact[count]=arr[i];
                count++;
                }
     }

    if (count==0) {printf("No perfect number found");}
    else if (count==1) {printf("%d is a perfect number",fact[0]);}
    else {
        for (int r=0; r<count; r++) {printf("%d, ",arr[r]);}
        printf("are perfect numbers");
    }

    return 0;

}
