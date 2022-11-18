/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 4a
*/
#include<stdio.h>

/* idx is current index
as is start index for particular combination
ae is end index for particular combination
dummy stores temporary combination and prints it*/
void combi(int dummy[], int a[],int l,int as,int ae,int idx){
        int i;
        if(idx==l){//present combination is done, print it!
            for(i=0;i<l;i++){
                printf("%d ",dummy[i]);
            }
            printf("\n");
            return;
        }
        for(i=as;i<=ae;i++){
            dummy[idx]=a[i];
            combi(dummy,a,l,i,ae,idx+1);/*Here repitition is allowed. We are not checking if an element was previously present in dummy or not. we input idx =0 ,as=0 and ae=n-1 at first.
            then we traverse through the array in the for loop.
            while doing so we recursivley call the function to fill dummy, as idx reach l, we print out the array and restart filling dummy*/
        }
        return;
}

int main(){
    int n,l,i;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter l: ");
    scanf("%d",&l);
    int dummy[l];
    combi(dummy, a,l,0,n-1,0);
 return 0;
}

