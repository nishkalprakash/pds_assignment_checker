/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include<stdlib.h>
int max_interval(int a[], int); //function to evaluate upper bound of interval=maximum input in array=r2, (lower bound assumed to be 1=r1)

int main() {
int n, b, temp_arr[50];

printf("enter number of array elements\n");
scanf("%d",&n);

printf("enter number of bins");
scanf("%d", &b);

int *a=(int *)malloc(n*sizeof(int));

for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
}

int r2=max_interval(a,n);


return 0;

}
int max_interval(int a[], int n){
    int i;
    for(i=0; i<n-1; i++){
        if(a[i+1]<a[i]){
            a[i+1]=a[i];
        }
    }
return a[i];
}

