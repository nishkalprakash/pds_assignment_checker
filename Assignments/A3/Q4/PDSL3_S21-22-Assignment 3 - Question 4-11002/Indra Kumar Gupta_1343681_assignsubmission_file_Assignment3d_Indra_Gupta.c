/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 3(d)

#include <stdio.h>

//linear search
int linear_search(int a, int b[], int z){
int c, status=0;

for(c=0;c<a;c++){
if(b[c]==z){
status=c;
break;
}else{
status=-1;

}

}
return(status);

}

int bin_search(int d, int e[], int y){
int h, stat, lo, hi, mid;
lo=0; hi=d-1;
while(hi>=lo){
    mid=(hi+lo)/2;
    if(y<e[mid]){
        hi=mid-1;
    }else if(y>e[mid]){
    lo=mid+1;
    }else{
    stat = mid;
    break;
    }
    stat=-1;
}

return(stat);










}







int main(){
int n,i,j,key,algo,check;
printf("Enter the number of elements n:");
scanf("%d", &n);
int array[n];
printf("Enter the elements in sorted order(eg:2 3 4 5 6 7 8 then Press ENTER):");
for(i=0; i<n; i++){
scanf("%d", &array[i]);

}

for(i=0; i<n-1; i++){
if(array[i]>array[i+1]){
printf("Not sorted. Enter again\n");
printf("Enter the elements in sorted order(eg:2 3 4 5 6 7 8 then Press ENTER):");
for(i=0; i<n; i++){
scanf("%d", &array[i]);

}
break;
}
}

printf("Enter the key element x, which you want to search:");
scanf("%d", &key);

printf("Choose the algorithm: Type 1 for linear search and 2 for binary search 2:");
scanf("%d", &algo);

if(algo==1){
check = linear_search(n, array, key);
printf("Executing the linear search algorithm \n");
if(check==-1){
    printf("Unsuccessful search");
}else{
printf("Successful search\n");
printf("Element %d has been found at the index %d", key, check);
}

}else if(algo==2){
check = bin_search(n, array, key);
printf("Executing the binary search algorithm \n");
if(check==-1){
    printf("Unsuccessful search");
}else{
printf("Successful search\n");
printf("Element %d has been found at the index %d", key, check);
}







}








return 0;
}
