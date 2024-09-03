#include<stdio.h>
void main(){
#define N 100
int n;  // asking user for n
printf("enter value of n");
scanf("%d",&n);
if(n<=N){
int Arr[n];
for(int i=0;i<n;i++){  // entering values in array
scanf("%d",&Arr[i]);

}
printf("Original Array: ");  //printing original array
for(int i=0;i<n;i++){
printf("%d ",Arr[i]);
}
int c=0;
for(int i=0;i<n;i++){
    if(Arr[i]<0){
        int temp=Arr[i];
        Arr[i]=Arr[c];
        Arr[c]=temp;
        c++;      
    }
  }
printf("\n");
// reversing Array
printf("Reversed Array: ");
for(int i=0;i<n;i++){
    printf("%d ",Arr[i]);
    }
}


else{printf("Error: n>100");}

    
}
