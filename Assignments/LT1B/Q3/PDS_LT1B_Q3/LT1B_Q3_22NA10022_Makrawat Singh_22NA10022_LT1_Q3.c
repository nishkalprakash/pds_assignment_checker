/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : Test 1
 Description : Print largest and second largest number of a given sequence
*/

#include<stdio.h>
#include<math.h>
int max(int b[1000]){    // defining a function which returns the maximum value in an array
    int z=-1;
    for(int j=0;j<1000;j++){
       if(b[j]>=z){
           z=b[j];
       }
    }
    return z;
}

int s_max(int b[1000]){    //defining a function which returns the second largest value in an array
    int m=-1;int z=-1;
    for(int j=0;j<1000;j++){
       if(b[j]>=z){
           m=z;
           z=b[j];
       }
    }
    return m;
}    
int main(){
    int a[1000]={-1};       //making all the value of array -1
    for(int i=0;i<1000;i++){
        scanf("%d",&a[i]);   //taking input from the user
        int t,l;
        if(a[i]<0){
           break;            //exiting the loop when value entered by the user in negative
        }
        
        else{
            t=max(a);
            l=s_max(a);
            if(t>=0){
               printf("Largest number:%d ",t);    //printing the largest number
             }
            else{ 
               printf("Largest number:Value not entered yet\n");
            }
            if(l>=0){
               printf("Second Largest number:%d \n",l);    //printing the second largest number
             }
            else{ 
               printf("Second Largest number:Value not entered yet\n");
            }
        }
     }

}
            
        
      
      
