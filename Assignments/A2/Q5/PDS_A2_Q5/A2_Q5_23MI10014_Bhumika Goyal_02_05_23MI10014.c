//Bhumika Goyal
//23MI10014
//question 5

#include<stdio.h>
int main ()
{
  int a,b,c,d,len,bth,area,perim;
  //len is length, bth is breath,perim is perimeter
  float p,q;

  printf("enter bottom left corner point\n");
  scanf("%d %d",&a,&b);

  printf("enter top right corner points\n");
  scanf("%d %d",&c,&d);

  len=d-b;//not necessary d-b is positive
  bth=c-a;//not necessary c-a is positive
perim=2*(len+bth);
area= len*bth;
printf(" area is :%d, perim is :%d\n", area,perim);
q=(float)(d+b)/2;
p=(float)(a+c)/2;
//Note: since it depends on user what he or she is entering,area or perimeter might come negative, mathematically it is correct.

printf("the coodinates of the point of intersection of the two daignals are( %f %f)",p,q);
return 0;
}


  
  
  
  
