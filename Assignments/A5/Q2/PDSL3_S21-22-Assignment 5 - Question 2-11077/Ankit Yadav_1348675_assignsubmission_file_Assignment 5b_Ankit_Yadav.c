/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Operating System : Windows 11
Assignment class : 5
*/


#include<stdio.h>
#include<stdlib.h>

int maxof(int*p[],int f){

int Max,i;

Max=p[0];
for(i=1;i<f;i++){

    if(p[i]>Max){
        Max=p[i];
    }
}
 return Max;
}



int main(){

int *ptr,n,i,b,m,b1,j,n1,n2,k;

printf("Enter the number of array elements\n");
scanf("%d",&n);

ptr= (int*)malloc(n*sizeof(int));

for(i=0;i<n;i++){
    scanf("%d",&ptr[i]);

}

printf("\nEnter the number of Bins");
scanf("%d",&b);

m=maxof(ptr,n);

b1=m/b;

int *arr[b];

for(i=0;i<b;i++){
        for(j=0;j<b1;j++){
    arr[i][j]=(int*)malloc(b1*sizeof(int));
}}
n1=1;
n2=b1;
k=0;j=0;
for(i=0;i<n;i++){

   while(n2<=m){

    if(ptr[i]>n1||ptr[i<n2])arr[k][j]=ptr[i];
    k++;j++;
    n1=n2+1;
    n2=k*b1;

   }


}
for(i=0;i<b;i++){

    printf("\n The elements of bin %d",i);
    for(j=0;j<b1;j++){
        printf("%d",arr[i][j]);
    }
}

return 0;
}
