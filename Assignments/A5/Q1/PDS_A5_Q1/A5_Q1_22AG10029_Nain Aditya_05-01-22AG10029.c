
#include <stdio.h>
#define N 100
/*
section 2
Name - Nain Aditya
roll no. - 22AG10029
LAB - 5 QUESTION 1 */
int main(){
    int n;
    scanf("%d",&n);
    if (n>N) printf("limit exceeded");
    else {int a[n];
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);}
        int b=0,i=0;
        if (a[0]<0) i=1;
        for (i;i<n;i++){int c,d;
            if (a[i]<0){
                c=a[i];
                for (int j =b+1 ;j<i;j++){int k;
               k=a[j-1];
               d=a[j];
               a[j]=k;
               }
            a[i]=d;
            a[b]=c;
            b++;}}
        for(int i = 0;i<n;i++){printf("%d ",a[i]);}
        }
        return 0;}
