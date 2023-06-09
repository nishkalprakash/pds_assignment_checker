#include<stdio.h>
void print (int *a,int n){
    printf("\nList=[");
     for(int i=0;i<n-1;i++){
        printf("%d,",a[i]);
     }
     printf("%d]",a[n-1]);
}
int mean(int *a,int n){  //recursive function made
     (n==2) return (a[0]+a[1])/2;
     else{
        while(n%2==1){
            int a1[n/2],a2[n/2+1];
            int p=n/2;
            for(int i=0;i<n/2;i++){
              a1[i]=a[i];
         }
         for(int i=n/2;i<n;i++){
              a2[i-n/2]=a[i];
         }
         int x1=mean(a1,n/2);//using recursive logic by splitiing array
         int x2=mean(a2,n/2+1);//using recursive logic by splitiing array
         return (x1+x2)/2;
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

        int x1=mean(a1,n/2);//using recursive logic by splitiing array
         int x2=mean(a2,n/2);//using recursive logic by splitiing array
         return (x1+x2)/2;
        }

     }
}
int main(){
    int arr[100];
    int count=0;
    char  cha;
    do{
        int d;
        scanf("%d",&d);
        scanf("%c",cha);
        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
}
