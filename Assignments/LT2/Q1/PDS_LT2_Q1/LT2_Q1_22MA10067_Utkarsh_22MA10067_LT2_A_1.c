
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Lab Test 2
* SET-A
* Q-1
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Recursive function to calculate the mean
float mean(int *a,int n){
    if (n < 0) return 0;
    else {
        return a[n-1] + mean(a,n-1);
    }

}

int main()
{
     int n,*list;
     printf("Number of elements:");
     scanf("%d",&n);
     //Allocated requisite space for an array
     list=(int *)calloc(n,sizeof(int));
     printf("Enter %d elements:",n);
     //Read a list of integers from the user
     for (int i=0;i<n;i++){
        scanf("%d",&list[i]);
     }
     //Printed the numbers stored in the list
     printf("\nList = [");
     for (int i=0;i<n;i++){
        if (i == n-1){printf("%d",list[i]);}
        else printf("%d, ",list[i]);
     }
     printf("]");
     float Mean = mean(list,n);
     //Printed the mean
     printf("\nMean = [%0.2f]",Mean/n);
     return 0;
}

