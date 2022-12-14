#include<stdio.h>

int main()
 {
int r;
int c;
int lim;
int d;                                 
printf("enter a number");                      //prompts the user to input a value, which will be maximum number of rows.
scanf("%d",&lim);                                          
for(r=1,d=1;r<=lim;r++){                       //initializing r and d. 'r' is row, 'd' is for digits to be printed.                    
   for(c=1;c<=r&&d<=(r*(r+1)/2);c++,d++){      //as per the question, the maximum digit printed is equal to sum of integers till number of rows
   printf("%d ",d);

   }
   printf("\n");
   
}


return 0;    
}
