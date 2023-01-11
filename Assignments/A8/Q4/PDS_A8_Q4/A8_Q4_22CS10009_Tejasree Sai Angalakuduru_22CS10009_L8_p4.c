/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 8
 *Description   : s1,s2 comparision
 */

#include<stdio.h>
int main ()
{
  char s1[5],s2[25];
  int i,j,l,k=1,c1=1,c2=1,c=0,flag=1;
 printf("Enter s1 :\n");
 scanf("%s",s1);
 printf("Enter s2 :\n");
 scanf("%s",s2);
 for(i=0;s1[i]!='\0';i++)
  c1++;
 for(i=0;s2[i]!='\0';i++)
  c2++;
 for(i=0;i<=c2-c1;i++)
 { l=0;
   flag=1;
   for(j=i;j<=i+c1,l<c1;j++,l++)
    {
      
      
      if(s2[j]!=s1[l])
       {
          flag=0;
           break;
        }
      else
        continue;
      }
  if(flag!=0)
    c++;
  else
   continue;
 
     
   
   
 }
 
  printf("The number of times repeated is %d\n",c);
 return 0;
}
