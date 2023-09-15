#include<stdio.h>
#include<stdlib.h>
int main()
{
  int r[20];
  int a[20];
  int m[20];

  for(int i=0;i<20;i++)
{      r[i]=(rand()%1001)+1000;
   
      a[i]=(rand()%11)+15;
   
      m[i]=(rand()%101);
 }
  for(int i=0;i<20;i++)
    {
      for(int k=i+1;k<20;k++)
	{
	  if(a[i]==a[k])
	    {
	      printf("ROLL:%d  AGE:%d   MARKS:%d\n",r[k],a[k],m[k]);
	      printf("ROLL:%d  AGE:%d   MARKS:%d\n",r[i],a[i],m[i]);
              printf("%d",k);
	      printf("..........\n");
	    }
	  if(m[i]==m[k])
	    {
	      printf("ROLL:%d AGE:%d  MARKS:%d \n",r[k],a[k],m[k]);
	      printf("ROLL:%d  AGE:%d   MARKS:%d\n",r[i],a[i],m[i]);

	      printf("..........\n");
            }

	}
    }    
    }
      
      
    
      
  
      

  return 0;
}
