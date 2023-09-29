//ROLL No.:23CE10025
//NAME .:KARTHIKK KALLURI
//Commenting not done yet
#include <stdio.h>
#include <math.h>//used math.h to use pow function
int main()
{
  int n;
  printf("Enter the value of the number\n");
  scanf("%d",&n);
  if((n<0)||(n>=9999))
    { printf("The value entered is not valid\n");

    }
    int a,x,sum=0;
  a=n;
  int i=0;
  while(a>0)
    { 
      x=a%10;
      if(x==9)
	{ 
          sum=sum+pow(10,i+1);
	  a=a/10;
	  i=i+2;
	  continue;//used cotinue to stop this iteration and move on with the next
	}
      sum=sum+(x+1)*pow(10,i);
      i++;
     
      a=a/10;
      
      }
      printf("The encoded integer is %d\n",sum);//This marks the end of part(a)

   //Part (b)
  int k=sum,sum1=0,y,sum2;
  while(k>0)
    {
      y=k%10;
      sum1=sum1+y;
      k=k/10;
    }
  if(sum1<=99)
    {
      sum2=(sum*100)+sum1;
    }

    printf("The encoded digit with the chescksum is %d\n",sum2);//This marks the end of part(b)
  
    //part (c)
    int w,j=0,k1=1;
    double sum3=0.0;
    while(sum2>0)
      {
	w=sum2%10;
	sum3=sum3+(w*pow(10,j+k1));
	sum2=sum2/10;
	j++;
	k1++;
	
      }
    printf("The double encoded long integer is %.0f",sum3);
    
  
 
    }
