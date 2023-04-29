/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
ASSIGNMENT No. 5

Description -using swap and recursive function
*/
#include<stdio.h>
int j;
void swap(int* p,int* q){
int t=*p;
*p=*q;
*q=t;
return;
}
void reverse(int a[],int n){
    int t;
    if(n==0)
        return;
    else{
    for(int i=0;i<n-1;i++){
       int ara=a[i];
       a[i]=a[i+1];
       a[i+1]=ara;
    }
    n--;
    reverse(a,n);
    }
}
void cyclicShift(int a[],int n,int direction){
    if(direction!=1){
        if(n==1)
            return;
        else{

            int ara=a[n-2];
            a[n-2]=a[n-1];
            a[n-1]=ara;
            n--;
            cyclicShift(a,n,direction);
        }
    }
    else{
       if(n==1)
            return;
       else{

        int ara=a[j-n];
        a[j-n]=a[j-n+1];
        a[j-n+1]=ara;
        n--;
        cyclicShift(a,n,direction);
       }
    }
}
int main(){
    int n,d;
printf("Enter the size of the array and direction: ");
scanf("%d%d",&n,&d);
int a[n];
printf("enter %d integers",n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
j=n;
printf("Orginal Array : ");
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\nArray after reverse : ");
reverse(a,n);
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
if(d==1){
printf("\nArray after left cyclic shift : ");
cyclicShift(a,n,d);
}
else{
  printf("\nArray after right cyclic shift : ");
cyclicShift(a,n,d);
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}
