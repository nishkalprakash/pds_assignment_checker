#include<stdio.h>
void main(){
#define N 100
int n;  // asking user for n
printf("enter value of n");
scanf("%d",&n);
if(n>N){
printf("Error: n>100");}
else{
    int Arr[n];
    for(int i=0;i<n;i++){  // entering values in array
    scanf("%d",&Arr[i]);}
    
    printf("Original Array: ");  //printing original array
for(int i=0;i<n;i++){
printf("%d ",Arr[i]);

}
printf("\n");
printf("Duplicates: \n");
int count;
for(int i=0;i<n;i++){
    count=1;
    for(int j=i+1;j<n;j++){
    if(Arr[i]==Arr[j]){
        count++;         //frequency counting 
    /*for(int k=j;k<n;k++){
        int temp=Arr[j];
        Arr[j]=Arr[n-1];
        Arr[n-1]=temp;
        }*/
   
   
    }
    //printf("c %d : %d \n",i, count);
    if(count>1){
    printf("%d(%d)",Arr[i],count);
    printf("\n");
    
}
    }
   


    }
     //printing unique array
    printf("unique array: ");
    for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
    if(Arr[i]==Arr[j]){
        count++;
        printf("%d",Arr[i]);
        
    }
    else{printf("%d",Arr[i]);}
    
}
}

}

}
