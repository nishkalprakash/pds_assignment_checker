#include<stdio.h>
int main()
 {
   int a;
   int q=1;
  printf("Enter the number:");
  scanf("%d",&a);
  printf("factors of number==");
 if (a>0){
  while(q<=a){
  if(a%q==0)
  printf("%d ",q);
  q++; 
  }
}
 
else if(a==0)
printf("0");
 else if(a<0){
while(q<=(-a)) {
 if(a%q==0)
printf("%d ",q);
 q++;
  }
}
  return 0;
}

 
 

   

