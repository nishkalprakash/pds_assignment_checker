//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>
int  count=0;
void coprime(int a,int b)

{ 
  if(gcd(a,b)==1)
  {printf("%d and %d are coprimes\n",a,b);
    count++;}
  
}

int gcd(int a,int b)
{ int rem,gcd,temp;
   while(1)
    { if (a>b)
       { rem=a%b;
         a=b;
         b=rem;
          if(rem==0)
           break;}
      else
       { temp=a;
         a=b;
         b=temp;
         rem=a%b;
         a=b;
         b=rem;
          if(rem==0)
           break;}
    }
      
      gcd=a;
  return(gcd);
}
 
int main()    
{int a[5],i,j;
  for(i=0;i<5;i++)
   {printf("enter the number:");
    scanf("%d",&a[i]);
   }
 
 for(i=0;i<5;i++)
  {for(j=i+1;j<5;j++)
    coprime(a[i],a[j]);}
if (count==0)
printf("no coprimes found\n");

return 0;
}












