// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 2

#include<stdio.h>
 #include<time.h>
 #include<stdlib.h>
int main()
{
     int m1[4]={8200,8300,6900,9200};
     int m2[4]={7700,3700,4900,9200};
     int m3[4]={1100,6900,500,8600};
     int m4[4]={800,900,500,2300};

     int min=99999;
     int M1,M2,M3,M4;

     int i,j,k,l;
     for ( i = 0; i < 4; i++)
     {
         for ( j = 0; j < 4; j++)
         {
             for(k=0;k<4;k++)
             {
                 for(l=0;l<4;l++)
                 {
                      if(i!=j&&j!=k&&k!=l&&i!=k&&i!=l&&j!=l)
                      {
                          if(m1[i]+m2[j]+m3[k]+m4[l]<min)
                          {
                                min=m1[i]+m2[j]+m3[k]+m4[l];
                                M1=i+1;M2=j+1;M3=k+1;M4=l+1;
                          }
                      }
                 }
             }
         }
         
     }

     printf("\nThe Total Cost =%d",min);
     printf("\nMachine1-Vendor%d",M1);
      printf("\nMachine2-Vendor%d",M2);
       printf("\nMachine3-Vendor%d",M3);
        printf("\nMachine4-Vendor%d",M4);

        return 0;
     
}