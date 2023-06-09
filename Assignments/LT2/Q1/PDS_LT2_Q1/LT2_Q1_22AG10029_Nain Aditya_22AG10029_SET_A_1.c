#include<stdio.h>
#include<stdlib.h>
/*Name - Nain Aditya
roll no. 22AG10029
LAB TEST 2 SET A */
float mean(int*a,int n){float a1;
    if(n>=0)a1=a[n]+mean(a,n-1);
    return a1;
}
int main(){
    int *ar,n;
    scanf("%d",&n);
    ar=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)scanf("%d",&ar[i]);
    float m=mean(ar,n)/n;
    printf("list = [");
    for(int i =0;i<n;i++){
        printf("%d",ar[i]);
        if (ar[i]==ar[n-1]){printf("]");break;}
        printf(", ");}
    printf("\nMean = %0.2f",m);
    free(ar);
    return 0;}

