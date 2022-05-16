#include <stdio.h>


int main()
{
   int len1=0,len2=0,flag1,flag2=0,i,j,count;
   char name[25],pass[15];
   printf("enter username and password");
   scanf("%s \n %s\n",name,pass);

   for(len2=0;pass[len2]!='\0';len2++);
   if(len2<8 || len2>15)
    flag2=1;

   for (i=0; name[i] != '\0'; i++)
    {
        flag1 = 1;
        for(j=0;pass[j]!='\0'; j++)
            if (name[i+j]!= pass[j]) {
                flag1 = 0; break;
        }
        if (flag1 == 1) flag2=1;
    }

  for(j=0;j<len2;j++)
  {


   //for capital letter
   for (int i = 65; i <= 90; i++)
   {
       if (pass[j]==i)
        flag2=1;
   }

   //for small letter
    for (int i = 97; i <= 122; i++)
     {
        if (pass[j]==i)
        flag2=1;
     }

    //for special character
    if(pass[j]=='$'
        ||pass[j]=='*'
        ||pass[j]=='+'
        ||pass[j]=='/'
        ||pass[j]=='#'
        ||pass[j]=='@'
        ||pass[j]=='<'
        ||pass[j]=='>'
        ||pass[j]=='?'
        ||pass[j]=='!'
       )   flag2=1;

       count=0;
       for(i=0;i<len2;i++)
       {
           if(name[j]!='1' || name[j]!='2' || name[j]!='3' || name[j]!='4' || name[j]!='5' || name[j]!='6' || name[j]!='7' || name[j]!='8' || name[j]!='9' || name[j]!='0' )
           {
               if(name[j]==name[i])
                count++;
           }
       }

       if(count>5)
        flag2=0;


  }

  if(flag2==1)
    printf("password approved");
  else
    printf("password not approved");
}

