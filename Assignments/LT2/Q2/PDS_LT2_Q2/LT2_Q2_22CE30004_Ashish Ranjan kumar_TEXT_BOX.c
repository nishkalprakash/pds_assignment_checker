#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char rollNo[10];#include<stdio.h>
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
        scanf("%c",cha);#include<stdio.h>
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
}#include<stdio.h>
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
    do{#include<stdio.h>
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
    char  cha;#include<stdio.h>
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
        int d;#include<stdio.h>
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

        scanf("%d",&d);
        scanf("%c",cha);
        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
}
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
    char  cha;
    do{
        int d;
        scanf("%d",&d);
        scanf("%c",cha);
        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);#include<stdio.h>
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

   return 0;
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
    }while(cha!='\n');#include<stdio.h>
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
    do{#include<stdio.h>
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
    char  cha;#include<stdio.h>
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
    char  cha;#include<stdio.h>
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

    do{
        int d;
        scanf("%d",&d);
        scanf("%c",cha);
        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    in#include<stdio.h>
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
        scanf("%#include<stdio.h>
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
    do{#include<stdio.h>
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
d",&d);
        scanf("%c",cha);
        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
}
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
t k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
}

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

    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
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

        arr[count++]=d;
    }while(cha!='\n');
    print(arr,count);
    int k=mean(arr,count);
    printf("MEAN IS %d",k);
   return 0;
}

    char branch[2];
    int dob[10];
}stu;
int main() {
    int n,dob[10],y;
    printf("Enter the limit value : ");
    scanf("%d", &n);
    stu arr[n];
    for(int i=0; i<n; i++) {
#include<stdio.h>
int main() {
    int arr[100],n,s = 0;
    float mean;
    printf("Enter the limit value(<=n): ");
    scanf("%d", &n);
    printf("List = ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }
    mean = (float)s/n;
    printf(" Mean = %f", mean);
}













        int a = i+1;
        printf("enter the data of student %d\n ", a);
        scanf("%s %s %d", &arr[i].rollNo[10], &arr[i].branch[2], &dob[10]);
    }
    printf("\n");
    printf(" enter the year : \n");
    scanf("%d", &y);
    for(int i=0; i<n; i++) {
        printf("Remaining Records: \n");
        printf("%s %s %d", arr[i].rollNo[10], arr[i].branch[2], dob[10]);
    }
}#include<stdio.h>
int main() {
    int arr[100],n,s = 0;
    float mean;
    printf("Enter the limit value(<=n): ");
    scanf("%d", &n);
    printf("List = ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }
    mean = (float)s/n;
    printf(" Mean = %f", mean);
}