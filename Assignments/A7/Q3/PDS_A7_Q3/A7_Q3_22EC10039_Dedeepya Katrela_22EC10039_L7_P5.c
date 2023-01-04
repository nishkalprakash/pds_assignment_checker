//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:7
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int main()
{char p[10],q[10];
 int n1,i,count=0,j;
 printf("enter the no of chars in p:");
 scanf("%d",&n1);
 printf("enter the no of chars in q:");
 scanf("%d",&n1);
 for(i=0;i<n1;i++)
 {scanf("%c",&p[i]);}
  for(i=0;i<n1;i++)
  {printf("%c",p[i]);}

  for(i=0;i<n1;i++)
 {scanf("%c",&p[i]);}
  for(i=0;i<n1;i++)
  {printf("%c\n",p[i]);}
 for(j=0;j<n1;j++)
 {for(i=0;i<n1;i++)
   {if(p[i]==q[j])
     {count++;}
   }
  }
 if(count==n1)
  printf("anagrm");
 else
  printf("not an anagram");
 

return 0;
}
