/*This program is to find wheather a password is correct or not*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
   char userid[16],password[16];
   int i,j,strlength=0,pdlen=0,pdck1=0,scc=0,ucc=0,lcc=0,rcc=0,dc=0;
   printf("Please enter your user ID : ");
   for (i=0;i<16;i++)
   {
      scanf("%c",&userid[i]);
   }
   printf("Please enter your password : ");
   for (i=0;i<16;i++)
   {
      scanf("%c",&password[i]);
   }
   for(i=0;i<16;i++)
   {
      strlength++;
      if(userid[i]=='\0')break;
   }
   for(i=0;i<16;i++)
   {
      pdlen++;
      if(password[i]=='\0')break;
   }
   for(i=0;i<pdlen-strlength;i++)
   {
      for(j=0;j<strlength;j++)
      {
         if(password[i+j]==userid[j]);
         pdck1++;
      }
   }

   if(pdck1==strlength)
   printf("Entered password is incorrect.");
   else
   {
   if(pdlen>=8&&pdlen<=15)
   {
      printf("   ");
      for(i=0;i<16;i++)
      {
         if(password[i]>='A'&&password[i]<='Z')ucc++;
         if(password[i]>='a'&&password[i]<='z')lcc++;
         if(password[i]=='$'||password[i]=='*'||password[i]=='+'||password[i]=='/'||password[i]=='#'||password[i]=='@'||password[i]=='<'||password[i]=='>'||password[i]=='?'||password[i]=='_'||password[i]=='!')
         scc++;
      }
      if(ucc>=1&&lcc>=1&&scc>=2)
      {
         for(i=0;i<16;i++)
         {
            for(j=0;j<16;j++)
            {
               if(password[i]==password[j])
               rcc++
            }
            if (rcc>5)
            {printf("Entered password is incorrect 5 repeated chaeracters");break;}

         }
            if (rcc<=5)

            {
               for(i=0;i<16;i++)
               {
                  if(password[i]=='0'||password[i]=='1'||password[i]=='2'||password[i]=='3'||password[i]=='4'||password[i]=='5||password[i]=='6'||password[i]=='7'||password[i]=='8'||password[i]=='9'||)
                  dc++;
               }
               if(dc>=6)
               printf("Entered password is incorrect more than 5 digits");
               else
               printf("Entered password is correct ");
            }

         }
       }
         else
         printf("Enter password is not good");

   }
   else
   printf("Enter password is of not a good length");


   }
  }
