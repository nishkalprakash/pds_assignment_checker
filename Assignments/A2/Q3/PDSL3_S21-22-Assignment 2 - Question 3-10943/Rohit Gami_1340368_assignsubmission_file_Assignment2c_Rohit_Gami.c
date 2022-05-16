#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,j,k,l,s[256],mini=100000,m1[4],m2[4],m3[4],m4[4];
    printf("Enter the price for machine 1 demand by four Vendors respectively\n");
    gets(s);
    printf("Enter the price for machine 1 demand by four Vendors respectively\n");
    gets(s);
    printf("Enter the price for machine 1 demand by four Vendors respectively\n");
    gets(s);
    printf("Enter the price for machine 1 demand by four Vendors respectively\n");
    gets(s);
    for(i=1;i<=4;i++)
     {for(j=1;j<=4;j++)
       {for(k=1;k<=4;k++)
          {for(l=1;l<=4;l++)
            {
               s[256]= m1[i]+m2[j]+m3[k]+m4[l];
            }}}}
    for(i=0;i<256;i++)
      {for(j=0;j<256;j++)
      {
         if(s[i]<s[j])
            if(mini>s[i])
            {
                mini= s[i];
            }
            else
            {
                mini= mini;
            }
         else
            if(mini<s[j])
            {
                mini= s[j];
            }
            else
            {
                mini= mini;
            }

      }}
    printf("Minimum expenses for repairing of all the machines= %d\n",mini);
    return 0;
}
