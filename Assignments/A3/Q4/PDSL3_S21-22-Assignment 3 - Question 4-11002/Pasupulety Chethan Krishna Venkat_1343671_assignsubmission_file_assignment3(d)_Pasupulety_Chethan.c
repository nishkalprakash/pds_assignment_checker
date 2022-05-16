/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include <stdio.h>
int linear_search(int x,int a[],int n);
int bin_search(int x,int a[],int n);

int main()
{
    int n,flag,x,y,index;
    printf("Enter the number of elements n:"); scanf("%d",&n);

    int a[n],i,j;

    printf("Enter the elements in sorted order:\n");
    while(1){
   flag=0;

    for(i=0;i<n;i++){
     scanf("%d",&a[n]);
    }
    for(j=0;j<n-1;j++){


    if(a[j+1]>a[j]) {continue;}
    else {printf("Not sorted. Enter again\n");flag=1; break;}

    }
    if(flag==0) break;
    }

    printf("enter the key element x:"); scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search"); scanf("%d",&y);

    switch (y) {

        case 1: {
                  printf("Executing the linear search algorithm\n");
                  index=linear_search(x,a,n);
                  if(index==-1){printf("element not found");}
                  else {
                    printf("element %d has been found at the index %d",x,index);}
                    break;
        }

        case 2: {
                  printf("Executing the binary search algorithm\n");
                  index=bin_search(x,a,n);
                  if(index==-1){printf("element not found");}
                  else {
                    printf("element %d has been found at the index %d",x,index);}

                    break;
        }

        default:printf("invalid input");


}
return 0;
}



int linear_search(int x,int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(x==a[i]) {return(i);break;}

    }
    return(-1);
}
int bin_search(int x,int a[],int n){
    int lo=0;int hi=n-1;
    int mid;
    while(hi>=lo){
        mid=(hi+lo)/2;
        if(x==a[mid]) {return(mid);}

        if(x>a[mid]) {lo=mid+1;}
        else {hi=mid-1;}
    }
    return(-1);

}
