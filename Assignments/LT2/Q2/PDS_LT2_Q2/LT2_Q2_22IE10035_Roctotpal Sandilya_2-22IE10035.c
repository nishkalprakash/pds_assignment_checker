#include<stdio.h>
#include<time.h>
/*
   sec-2
   Assignment no.- End Test
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/
int max(int a, int b){
    if(a>=b) return a;
    else return b;
}

int maxm(int *a, int m, int n){
    if(m-n==0) return a[m];
    else{
        if(n-m==1) return max(maxm(a, m, m), maxm(a, n, n));
        else return max(maxm(a, m, m+(n-m)/2-1), maxm(a, m+(n-m)/2, n));
    }
}

int main(){
int n,p,q;
time_t t;
scanf("%d", &n);
scanf("%d", &p);
scanf("%d", &q);
int *arr = (int*)malloc(n*sizeof(int));
srand(time(t));
for(int i=0; i<n; i++){
    arr[i]= rand()%(q-p+1)+p;
}
printf("List = [");
for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
}
printf("]");
printf("\nMax = %d", maxm(arr, 0, n));

return 0;
}
