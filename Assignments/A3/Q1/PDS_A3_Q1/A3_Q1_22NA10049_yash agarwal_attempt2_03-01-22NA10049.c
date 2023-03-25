//22NA10049
#include <stdio.h>
int main()
{
int a,b,c,d,e,even=0,odd=0,max=0,o1,o2,o3;
printf("Enter the five numbers");     //taking input
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);




   if(a%2==0)     //checking number of even and odd numbers
     even++;
   else
     odd++;
   if(b%2==0)
     even++;
   else
     odd++;
   if(c%2==0)
     even++;
   else
     odd++;
   if(d%2==0)
     even++;
   else
     odd++;
   if(e%2==0)
     even++;
   else
     odd++;

   if(even==3)     //if we have exactly 3 even numbers
     {
          printf("The largest number is");
         if(a>b && a>c && a>d && a>e  )    // checking the highest number
            max=a;
         else if(b>a && b>c && b>d && b>e )
            max=b;
         else if(c>a && c>b && c>d && c>e )
            max=c;
        else if(d>a && d>b && d>c && d>e )
            max=d;
        else if(e>a && e>b && e>c && e>d )
            max=e;

         printf("%d",max);   //printing the highest number
     }

     if(odd==3)    // if there are inly 3 odd numbers
     {
         printf("The smallest three numbers are \n");
         if(a%2!=0)
            o1=a;
         else if(b%2!=0)
            o1=b;
         else if(c%2!=0)
            o1=c;
         else if(d%2!=0)
            o1=d;
         else if(e%2!=0)
            o1=e;   //using a temporary variable to store the three odd numbers


         if(b%2!=0 && b!=o1)
            o2=b;
         else if(c%2!=0 && c!=o1)
            o2=c;
         else if(d%2!=0 && d!=o1)
            o2=d;
         else if(e%2!=0 && e!=o1)
            o2=e;


            if(c%2!=0 && c!=o1 && c!=o2)
            o3=c;
         else if(d%2!=0 && d!=o1 && d!=o2)
            o3=d;
         else if(e%2!=0 && e!=o1 && e!=o2)
            o3=e;

            if(o1>o2 && o1>o3)      //printing the numbers in ascending order using conditionsd
                {

                    if(o2>o3)
                        {
                            printf("%d ",o3);
                            printf("%d ",o2);
                        }
                    else
                        {
                            printf("%d ",o2);
                            printf("%d ",o3);
                        }

                        printf("%d ",o1);
                }

            else if(o2>o1 && o2>o3)       //printing in ascending order
                {

                    if(o1>o3)
                        {
                            printf("%d ",o3);
                            printf("%d ",o1);
                        }
                    else
                        {
                            printf("%d ",o1);
                            printf("%d ",o3);
                        }

                        printf("%d ",o2);
                }
            else
               {


               if(o1>o2)
                        {
                            printf("%d ",o2);
                            printf("%d ",o1);
                            }
                    else
                        {
                            printf("%d ",o1);
                            printf("%d ",o2);
                            }

                        printf("%d ",o3);
               }


     }


    return 0;  // return 0
}
