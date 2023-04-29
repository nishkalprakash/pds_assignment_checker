#include <stdio.h>
/*
section 2
Name - Nain Aditya
roll no. - 22AG10029
LAB - 5 QUESTION 2 */
int primecheck(int i){int c=-1;
    for(int l=2;l<i;l++){
        if (i%l==0) {
        c=1;}}
        if(i==2)c=-1;
        return c;}
int main(){int i,o=0,p=0,n1,n2;
scanf("%d",&i);
if (primecheck(i)==-1) printf("-1");
else if (primecheck(i)==1 && !((i%2)==0)) printf("-1");
else if (i%2==0){
    for(int j=2;j<i;j++){
        if (primecheck(j)==-1) o++;}
    int ar[o];
    for(int j=2;j<i;j++){
        if (primecheck(j)==-1) {ar[p]=j;p++;}}
        for (int j = 0;j < o;j++ ){
        for (int t = 0;t < o;t++ ){
        if ((ar[t]+ar[j])==i){n1=ar[t];n2=ar[j];}}

    }printf("%d is composite and the sum of %d , %d",i,n1,n2);
}return 0;}
