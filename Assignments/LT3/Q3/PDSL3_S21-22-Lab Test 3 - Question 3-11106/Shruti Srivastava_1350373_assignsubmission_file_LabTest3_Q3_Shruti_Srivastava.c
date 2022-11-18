/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10 */

#include<stdio.h>
int main()
{
  int a,b;
  printf("\nEnter two digits : "); //taking the two numbers as input
  scanf("%d%d",&a,&b);

  if(a<1 || a>9 || b<1 || b>9)// checking the condition that whether the given two numbers are single positive digit or not
   {
      printf("Incorrect Input");
   }

  else
  {
    int comb[32]; //array to store the required numbers
    int S=0, i,j,k,l,p=0,m;

    for(i=a; i<=b; i=i+b-a)
     {for(j=a; j<=b; j=j+b-a)
        {for(k=a; k<=b; k=k+b-a)
          {for(l=a; l<=b; l=l+b-a)
             {for(m=a; m<=b; m=m+b-a)
                {
                   S = i*(10000)+ j*(1000)+ k*(100)+ l*(10)+ m; //total number of 5 digit combinations possible

                    if(S%(a+b) != 0) //checking the divisibility condition
                       {
                          comb[p]= S; //filling the array
                          S=0;
                          p++;
                       }
                }
             }
          }
        }
       }


    printf("\nNumbers are :\n");

    for(i=0; i<p; i++) //printing the required numbers
     {
        printf("%d ",comb[i]);
     }

    }
}
