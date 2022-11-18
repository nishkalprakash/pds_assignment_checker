/*This program is to find number ordered pairs possible for given input and print them and while inputting and enter -1 to stop reading into it*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  */
#include<stdio.h>
#include<math.h>
int count=0,t,c1=1,opv,a[100];
int combinations()
{
    int c[count],dif,i,j;
    dif=t-count;
    for(i=0;i<t;i++)
    {
       for(j=0;j<count;j++)
       {
          c[j]=a[i+j];
       }
    }
    if(t==c1)
    return 0;
    else
    {
       }
}


void main()
{
   int i;
   printf("Enter the values into the array and enter -1 to stop reading into it: ");
   for(i=0;i<100;i++)
   {
      scanf("%d",&t);
      if(t==-1)
      {
         break;
      }
      else
      {
         a[i]=t;
         count++;
      }
   }
   printf("Enter in how many ordered values you want the output : ");
   scanf("%d",&opv);
   t=pow(count,opv);
   combinations();
}
