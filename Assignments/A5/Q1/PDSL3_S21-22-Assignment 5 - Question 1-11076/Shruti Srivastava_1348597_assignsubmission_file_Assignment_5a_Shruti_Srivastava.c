/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   CodeBlocks
   Windows 10
   Section 03 */
#include<stdio.h>
void rearrange(int *,int *,int *);

int main()
{
   int a,b,c,*pa,*pb,*pc;
   printf("Enter the values of a,b,c respectively\n");
   scanf("%d%d%d",&a,&b,&c); //Taking a,b,c as inputs

   pa = &a;
   pb = &b;
   pc = &c;

   printf("--------- Before the function call------\n");
   printf("\nAddress of a = %u\n",&a);
   printf("\nAddress of b = %u\n",&b);
   printf("\nAddress of c = %u\n",&c);
   printf("\nValues of a,b,c are %d,%d,%d",a,b,c); //printing the address and values of a,b,c

   printf("\n");
   printf("\n--------- After the function call ------\n");
   printf("\nAddress of a = %u\n",&a);
   printf("\nAddress of b = %u\n",&b); // printing the address and values of a,b,c
   printf("\nAddress of c = %u\n",&c);


   rearrange(&a,&b,&c);
   printf("\nValues of a,b,c are %d,%d,%d",a,b,c);// printing the values of a,b,c after the function call

   }

void rearrange(int *p,int *q,int *r)
{
   int max,a,b,c,min;

    a = *p;
    b = *q;
    c = *r;
   if(a > b) //For finding max among them
   {
      max= a;
    }
   else
   {
     max = b;
   }

   if(c > max)
   {
       max = c;
      }

   *r = max; // max element found

   if(a < b) // for finding minimum element
   {
      min= a;
    }
   else
   {
     min = b;
   }

   if(c < min)
   {
       min = c;
      }

   *p = min; // min element found

   if(a!= min || a!=max) //To find the middle element which is neither min nor max
    {
      *q = a;
      }
   else if(b!= min || b!=max)
   {
      *q = b;
    }
    else
    {
      *q = c;

    }
}

