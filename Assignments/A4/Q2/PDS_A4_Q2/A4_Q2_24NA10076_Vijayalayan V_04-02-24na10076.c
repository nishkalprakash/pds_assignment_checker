#include<stdio.h>
int main()
{
 int n,k=0,large,seclarge,l2,temp,f=4;
 while (f>3)
     {temp=n;
     scanf("%d",&n);
     if (n<0)
        {break;}
     else 
         {
          k+=1;
          if (k==1)
               {large=n;}
          else 
            {
              if (n>large)
                {
                  seclarge=large;
                  large=n;
                }
             }
          if (k>=2)
             {
               if (k==2)
               {l2=n;}
               else 
               {
               if (n>l2)
                {
                  l2=n;
                }
               } 
              }
            }
      }
      if (n<0)
         {printf(" ");}
      else if (k==1) 
         {
          printf("largest number=%d\nsecond largest number = value not yet entered\n",temp);
          }
      else if (l2<large)
          {
            printf("largest number=%d\nsecond largest number = %d\n",large,l2);  
          }
      else  {printf("largest number=%d\nsecond largest number = %d\n",large,seclarge);}
      return 0;
}    
               
 
