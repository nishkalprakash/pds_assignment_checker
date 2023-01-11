//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:8
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int main()
{char s[50];
 int i,j,count=0,n,flag=0,k;
 printf("enter the string:");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {count++;}
 for(i=0;s[i]!='\0';i++)
  {if(s[i]!=s[count-1-i])
     {flag=1;
      break;}
  }

if(flag==0)
{for(i=0;i<count/2;i++)
  {for(j=i;j<count-i;j++)
    {printf("%c",s[j]);}
   printf(" ");
  }
}
printf("\n");
for(i=0;i<count;i++)
{for(j=1;j<=i;j++)
 {if(s[i-j]==s[i+j])
   {for(k=i-j;k<=i+j;k++)
      {printf("%c",s[k]);}
   printf(" ");}
 }
}
printf("\n");
return 0;
}
 
     
  
   
