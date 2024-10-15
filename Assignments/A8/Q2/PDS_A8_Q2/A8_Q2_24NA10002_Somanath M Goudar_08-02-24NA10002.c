#include<stdio.h>
int min_loc (int A[ ], int k, int size)
{
int j, pos;
pos = k;
for (j=k+1; j<size; j++)
if (A[j] < A[pos])
pos = j;
return pos;
int sel_sort (int A[], int size) {
int k, m, temp;
for (k = 0; k < size-1; k++) {
m = min_loc (A, k, size);
/* Swap A[k], A[m]*/
temp = A[k];
A[k] = A[m];
A[m] = temp;
}
}
}
int main(){
int n;
printf("n=");
scanf("%d",&n);
int A[101];
min_loc(A[],k,size);
sel_sort(A[],size);

}
