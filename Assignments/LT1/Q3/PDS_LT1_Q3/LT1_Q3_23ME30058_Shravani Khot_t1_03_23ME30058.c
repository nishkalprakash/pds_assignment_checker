//Roll no: 23ME30058
//Name: Shravani Khot

#include<stdio.h>
#include<stdlib.h>

int main() {
  int s,n ;
  printf("Enter the scale factor [1-6] and the number of lines [1-10]");
scanf("%d%d",&s,&n);

if ((s>0) && (n>0) && (s<7) && (n<10))
{ 
int k = s+3 ;
 
 for (int i=0 ; i<n ; i++){

   for (int j=0 ; j<i ; j++)
     {printf ("%d",j+1);}

       printf("\n");

    }
       

 }
   

 

 else
   {printf ("n,s dont satisfy the condition \n ");}
return 0 ;
}

  
