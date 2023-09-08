//Name: Shravani Khot
//Roll no. : 23ME30058

#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,c=0,d=0,e=0,f;
printf("Enter an integer \n");
scanf("%d",&a);


 while (a>0) 
{
  b=a%10;
  a=a/10;
  c=c+b;
 
  if (b>e)
    {e=b;
      }
  else if ((b>f)&&(f!=e))
    {f=b;
    }
 }

 printf("The sum of the digits is %d\n",c); 

printf("The maximum digit is %d \n",e);

 printf("The 2nd  maximum digit is %d \n",f);

return 0;

}



