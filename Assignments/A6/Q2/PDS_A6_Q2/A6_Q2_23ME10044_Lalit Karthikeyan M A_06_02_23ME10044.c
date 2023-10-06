//ROLL NO.:23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sum(int a[30],int n){             //Recursive function sum
  if(n==0)return 0;                   //Base case
  return (a[n-1]+sum(a,n-1));         //Recursive function call
}

int max(int a[30],int n){              //Recursive function max
  if(n-2<=0)return 0;                    //Base case
  int x=(a[n-2]>a[n-1])?a[n-2]:a[n-1];       
  a[n-2]=x;
  max(a,n-1);                          //Recursive call
  return a[n-2];
}

void reverse(int a[30],int s,int e){        //Recursive reverse function
  if(s>=e)return;                           //Base case
  //reversing the array
  int temp=a[s];
  a[s]=a[e-1];
  a[e-1]=temp;
  reverse(a,s+1,e-1);                      //Recursive call
  return;
}

int main(){
  int a[30];                        //Declaring array of size 30
  int x;
  srand(time(NULL));

  //Filling array with random numbers in the range[20,30]
  for(int i=0;i<5;i++){
    x=(rand()%11)+20;
    a[i]=x;
  }

  //Displaying the content of array
  printf("\n\nThe content of array:\n\n");
  for(int i=0;i<5;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }

  //Finding sum of elements using recursion
  int s=sum(a,5);
  printf("\nSum of elements in the array is: %d\n\n",s);

  //Reversing the array using recursion
  reverse(a,0,5);
  //Displaying the reversed array
  printf("The reversed array is:\n");
  for(int i=0;i<5;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("\n");
  int m=max(a,5);
  printf("The largest element in the array is: %d\n",m);
  return 0;
}
