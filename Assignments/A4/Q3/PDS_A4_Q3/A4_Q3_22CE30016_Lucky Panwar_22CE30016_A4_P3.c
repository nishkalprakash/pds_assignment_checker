//   Name - Lucky Panwar
//   Roll no. - 22CE30016
//   Assignement no. - 4

#include<stdio.h>

int main()
{
  long int n;                 
  int digit;
  int word;
  int quotient;
  printf("Enter the integer n\n");
  scanf("%ld", &n);
  if(n>9999999999 && n<0){   
    printf("Invalide input");
    }
 if(n==0){ printf("zero\n");}
  while(n!=0){
   digit = n%10 ;
   quotient = n/10 ;
   n = quotient ;

   switch(digit){
                 case 1:
             	 printf("One "); 
                 break;
		 case 2:
             	 printf("Two ");
                 break;
		 case 3:
             	 printf("Three "); 
                 break;
		 case 4:
             	 printf("Four "); 
                 break;
		 case 5:
             	 printf("Five "); 
                 break;
        	 case 6:
             	 printf("Six "); 
                 break;
		 case 7:
             	 printf("Seven "); 
                 break;
		 case 8:
             	 printf("Eight "); 
                 break;
		 case 9:
             	 printf("Nine "); 
                 break;
		}

            }
  return 0;
}
