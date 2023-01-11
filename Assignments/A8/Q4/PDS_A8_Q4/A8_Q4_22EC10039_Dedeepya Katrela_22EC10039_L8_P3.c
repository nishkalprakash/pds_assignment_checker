//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:8
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int main()
{char s1[30],s2[30],i,j,count,k=0;
 printf("enter s1:");
 scanf("%s",s1);
 printf("enter s2:");
 scanf("%s",s2);
 
 for(i=0;s2[i]!='\0';i++)
  {count=0;
   for(j=0;s1[j]!='\0';j++)
   {if(s2[i+j]==s1[j])
      {count++;} 
   }
   if(count==j)
    {k++;}
  }
printf("s1 is repeated %d times in s2\n",k);

return 0;
}
