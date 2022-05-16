/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/
#include <stdio.h>

int spcCh, upcCh, lowcCh, digit;
/*function for checking the length of the string */
int strlen(char A[])
{
int i, length=0;
for (i=0; A[i] != '\0'; i++) length++;
return length;
}
/* function for to find the no of character*/
void checkPass(char a)
{
    if ((48 <= a)&& (a<= 57))
    {
        digit++;
    }
    else if (a>='A'&&a<='Z')
    {
        upcCh++;
    }
    else if (a>='a'&&a<='z'))
    {
        lowcCh++;
    }
    else
    {
        spcCh++;
    }

}

int main()
{
    int ascii[20],flag=0
    char pass[15];
    char user[15];
    printf("enter the user id-")
    gets(user);
    printf("Enter the password\n");
    gets(pass);
   for(int i=0,i<=strlen(pass);i++)
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
        printf("Your password is invalid because it does not have character between 8 to 12\n");
    }
    else
    {
        for (int i = 0; i < strlen(pass); i++)
        {
            ascii[i] = (int)pass[i];
            printf("%d\n", ascii[i]);
            checkPass(pass[i]);
        }
        if (spcCh == 0||spcCh == 1)
        {
            printf("Your password is invalid because it does not have special character\n");
        }

        else if (lowcCh == 0)
        {
            printf("Your password is invalid because it does not have any lower case character\n");
        }
        else if (upcCh == 0)
        {
            printf("Your password is invalid because it does not have any uppercase character\n");
        }
        else if (flag>=5)
        {
            printf("Your password is invalid because it more than 5 repeated character \n");
        }
        else
        {
            printf("Your password is valid\n");
        }

    return 0;
}
