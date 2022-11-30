//   Name - Lucky Panwar
//   Roll no. - 22CE30016
//   Assignement no. - 4

#include<stdio.h>

int main()
{
  int n;                          // Declaring the input from user
  int dd=1;
  printf("Enter the integer n\n");
  scanf("%d", &n);
  if(n<-999999 && n>999999){   
    printf("Invalide input");
    }
  if(n==0){
     printf("0 is the factor of %d\n",n);
    }
  while(dd<=n){ 
     if(n%dd==0){
     printf("%d is a factor of the number %d\n", dd, n);}
     dd++;
    }
  return 0;
}   


        
