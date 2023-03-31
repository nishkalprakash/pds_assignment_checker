#include<stdio.h>
int main()
{
    char a;
    int flag1=0,flag2=0,flag3=0;

    while(a!='\n')
    {
        scanf("%c",&a);
        if (a<='A' && a>='Z')
        {
            printf("first letter should be capital");
        }

        if (a ==' ')
        {
            flag2++;
        }
        if (a>'0' && a<'9')
            {
            flag1++;
        }
        if (a!='@')
        {
            flag3++;
        }
        if (a!='#')
            {
            flag3++;
        }
        if (a!='$')
        {
            flag3++;
        }
        if (a!='%')
        {
            flag3++;
        }
        if (flag1=0)
        {
            printf("it should contain digit");
        }
        if (flag2=0)
        {
            printf("it should not contain space");
        }
        if (flag3=0)
        {
            printf("it should contain special charecter");
        }




    }
    line:return 0;
}
