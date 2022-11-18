/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:4(a)
*/

#include<stdio.h>
#define MAX 100           //i take MAX as 100

void ArrayElement(int arr1[], int st, int l);

int main(){

   int arr1[MAX];
   int n,i;

   printf("Input the number of element to be stored in array :\n");
   scanf("%d",&n);


   for(i=0;i<n;i++){

    printf("element - :%d\n",i);
    scanf("%d",&arr1[i]);
   }

   printf("the element in the array are :");
   ArrayElement(arr1 ,0 ,n);//call the function arrayElement
   printf("\n\n");

   return 0;

}


void ArrayElement(int arr1[], int st, int l){


    if (st >=1)
        return;

    printf("%d", arr1[st]); //print the current array element

    // recursively call ArrayElement to print next element in array

    ArrayElement(arr1,st+1, 1);   //calling the function ArrayElement itself
}


