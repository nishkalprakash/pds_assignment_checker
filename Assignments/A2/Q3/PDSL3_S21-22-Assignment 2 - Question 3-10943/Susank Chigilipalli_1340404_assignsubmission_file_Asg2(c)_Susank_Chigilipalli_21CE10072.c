/*This program is to calculate minimum cost for repairing  4 CSE department computers*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
int main()
{
  int n=4,m1[4],m2[4],m3[4],m4[4],i,min,tc=0,mv1,mv2,mv3,mv4;
  printf("Vendors please enter your charge for repairing in order for machine 1 in rupee");
  for (i = 0; i < n; ++i)
  scanf("%d",&m1[i]);
  printf("Vendors please enter your charge for repairing in order for machine 2 in rupee");
  for (i = 0; i < n; ++i)
  scanf("%d",&m2[i]);
  printf("Vendors please enter your charge for repairing in order for machine 3 in rupee");
  for (i = 0; i < n; ++i)
  scanf("%d",&m3[i]);
  printf("Vendors please enter your charge for repairing in order for machine 4 in rupee");
  for (i = 0; i < n; ++i)
  scanf("%d",&m4[i]);
  min=1000000;
  for(i=0;i<=3;i++)
  {
    if (m1[i] < min) min = m1[i];
  }
  for(i=0;i<=3;i++)
  {
    if(min==m1[i])  mv1=i+1;
  }
  tc=tc+min;
  min=1000000;
  for(i=0;(i<=3)&&(i!=mv1-1);i++)
  {
    if (m2[i] < min) min = m2[i];
  }
  for(i=0;i<=3;i++)
  {
    if(min==m2[i])  mv2=i+1;
  }
  tc=tc+min;
  min=1000000;
  for(i=0;(i<=3)&&(i!=mv1-1)&&(i!=mv2-1);i++)
  {
    if (m3[i] < min) min = m3[i];
  }
  for(i=0;i<=3;i++)
  {
    if(min==m3[i])  mv3=i+1;
  }
  tc=tc+min;
  min=1000000;
  for(i=0;(i<=3)&&(i!=mv1-1)&&(i!=mv2-1)&&(i!=mv3-1);i++)
  {
    if (m4[i] < min) min = m4[i];
  }
  for(i=0;i<=3;i++)
  {
    if(min==m4[i])  mv4=i+1;
  }
  tc=tc+min;
  printf("Total cost = %d\n",tc);
  printf("Machine1 - Vendor%d\n",mv1);
  printf("Machine2 - Vendor%d\n",mv2);
  printf("Machine3 - Vendor%d\n",mv3);
  printf("Machine4 - Vendor%d\n",mv4);
  return 0;
}
