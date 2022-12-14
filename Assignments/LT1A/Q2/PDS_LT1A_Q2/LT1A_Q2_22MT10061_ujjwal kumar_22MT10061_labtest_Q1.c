#include<stdio.h>
  int odd(int a);
  int even(int a);
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
     printf("%d",even(a));
    else
     printf("%d",odd(a));
    c++;
}
  b++;
  c=1;
  printf("\n");


    }
 



return 0;



}
 

int odd(int a)
{
   int j=1;
   while(j<=a)
{
    printf("%d",j+2);

     j=j+1;
     }
 


  return 0;

}

int even(int a)
{   int j=2;
   while(j<=a)
{
     printf("%d",j+2);
     j=j+1;
     }




  return 0;
  

}




   
