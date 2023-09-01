//Name:Pramod Kumar
//Roll No:23PH10032
#include<stdio.h>
int main()
{int a,b ,c,d,area,perim;
  float inotd;
  printf("enter left bottom coordinates\n");
  scanf("%d %d",&a,&b);
  printf("enter top right coordinates\n");
  scanf("%d %d",&c,&d);
  area=(c-d)*(d-b);
  printf("area is:%d\n",area);
  perim=(c-a)*2+(d-b)*2;
  printf("perim is:%d\n",perim);
  inotd=((a+c)/2.0,(b+d)/2.0);
  printf("inotd is:%f\n",inotd);
  return 0;}
