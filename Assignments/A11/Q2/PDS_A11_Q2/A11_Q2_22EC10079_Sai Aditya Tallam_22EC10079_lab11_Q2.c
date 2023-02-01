#include<stdio.h>

int fb(int);

int main()
{   
	int term,i=0;
    int n;
	printf("enter the number :");
	scanf("%d",&n);
	for(int i=0;i<20;i++)
	{  
	    
        if(fb(i)==n)
        {
          term =1;
          break;
        } 
        else
        {
        	term=0;
        }       
        
    }
   if(term==1)
   {
   	 printf("YES");
   }
   else if(term==0)
   {
   	printf("NO");
   }

  return 0;	
}

int fb(int N)
{
	
     if(N==0) return 0;
     if(N==1) return 1;
	 return (fb(N-1)+fb(N-2));
}

	 
	 
	

