
/*Name - Krishna Gupta
  Section - 14
  Roll no. - 22GG10024
  Assignment - Find the number of appeareance of S1 in S2 */
#include <stdio.h>
int main()
{
    char S1[25],S2[100];
    int i,size1=0,size2=0,c=0,k,j;
    scanf("%s",S1);             // taking S1 from user
    scanf("%s",S2);             // taking S2 from user
    for(i=0;S1[i]!='\0';i++)
    {
     size1++;                         // size of S1
     }
    for(i=0;S2[i]!='\0';i++)
     {
     size2++;                        // size of S1
      }
     for (j=0,i=0;i<size2;i++)
      {
      if (S1[j]==S2[i])                           // searching for S1 in S2
           {
              for (k=j;k<size1;k++)
              {
               if (S1[k]==S2[k+i]) 
                      c++;
               } 
           }
       }
 
printf("%d",c/size1);                   //printing the frequency of S1 in S2
 return 0;
}

