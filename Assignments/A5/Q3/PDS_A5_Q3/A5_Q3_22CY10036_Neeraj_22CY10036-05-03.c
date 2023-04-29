/*NAME - Neeraj
Roll No.- 22CY10036
Section - 2
Descripion - swaping of numbers*/
#include<stdio.h>
void swap(int p , int q){
                    int c= p;
                    p = q;
                    q = c;
     printf("%d, %d",p, q);
}
int main(){
    int p,q;
    printf("Enter p , q:");
    scanf("%d, %d",&p, &q);

    swap(p,q);
    return 0;
}
