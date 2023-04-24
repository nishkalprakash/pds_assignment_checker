#include<stdio.h>

int main() {
int x , y , z, r, s , d;
printf("enter a number");
scanf( "%d", &x);
s=x/1000;
r=x/100;
z=x/10;
if(x%2==0) {
    printf("\n%d\n" ,x);
     printf("\n%d\n" ,z);
      printf("\n%d\n" ,r);
       printf("\n%d\n" ,s);
}
else {
     printf("\n%d\n" ,s);
     printf("\n%d\n" ,r);
      printf("\n%d\n" ,z);
       printf("\n%d\n" ,x);
}




y = (x%10)*1000 + ((x%100)/10)*100 + ((x%1000)/100)*10 + (x/1000);
printf("%d is the reversed number" , y);
d = y-x;
if (d<0) {
    d= d*(-1);
}
else {
    d=d;
}
printf("the absolute difference is %d" , d);



return 0;
}









