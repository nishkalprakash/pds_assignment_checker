/*KETHAVATH SHIVAKUMAR
21MI31013*/
#include <stdio.h>

int specialCh, upcCh, lowcCh, number;
int strlen(char A[])
{
int i, length=0;
for (i=0; A[i] != '\0'; i++) length++;
return length;
}
void checkPass(char a)
{


    if ((48 <= a)&& (a<= 57))
    {
        number++;
    }
    else if ((65 <= a) && ( a <= 90))
    {
        upcCh++;
    }
    else if ((97 <= a) && ( a <= 122))
    {
        lowcCh++;
    }
    else
    {
        specialCh++;
    }



}

int main()
{


    int ascii[20],flag=0
    char pass[15];
    char user[15];
    printf("enter user id-");
    gets(user);
    printf("Enter password\n");
    gets(pass);
   for(int i=0,i<=strlen(pass);i++);
   {
       for (int j=0;j<=strlen(pass);i++)
       {
           if (A[i]==A[j]&&i=j)
           {
               flag++;
           }
       }

   }
    if ((strlen(pass) < 8) || (strlen(pass) > 15))
    {
        printf("the password you entered is invalid because there is no character between 8 to 12\n");
    }
    else
    {
        for (int i = 0; i < strlen(pass); i++)
        {
            ascii[i] = (int)pass[i];
            printf("%d\n", ascii[i]);
            checkPass(pass[i]);
        }
        if (specialCh == 0||specialCh == 1)
        {
            printf("the password you entered is invalid because there is no special character\n");
        }
        else if (number == 0)
        {
            printf("the password you entered is invalid because it is not having any digit\n");
        }
        else if (lowcCh == 0)
        {
            printf("the password you entered is invalid because it is not having any lower case character\n");
        }
        else if (upcCh == 0)
        {
            printf("the password you entered is invalid because it is not having any uppercase character\n");
        }
        else if (flag>=5)
        {
            printf("Your password is invalid because it more than 5 repeated character \n");
        }
        else
        {
            printf("valid password\n");
        }

    return 0;
}
