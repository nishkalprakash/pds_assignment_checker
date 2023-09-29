#include<stdio.h>
int main()
{
  int i,j, n,encode=0;
  printf("enter the input ");
  scanf("%d',&n);
  
while(n<9999)
{
term= n%1000 + 1;
encode =  encode *10 + term  ;
n = n*10 ;
}

printf("Encoded form is %d\n",encode);

return 0;

}




