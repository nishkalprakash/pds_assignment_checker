#include<stdio.h>
void swap( int p, int q);
int  main() {
    int p ,q,i,c[5],a,b;
printf("enter the size of array and the direction:");

scanf("%d %d", &p,&q);
printf("enter %d integers", p);
printf("enter the numbers to be swapped");
scanf("%d%d",&a,&b);
swap(a,b);
for(i=0;i<p;i++) {
    scanf("%d",&c[i]);
}
for(i=0;i<p;i++) {
   printf("%d", c[i]);
}
return 0;
}


void swap(int a, int b) {
    int x;


    printf("\n the numbers are %d and %d\n",a,b);
    x=b;
    b=a;

    a=x;
    printf("\n the swapped numbers are %d and %d\n",a,b);



}










