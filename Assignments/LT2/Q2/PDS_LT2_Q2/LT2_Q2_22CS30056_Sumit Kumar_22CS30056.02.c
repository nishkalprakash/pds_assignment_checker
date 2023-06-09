#include<stdio.h>
/*NAME-Sumit Kumar
Roll nO.-22CS30056
Section-2
Lab test question-2
Description-REcursive algorithm to find the maximum of the given numbers*/
void print (int *a,int n){
    printf("\nList=[");
     for(int i=0;i<n-1;i++){
        printf("%d,",a[i]);
     }
     printf("%d]",a[n-1]);
}
int max(int *a,int n){  //recursive function made
     if(n==1) return a[0];
     else{
        if(n%2==1){
            int a1[n/2],a2[n/2+1];
            int p=n/2;
            for(int i=0;i<n/2;i++){
              a1[i]=a[i];
         }
         for(int i=n/2;i<n;i++){
              a2[i-n/2]=a[i];
         }
         int m1=max(a1,n/2);//using recursive logic by splitiing array
         int m2=max(a2,n/2+1);//using recursive logic by splitiing array
         return (m2>m1?m2:m1);
        }
        else {

            int a1[n/2],a2[n/2];
            int p=n/2;
            for(int i=0;i<n/2;i++){
              a1[i]=a[i];
         }
         for(int i=n/2;i<n;i++){
              a2[i-n/2]=a[i];
         }

        int m1=max(a1,n/2);//using recursive logic by splitiing array
         int m2=max(a2,n/2);//using recursive logic by splitiing array
         return (m2>m1?m2:m1);
        }

     }
}
int main(){
    int n;
    int p,q;

    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&q);
    if(n==0) printf("\nInvalid value of n");
    else if(q<p) printf("p should be less than or equal to q");
    else{
        int arr[n];
        for(int i=0;i<n;i++){
           arr[i]=rand()%(q-p+1)+p;
        }
        print(arr,n);
        int k=max(arr,n);
        printf("\nMax=%d",k);
    }
   return 0;
}

