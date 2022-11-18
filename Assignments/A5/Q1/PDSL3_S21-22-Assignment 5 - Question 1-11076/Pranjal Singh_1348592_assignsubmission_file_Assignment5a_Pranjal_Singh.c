/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

void recurbublSort(int Arr[], int len){
   int temp;

   if (len == 1){
      return;
   }
   for (int i=0; i<len-1; i++){
      if (Arr[i] > Arr[i+1]){
         temp=Arr[i];
         Arr[i]=Arr[i+1];
         Arr[i+1]=temp;
      }
   }
   len=len-1;
   recurbublSort(Arr, len);
}
int main()
{
    int arr[3];
    //using pointers to allocate the address
    int *x=&arr[0];
    int *y=&arr[1];
    int *z=&arr[2];

    printf("Enter the value of a:\n");
    scanf("%d",&arr[0]);
    printf("Enter the value of b:\n");
    scanf("%d",&arr[1]);
    printf("Enter the value of c:\n");
    scanf("%d",&arr[2]);

    printf("---Before the function call---\n");
     //for printing the address
    printf("Address of a = %u\n",x);
    printf("Address of b = %u\n",y);
    printf("Address of c = %u\n",z);

    //for printing the values of a,b,c
    printf("The value of a is %d\n",arr[0]);
    printf("The value of b is %d\n",arr[1]);
    printf("The value of c is %d\n",arr[2]);

    printf("---After the function call---\n");
     printf("Address of a = %u\n",x);
    printf("Address of b = %u\n",y);
    printf("Address of c = %u\n",z);
    //function call
    recurbublSort(arr, 3);
    printf("The value of a is %d\n",arr[0]);
    printf("The value of b is %d\n",arr[1]);
    printf("The value of c is %d\n",arr[2]);



    return 0;
    }




