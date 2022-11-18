#include<stdio.h>

char user[100], pass[100];
int flaga, flagb, flagc, flagd, flage;
int length;

// CHECKING FOR USERNAME & PASSWORD MATCH
void match_check (char pass[100])
{
    int i,j;

    for (j=0;pass[j]!='\0';j++)
    {
        if (pass[j]==user[0])
        {
            for (i=0; user[i]!='\0'; i++)
            {
                if (user[i]==user[j])
                    {
                        flaga = 0;
                    }
                else 
                    {
                        flaga = 1;
                    }
            }
        }
    }
    
}

// CHECKING FOR STRING LENGHT
void strlen1 (char pass[100])
{
    int i,count;

    for (i=0,count=1;pass[i]!='\0';i++,count++)
    {
        length = count;
    }

    if (length>=8 && length<=15)
    {
        flagb = 1;
    }
    else
    {
        flagb = 0;
    }

    
}

//CHECKING FOR ATLEAST ONE UPPERCASE, ONE LOWERCASE & TWO SPECIAL CHARS
void special_check (char pass[100])
{
    int i,count1,count2,count3;

    for (i=0,count1=0,count2=0,count3=0;pass[i]!='\0';i++)
    {
        if (pass[i]>=65 && pass[i]<=90)
        {
            count1++;
        }
        if (pass[i]>=97 && pass[i]<=122)
        {
            count2++;
        }
        if (pass[i]=='$' || pass[i]=='*' || pass[i]=='+' || pass[i]=='/' || pass[i]=='#' || pass[i]=='@' || pass[i]=='<' || pass[i]=='>' || pass[i]=='?' || pass[i]=='_' || pass[i]=='!')
        {
            count3++;
        }
    }

    if (count1>=1 && count2>=1 && count3>=2)
    {
        flagc = 1;
    }
    else
    {
        flagc = 0;
    }

    
}

//CHECKING FOR 5 CONSECUTIVE DIGITS

void  consecutive (char pass[100])
{
    int i;

    for (i=0;pass[i]!='\0';i++)
    {
        if ((pass[i]>=48 && pass[i]<=57) && (pass[i+1]>=48 && pass[i+1]<=57) && (pass[i+2]>=48 && pass[i+2]<=57) && (pass[i+3]>=48 && pass[i+3]<=57) && (pass[i+4]>=48 && pass[i+4]<=57))
        {
            flagd = 0;
        }
        else
        {
            flagd = 1;
        }
    }

    
}

// CHECKING FOR REPEATED CHARACTERS
void repeated (char pass[100])
{
    int i,j,count;

    for (i=0;pass[i]!='\0';i++)
    {
        for (j=1,count=0;pass[j]!='\0';j++)
        {
            if (pass[i]==pass[j])
            {
                count++;
            }
            if (count>5)
            {
                break;
            }
        }
        
        break;
    }
    flage = 0;
}

int main ()
{
    printf("Username: ");
    scanf("%s", user[100]);
    printf("Password: ");
    scanf("%s", pass[100]);

     match_check(pass);
     strlen1(pass);
     special_check(pass);
     consecutive(pass);
     repeated (pass);

    if (flaga==1 && flagb==1 && flagc==1 && flagd==1 && flage!=0)
    {
        printf("Acceptable");
    }
    else
    {
        printf("Not acceptable");
    }

    return 0;
}