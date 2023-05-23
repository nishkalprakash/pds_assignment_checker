#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/

int main(){
int n,flag=0;
scanf("%d", &n);
time_t t;
int *arr = (int*)malloc(n*sizeof(int));
srand(time(t));
for(int i=0; i<n; i++){
    arr[i]= 2+rand()%1000;
}
printf("%d random number array: ", n);
for(int i=0; i<n; i++) printf("%d ", arr[i]);
printf("\n");
for(int i=0; i<n; i++){
    int sum=0;
    for(int j=1; j<arr[i]; j++){
        if(arr[i]%j==0) sum+=j;
    }
    if(sum==arr[i]){
        printf("%d, ", arr[i]);
        flag=1;
    }
}
if(flag) printf("are perfect numbers");
else printf("\nNo perfect numbers found");
free(arr);
return 0;
}
