/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10*/

#include<stdio.h>
void comb(int A[],int n, int i);


void comb(int arr[],int n,int i){   //starting the recursive function with parameters arr[],n and i
    for(int p=0;p<n;p++){           //starting first loop with variable p
        printf("%d ",arr[p]);          //printing first number
        for(int j=p;j<=i;j++){      //starting second loop
            for(int k=1;k<=j;k++){//starting third loop
               comb(arr+p,n-p,i-k);//recursion , again calling the function
            }
        }
    }
    if(i==0){//ending condition
        printf("\n");//new line
        return;
    }
   }

int main()
{
  int arr[]={5,6,7,8};//initial array
  int i=3;//integer value of which we have to find subset combination
  comb(arr,4,3);//calling function in main function

  return 0;
}
