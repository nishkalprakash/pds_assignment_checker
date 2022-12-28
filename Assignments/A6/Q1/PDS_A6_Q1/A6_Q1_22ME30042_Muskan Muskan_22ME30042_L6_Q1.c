/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 6*/

#include<stdio.h>
 int print_term(int);
int main()
{
  
   int k,i,t;
   printf("Enter the number of terms : \n");
   scanf("%d",&k);
   if(k<0)
       {
         printf("Invalid input");
        }
   else
        {
          for(i=0;i<k;i++)                        
                       {
                        t=print_term(i);
                        printf("%d\n",t);
                       }printf("\n");
         } 
 return 0;
}

int print_term(int n)
{
   int t;
  if(n==0)return 0;
  if(n==1)return 1;
  if(n==2)return 2;
if(n>2)
{
   
   t=(3*print_term(n-1)*print_term(n-2))-   (2*print_term(n-2)*print_term(n-3))+1;}
return (t);
}










                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
