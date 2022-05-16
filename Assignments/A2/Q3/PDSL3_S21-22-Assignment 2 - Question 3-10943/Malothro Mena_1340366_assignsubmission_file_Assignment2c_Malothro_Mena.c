#include <stdio.h>

int main()
{
  int m1[4],m2[4],m3[4],m4[4],j;

  printf("Enter the price list for machine 1\n");
  for(int i=0;i<4;i++)
    {
        j=i;
      printf("For vendor %d\n",++j);
      scanf("%d",&m1[i]);
    }
   printf("Enter the price list for machine 2\n");
  for(int i=0;i<4;i++)
    {
        j=i;
      printf("For vendor %d\n",++j);
      scanf("%d",&m2[i]);
    }
   printf("Enter the price list for machine 3\n");
  for(int i=0;i<4;i++)
    {
        j=i;
      printf("For vendor %d\n",++j);
      scanf("%d",&m3[i]);
    }
   printf("Enter the price list for machine 4\n");
  for(int i=0;i<4;i++)
    {
        j=i;
      printf("For vendor %d\n",++j);
      scanf("%d",&m4[i]);
    }
  int min1,min2,min3,min4,a=1,b=1,c=1,d=1;

   min1=m1[0];
  for(int i=0;i<4;i++)
    {

      if(m1[i]<min1)
      {


        min1=m1[i];
      a=i;

      }
    }
     min2=m2[0];
    for(int i=0;i<4;i++)
    {

      if(m2[i]<min2)
{


        min2=m2[i];
        b=i;
}

    }
      min3=m3[0];
    for(int i=0;i<4;i++)
    {

      if(m3[i]<min3)
      {


        min3=m3[i];
        c=i;
      }

    }
     min4=m4[0];
    for(int i=0;i<4;i++)
    {

      if(m4[i]<min4)
        {
        min4=m4[i];
        d=i;

    }

}
 int total;
  total =min1+min2+min3+min4;
  printf("Total = %d\n",total);
  printf("Machine 1 -> Vendor %d\n",++a);
  printf("Machine 2 -> Vendor %d\n",++b);
  printf("Machine 3 -> Vendor %d\n",++c);
  printf("Machine 4 -> Vendor %d",++d);
  return 0;


}
