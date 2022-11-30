#include<stdio.h>
  int main()
{
  int a,b,c;
  printf("Enter a no.: ");
  scanf ("%d",&a);
  b=1;
  c=1;
   while(a>=b){
      while(b>=c){
    if(c%2==0)
     printf("0");
    else
     printf("1");
    c++;
}
  b++;
  c=1;
  printf("\n");


    }
 



return 0;



}
 





   
