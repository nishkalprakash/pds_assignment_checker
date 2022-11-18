/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include<stdlib.h>
void saddle(int a[]);
void max_row(int a[]);
int main() {

int rows,columns;
printf("enter number of rows and columns respectively\n");
scanf("%d %d", &rows, &columns);

int *a=(int *)malloc((rows*columns)*sizeof(int));


for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d", *(a+i+j));
}
}

max_row(a,rows, columns);




return 0;
}

void saddle(int a[]){

}

int max_row(int a[], int rows, int columns){ //max element in a row
    int i;
    for(i=0; i<n-1; i++){
        if(a[i+1]<a[i]){
            a[i+1]=a[i];
        }
    }
