#include <stdio.h>
#include<math.h>

// NAME- ANMOL KUMAR MISHRA
//SECTION -3
//ROLL NO.- 21EC30060
//SUBJECT- PDS LAB
// ASSIGNMENT NO.- 3 _ QUESTION NO. 1
//USE TO FIND STRING LENGTH


int len(char a[])
{
    int flag =0;
    for (int i=0;a[i]!='\0';i++)
    {
   flag ++;
    }
    return flag;
}

int main()
{
    char nu[15],wp[16]; 
    int sp_c[]={36,42,43,47,35,64,60,62,63,33,95},paw_len,nu_len,count;
    printf("Username : ");
    scanf("%s", nu);
    printf("Password : ");
    scanf("%s", wp);
    paw_len = len(wp);
    nu_len = len(nu);
    if (paw_len<8 || nu_len>15)
    {
        printf("NOT ALLOWABLE\n");
        printf("PASSWORD LENGTH ERROR 7<LENGTH<16\n");
        return 0;
    }
    
    //USE TO FIND LOWER CASE
    for (int i=0;i<paw_len;i++)
    {
        if (wp[i]>96 && wp[i]<123)
        {
            count =1;
            break;
        }
    }
    if (count ==0)
    {
        printf("NOT ALLOWABLE\n");
        printf("INCLUDES LOWER CASE LETTER\n");
        return 0;
    }
    
    
    //USE TO FIND THE UPPER CASE
    count=0;
    for (int i=0;i<paw_len;i++)
    {
        if (wp[i]>64 && wp[i]<91)
        {
            count =1;
            break;
        }
    }
    if (count ==0)
    {
        printf("NOT ALLOWABLE\n");
        printf("PLEASE INCLUDE UPPER CASE LETTER\n");
        return 0;
    }
    
    
    //USE TO FIND SPECIAL CHARACTER
    count=0;
    for (int i=0;i<paw_len;i++)
    {
        for (int j=0;j<11;j++)
        {
            if (wp[i]==sp_c[j])
            {
                count++;
                break;
            }
        }
    }
    if (count<2)
    {
        printf("NOT ALLOWABLE\n");
        printf("INCLUDE ATLEAST TWO SPECIAL CHARACTER\n");
        return 0;
    }
    
    
    //USE TO FIND CONSECUTIVE DIGIT 
    count=0;
    for (int i=0;i<paw_len;i++)
    {
        for (int j=48;j<58;j++)
        {
            if (wp[i]==j)
            {
                count++;
                break;
            }
            if (j==57)
            {
                count=0;
            }
        }
        if (count==5)
        {
            printf("NOT ALLOWABLE\n");
            printf("TOO MANY CONSECUTIVE DIGITS\n");
            return 0;
        }
    }
    
    
    //USE TO FIND REPEATED CHARACTERS 
    for (int i=0;i<paw_len;i++)
    {
        count =0;
        for (int j=0;j<paw_len;j++)
        {
            if (wp[i]==wp[j])
            {
                count++;
                break;
            }
            
        }
        if (count>5)
        {
            printf("NOT ALLOWABLE\n");
            printf("TOO MANY REPEATED CHARACTERS\n");
            return 0;
        }
    }
    

    //USE TO FIND USERNAME 
    for (int i=0;i<paw_len;i++)
    {
        for (int j=0;j<nu_len;j++)
        {
            if (wp[i+j]!=nu[j])
            {
                break;
            }
            if (j==nu_len-1)
            {
                printf("NOT ALLOWABLE\n");
                printf("PASSWORD SHOULD NOT BE CONTAINED USERNAME\n");
                return 0;
            }
        }
        
    }
    
    
    printf("ACCEPTABLE\n");
    printf("THANK YOU AND HAVE A NICE DAY\n");
    return 0;
}