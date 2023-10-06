#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//question does not mention to ask the size of the array from the user so directly the size 30 is used.

int a[30];
int j=0;
int i ;
int max1=0;

int sum(int a[], int b,int i){
  if (i==30)
    printf("sum=%d\n",j);
  
  else {
    j=j+a[i];

    sum(a,30,i+1);
  }
  
  
};
int max(int a[], int b,int i){
  if (i==30)
    printf("max=%d\n",max1);
  else{
    if (a[i]>max1)
      {max1=a[i];}
  }

    max(a,30,i+1);
  
};

int reverse(int a[], int b,int i){
  while (i<16){
  int temp=a[i];
  a[i]=a[29-i];
  a[29-i]=temp;

  reverse(a,30,i+1);}

  printf("The reversed array is : \n");

  for (int h=0 ; h<30 ; h++){
    printf("a[%d]=%d \n ",h,a[h]);
  }
  
  
};

int main(){
  for (int i=0 ; i<30 ; i++){
    a[i]=(rand()%11)+20 ;
  }
  for (int i=0 ; i<30 ; i++){
    printf("a[%d]=%d \n" , i, a[i]);
  }
  i=0;
  sum(a,30,i);
  i=0;
  max(a,30,i);
  i=0;
  reverse(a,30,i);
  
  return 0;
}
  
