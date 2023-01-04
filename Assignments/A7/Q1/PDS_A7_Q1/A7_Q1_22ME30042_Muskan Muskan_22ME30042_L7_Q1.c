/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 7*/
#include<stdio.h>
int main()
{
  int a[5];
  int n,num,pos,i,j;
printf("Enter elements:");
  for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
  printf("Enter the number which is inserted:\n");
  scanf("%d",&num);
 for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    { 
      if ((a[j]>num)&&(a[i]<num))
        { 
          pos=i+1;
         break;
         
        }
    }
  }
for(int i=5;i>=pos;i--)
{ 
  a[i]=a[i-1];
}
 a[pos]=num;


 printf("Array after insertion:\n");
  for(i=0;i<6;i++)
   { 
     printf("%d\n",a[i]);
   }
  return 0;
  }










