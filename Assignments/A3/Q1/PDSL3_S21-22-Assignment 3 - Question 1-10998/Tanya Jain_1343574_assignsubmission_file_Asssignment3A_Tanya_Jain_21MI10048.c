#include <stdio.h>
int main()
{
    char user[100];char pass[100];
    printf("Enter the username:\n");
    scanf("%s",user);
    int l1,l2;
    printf("Enter  the password\n");
    scanf("%s",pass);
    for(l1=0;pass[l1]!='\0';l1++);
    for(l2=0;user[l2]!='\0';l2++);
    if(l1<8)
    {
        printf("Not Acceptable\n");
        return 0;
    }
    int count=0;
   for(int i=0;i<l1-l2;i++)
    {
        int j=0;
        for(int j=0;j<l2;j++)
        {
            if(pass[i+j]==user[j])
            {
                count++;
            }
        }
        if(count==l2)
    {
        printf("Not Acceptable\n");
        return 0;
    }
        count=0;
    }

    char c[11]={'$','+','*','/','#','@','<','>','?','_','!'};
    count=0;
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<11;j++)
        {
            if(pass[i]==c[j])
                count++;
        }
    }
    if(count<2)
    {
        printf("Not Acceptable\n");
        return 0;
    }
    count=0;
    int count1=0;
     for(int i=0;i<l1;i++)
    {
        int k=pass[i];
        if(k>=65 && k<=90)
            count++;
        if(k>=97 && k<=122)
            count1++;
    }
    if(count<1 || count1<1)
    {
        printf("Not Acceptable\n");
        return 0;
    }
    char c1[10]={'0','1','2','3','4','5','6','7','8','9'};
    count=0;
    char b=pass[0];
    for(int i=1;i<l1;i++)
    {
        if(pass[i]==b)
        {
            for(int j=i;j<l1;j++)
            {
                if(pass[j]==b)
                    count++;
                else if(count>5)
            {
                printf("Not Acceptable\n");
                return 0;
            }
            b=pass[j];
            }
        }
        b=pass[i];
    }
    count=0;
    count1=0;
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(pass[i]==c1[j])
                count=1;
        }
        if(count==1)
        {
            char d=pass[i];
           for(int j=i;j<l1;j++)
           {
               if(pass[j]==d)
                count++;
               else if(count>5)
            {
                printf("Not Acceptable\n");
                return 0;
            }
            d=pass[j];
           }
        }
    }
    printf("Acceptable\n");
    return 1;
}