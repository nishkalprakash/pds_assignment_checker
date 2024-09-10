//name: vijayalayan v
//roll no: 24na10076
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
  int N=5,A=8,B=5,x,k,i,j=0,o=0,f=8;
  float filter[N],y=0;
  int bin_a[A],bin_b[B];
  srand(42);
  for(i=0;i<N;i+=1)
  { y=0;
    int x=(rand()%100)+1;
    for(k=1;k<=x;k+=1)
     { 
       y+=((float)(((k*k)/((2*k)+1))-(pow(-1,k)*k)));
    }
    y+=((float)(sin(x/3)));
    filter[i]=y;
   }
  while (f>7)
   { 
    y=0;
    int x=(rand()%100)+1;
    for(k=1;k<=x;k+=1)
     { 
       y+=((float)(((k*k)/((2*k)+1))-(pow(-1,k)*k)));
     }
    y+=((float)(sin(x/3)));
    for(i=0;i<N;i+=1)
       {
         if (y<filter[i])
           {
             bin_a[j]=x;
             j+=1;
             break;
            }
        }
     for(i=0;i<N;i+=1)
       {
         if (y>filter[i])
           {
             bin_b[o]=x;
             o+=1;
             break;
            }
        }
      if ((j+1)==8)
        {
         break;
        }
      else if ((o+1)==5);
        {
         break;
        }
     }
  printf("filter ");
  for(i=0;i<N;i+=1)
     printf("%f ",filter[i]);
  printf("\n");
  printf("bin_a ");
  for(i=0;i<A;i+=1)
     printf("%d ",bin_a[i]);
  printf("\n");
  printf("bin_b ");
  for(i=0;i<B;i+=1)
     printf("%d ",bin_b[i]);
  printf("\n");
  return 0;
}

  
     
     
   
        
      
  
  
