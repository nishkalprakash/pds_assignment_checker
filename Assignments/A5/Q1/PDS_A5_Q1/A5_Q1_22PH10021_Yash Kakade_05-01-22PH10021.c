
/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 4
* Description : Program to rearrange the array
*/

#include <stdio.h>
#define N 100

int main()
{
  int n,i,j,z,t,c;                     //define variables

  printf("Enter the number of elements to be inserted: ");
  scanf("%d",&n);             //To take input of number of elements to be inserted

  int arr[n];

  if(n<=N){
        for(i=0;i<n;i++){                       //To take the input to fill the array
            printf("Enter the integer: ");
            scanf("%d",&arr[i]);
        }

        printf("\nOriginal array is: \n");
        for(i=0;i<n;i++){                      //To print the original array
            printf("%d ",arr[i]);
        }


        c=0;
        for(j=0;j<n;j++){               //To left slide the position of negative integer
                if(arr[j]<0){
                    z=arr[j];
                    for(t=j;t>=c;t--){
                        arr[t]=arr[t-1];
                    }
                    arr[c]=z;
                    c++;
                }

        }
        printf("\nThe rearanged array is: ");    //To print the rearranged array
        for(j=0;j<n;j++){

            printf("%d ",arr[j]);



        }


  }

  else {
    printf("Error: n>100 ");
  }


   return 0;

}
