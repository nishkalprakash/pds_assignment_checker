/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:5
topic:searching and sorting 
*/

#include<stdio.h>
void sort (int A[],int n);
int count(int a);
int main()
{
int n,i,j;
printf("enter the size of the array\n");
scanf("%d",&n);
int A[n];
printf("enter the elements\n");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}

   sort(A,n);
 j=1;
while(j!=n){
for(i=0;i<n;i++){
if(count(A[i])==j){
   printf("%d",A[i]);
}
}
j++;
}

printf("\n");
return 0;
}


void sort (int A[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
  if (A[j]<=A[j+1]){
    temp= A[j];
    A[j]=A[j+1];
    A[j+1]=temp;
}
}
}
}
 int count(int a){
int b,c=0;
while(a!=0){
b=a/10;
a=b;
c++;
}
return c;
}


