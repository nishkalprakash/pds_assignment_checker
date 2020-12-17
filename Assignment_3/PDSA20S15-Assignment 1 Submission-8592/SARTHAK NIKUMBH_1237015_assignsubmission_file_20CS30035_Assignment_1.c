#include<stdio.h>

int main(){
  int a,b,c,d,p,q,e,f,g,h;
  printf("Enter the coordinates of bottom-left corner\n");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of top-right corner\n");
  scanf("%d%d",&c,&d);
  e=a,f=d,g=c,h=b;
  printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,e,f,c,d,g,h);
  printf("Enter the coordinates of the point to be checked\n");
  scanf("%d%d",&p,&q);
  if((p>a && p<c)&& (q>b && q<d)){
    printf("The point (%d,%d) is inside the rectangle\n",p,q);
  }
  else{
    printf("The point (%d,%d) is not inside the rectangle\n",p,q);
  }

}
