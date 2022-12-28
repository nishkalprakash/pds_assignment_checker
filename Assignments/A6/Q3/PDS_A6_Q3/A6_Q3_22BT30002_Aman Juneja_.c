/*
/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to find sum of series using functions fact(n) and power(x,n)
*/

#include<stdio.h>
#include<stdlib.h>

void Print(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

int *BuildSet(int * A,int n){
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    return A;
}

int SearchSet(int *A,int x){
    int n=(sizeof(A)/sizeof(int));
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return i;
        }
    }
    return -1;
}

int *Union(int *A,int a,int *B,int b,int *union_size){
    
}

int *Intersection(int *A,int a,int *B,int b,int* inter_size){
    int C[a+b],common=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(A[i]==B[j]){
                C[common]=A[i];
                common++;
            }
        }
    }
}

int *Difference(int *A,int a,int *B,int b){

}

int main(){

    while(1){

        printf("press '1' to perform search in set A\n");
        printf("press '2' to perform search in set B\n");
        printf("press '3' to perform union of Set A and Set B\n");
        printf("press '4' to perform intersection of Set A and Set B\n");
        printf("press '5' to perform Difference of Set A and Set B\n");
        printf("Press any other key to quit\n");
        int ch;
        printf("enter choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
               
        }
       
    }
    return 0;
}

* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 6
* Description :to merge two sorted arrays and return the resulted sorted array
*/

#include<stdio.h>
#include<stdlib.h>

int *merge(int n1,int n2,int * ptr1, int *ptr2){
    int n3=n2+n1,p1=0,p2=0,i=0;
    int ptr3[n3];
    while(p1<n1 && p2<n2)
    {
        if( *(ptr1+p1) < *(ptr2+p2)){
            *(ptr3+i)=*(ptr1+p1);
            p1++;
        }
        else{
            *(ptr3+i)=*(ptr2+p2);
            p2++;
        }
        i++;
    }
    while(p1<n1){
        *(ptr3+i)=*(ptr1+p1);
        p1++;
        i++;
    }
    while(p2<n2){
        *(ptr3+i)=*(ptr2+p2);
        p2++;
        i++;
    }
    return *ptr3;
 
}

int main(){
    int n1,n2;
    printf("Enter size : ");
/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to find sum of series using functions fact(n) and power(x,n)
*/

#include<stdio.h>
#include<stdlib.h>

void Print(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

int *BuildSet(int * A,int n){
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    return A;
}

int SearchSet(int *A,int x){
    int n=(sizeof(A)/sizeof(int));
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return i;
        }
    }
    return -1;
}

int *Union(int *A,int a,int *B,int b,int *union_size){
    
}

int *Intersection(int *A,int a,int *B,int b,int* inter_size){
    int C[a+b],common=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(A[i]==B[j]){
                C[common]=A[i];
                common++;
            }
        }
    }
}

int *Difference(int *A,int a,int *B,int b){

}

int main(){

    while(1){

        printf("press '1' to perform search in set A\n");
        printf("press '2' to perform search in set B\n");
        printf("press '3' to perform union of Set A and Set B\n");
        printf("press '4' to perform intersection of Set A and Set B\n");
        printf("press '5' to perform Difference of Set A and Set B\n");
        printf("Press any other key to quit\n");
        int ch;
        printf("enter choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
               
        }
       
    }
    return 0;
}

    scanf("%d",&n1);
    int *ptr1=(int *)malloc(n1*sizeof(int));
    printf("enter values : ");   
    for(int i=0;i<n1;i++){
        scanf("%d",ptr1+i);
    }

    printf("Enter size : ");
    scanf("%d",&n2);
    int *ptr2=(int *)malloc(n2*sizeof(int));
    printf("enter values : ");   
    for(int i=0;i<n2;i++){
        scanf("%d",ptr2+i);
    }
    
    int *pnt = merge(n1,n2,ptr1,ptr2);
    for(int i=0;i<(n1+n2);i++){
        printf("%d",*(pnt+i));
    }
    return 0;
}