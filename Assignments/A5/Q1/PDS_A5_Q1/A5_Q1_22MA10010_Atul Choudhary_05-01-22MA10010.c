
#include<stdio.h>
/*atul choudhary
22ma10010
sec2*/



 #define SIZE 100
 /*void reorder (int n, int x[])*/
int main(){

    int i, n, arr[SIZE];

    printf("how many numbers will be entered");
    scanf("%d" ,&n);
    printf("\n");

    /*read the integers*/
    for(int i=0;i<n;++i)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n; i++)
    {
      printf("%2d", arr[i]);
    }

     int j=0;
     for(int i=0; i<n; i++)
     {
         if(arr[i]<0){
            int temp =arr[i];
            for( int k=i ;k>j ;k--)
            {
                arr[k] =arr[k-1];
            }
            arr[j] = temp;
            j++;
         }

     }







    return 0;
}


