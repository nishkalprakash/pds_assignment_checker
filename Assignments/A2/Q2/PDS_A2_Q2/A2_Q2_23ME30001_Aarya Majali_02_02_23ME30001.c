#include <stdio.h>
int main()
{
  int x,y;
  printf("enter your age in months");
  scanf("%d",&x);
  if (x%12==0){
      y=(x/12);
} 
else{ 
     y=(x/12)+1;
} 
printf("the person is %d years old",y);
}
