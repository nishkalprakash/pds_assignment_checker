#include<stdio.h>
int main()
{
     char str[100];
     int i,length,v = 0,c = 0,special = 0,num = 0
     scanf("%s", str);
     for(i = 0;str[i] != '\0';i++)
     {
             if((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
              {
                v++;
              }
             else
               {
                   c++;
               }
         if(str[i] == ' ')
         {
             special++;
         }
         if(str[i] == '0' || str[i] == '1' || str[i] == '2' ||str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '10')
     }
     printf("Numeric characters : %d\n",num);
     printf("Special printable characters : %d\n",special);
     printf("Vowels : %d\n",v);
     printf("Constant : %d\n",c);
     return 0;
}


