//sec 2
//Assignment no-6
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-3
#include<stdio.h>
void swap(int *p, int *q){
   int temp=*q;
   *q=*p;
   *p=temp;


}
void reverse(int *a, int n){
   for(int i=0; i<n/2; i++){
    swap(&a[i], &a[n-i-1]);
   }



}
void cyclicshift(int *a, int n, int direction){
   if (direction==1){
     int f=a[0];
     for (int i=0; i<n; i++){
        a[i]=a[i+1];
     }
     a[n]=f;
   }


}
int main(){
   int p,q, n, arr1[100];int direction;
   printf("Enter the two numbers:");
   scanf("%d%d",&p, &q);
   swap(&p,&q);
   printf ("p=%d , q=%d\n",p,q );
   printf("Enter the size:");
   scanf("%d", &n);
   for(int i=0; i<n; i++){
        printf("Enter the %d element:", i+1);
        scanf("%d", &arr1[i]);
    }
    reverse(arr1, n);
    for(int i=0; i<n; i++){
        printf("%d", arr1[i]);

    }
    printf ("Enter the direction:");
    scanf("%d", &direction);
    cyclicshift(arr1, n, direction);
    for(int i=0; i<n; i++){
        printf("%d", arr1[i]);

    }
   return 0;
}
