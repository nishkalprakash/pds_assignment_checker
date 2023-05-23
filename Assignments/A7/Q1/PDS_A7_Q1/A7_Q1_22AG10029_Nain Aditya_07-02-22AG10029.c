#include <stdio.h>
#include <stdlib.h>
/*NAME - NAIN ADITYA
SEC-2 , ROLL - 22AG10029
LAB 7 QUESTION 1*/
#include <time.h>
int isperfect(int a){
    int sum=0;
    for (int i=1;i<a;i++){
        if (a%i==0) sum+=i;}
    if (sum==a) return 1;
    else return 0;}
int main(){
    srand(time(0));
    int n,r,l=0;int* ptr;int* ptr1;
    scanf("%d",&n);
    ptr=(int *) calloc(n,sizeof(int));
    for (int i =0;i<n;i++){
        r=2+rand()%2000;
        ptr[i]=r;}
    ptr1=(int*)calloc(n,sizeof(int));
    printf("%d-random number array : ",n);
    for (int i=0;i<n;i++){
        printf("%d ",ptr[i]);
        if (isperfect(ptr[i])) {
            ptr1[i]=ptr[i];}
    }
    printf("\n");
    for (int i =0;i<n;i++){
        if (ptr1[i]>0) {printf("%d ",ptr1[i]);l++;}
   }
   if (l>0)printf("is the perfect number");
   else printf("No perfect number found");
   free(ptr);
   free(ptr1);
   return 0;

}
