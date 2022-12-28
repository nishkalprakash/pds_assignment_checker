/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 6
Description : To test how many pairs of them are copair.
*/
#include<stdio.h>
int n , i = 0 , iter = 1 , stored = 0 ;
void pair(int arr[]); // function declaration
int gcd (int m , int n);
void pair(int arr[]);

int main(){
printf("Enter size of numbers:\n");
int n;
scanf("%d",&n);
int arr[n];
printf("Enter numbers:\n");
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
if(arr[i]<0){ // for displaying invalid inputs
printf("Error input:\n");
printf("Enter element %d " , i+1);
scanf("%d",&arr[i]);
}
pair(arr);
}
void coprime(int a , int b){ // to print coprime pairs
printf("Co-prime pairs: %d %d",a , b);

}
 int gcd (int m , int n){// to check gcd
int m1 , n1;
if(iter>m||iter>n){
return stored;
}else{
if(iter!=1 && m%iter==0 && n%iter ==0){
return 0;
}
if(m%iter!=0){
m1=m;
}else{
m1=(m/iter);
}
if(n%iter!=0){
n1 = n;
}else{
n1=(n/iter);
}
stored = iter;
iter++;
if((m1>stored && n1<=stored)||(n1>stored&& m1<=stored)){
return 1;
} else {
return gcd(m1,n1);
}
}

}

void pair(int arr[]){ // to make pairs

int j , flag;
for(j=i+1; j< n ; j++){

iter = 1;
flag = gcd(arr[i],arr[j]);
if(flag==1){
coprime(arr[i],arr[j]);
}
}
i++;
if(i=n-1){
return;
}else{
pair(arr);
}

}
