
/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Lab Test 2
* Description : Question 2
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 //function declaration
 int max(int *a,int i, int n);
 int Max;

int main(){
 int n,p,q;
 printf("Enter n: ");
 scanf("%d",&n);
 printf("Enter p: ");
 scanf("%d",&p);
 printf("Enter q: ");
 scanf("%d",&q);

 if(n>0 && p<=q){
 srand(time(0));
  int* ptr = (int*)malloc(n*sizeof(int));

  for(int i=0;i<n;i++){  //random numbers
    ptr[i]=rand()%(q-p+1)+p;
  }

  printf("List = [");
  for(int i=0;i<n;i++){  //printing random numbers
    printf("%d,  ",ptr[i]);
  }
  printf("]\n");
  Max=ptr[0];
  printf("Max = %d",max(ptr,0,n));
 }

 if(n<=0){
    printf("Invalid Value of n\n");int max(int *a,int n);

 }
 if(p>q){
    printf("p should be less than or equal to q\n");
 }



return 0;
}

//function definition
int max(int *a,int i,int n){
  //Max=a[i];
  if(i==(n-1)) return Max;
  else{
    if(a[i+1]>a[i]){
            Max=a[i+1];
            return max(a,i+1,n);


            }
            else return max(a,i+1,n);
  }


}
