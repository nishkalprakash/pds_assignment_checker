#include<stdio.h>
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int main(){
    int *p,*q;
    p=1;
    q=2;
    swap(p,q);
    printf("%d %d",p,q);
}
