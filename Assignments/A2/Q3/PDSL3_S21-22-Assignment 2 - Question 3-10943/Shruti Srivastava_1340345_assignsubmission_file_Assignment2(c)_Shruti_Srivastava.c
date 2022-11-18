/* Name - Shruti Srivastava
   Roll no- 21EE30025
   Electrical Engg. Dual Degree
   Section 3
   Code Blocks
   Windows 10
   */
#include<stdio.h>
int main()
{
   int m1[4]= {8200,8300,6900,9200};
   int m2[4]= {7700,3700,4900,9200};
   int m3[4]= {1100,6900,500,8600};
   int m4[4]= {800,900,9800,2300};

   int S[24];
   int i,j,k,l,c=0,d;

   for(i=0; i<4; i++)
   { for(j=0; j<4; j++)
      { for(k=0; k<4; k++)
         { for(l=0; l<4; l++)
            { if(i!=j  && j!=k && k!=l)
             {S[c]= m1[i] + m2[j] + m3[k] + m4[l];
              c++;

             }

            }
        }
      }
   }

   for(i=0; i<23; i++)
   {for(j=0 ; j<23-i; j++)
    {
      if(S[j]>S[j+1])
       {
         int t = S[j];
         S[j]= S[j+1];
         S[j+1]=t;
       }
    }
    }

    printf("Total cost%d\n",S[0]);
    return 0;
    }
