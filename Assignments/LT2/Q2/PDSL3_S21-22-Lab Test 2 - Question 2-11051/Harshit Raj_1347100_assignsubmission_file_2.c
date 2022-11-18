/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>

int main() {


int n, temp, k=0;
printf("enter total number of inputs: ");
scanf("%d", &n);

int arr[n];

printf("enter those inputs:");
for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

for(int i=n-1; i>0; i--){

    k++;
    int alpha=0;
        for(int j=0; j<n-k-1; j++){
            if(arr[j]%arr[i]==0){
                alpha++;
                       printf("alpha=%d\n", alpha);  //for debugging purpose
            }
        k++;
    temp=alpha;
    }
    if(alpha>temp) temp=alpha;
}

printf("max alpha=%d", temp);









return 0;
}
