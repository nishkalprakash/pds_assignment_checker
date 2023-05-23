#include <stdio.h>
void abc()
{
    printf("\nEnter a sentence : \n");
    char str[100],str1[100],str2[30];
    scanf("%s",str);
    int x= scanf("%19s %29s",str1,str2);
    printf("x: %d\n",x);
    printf("str: %s\n",str);
    printf("str1: %s\n",str1);
    printf("str2 : %s\n",str2 );

}
int main()
{
    char form[10];
    printf("Enter the format specifier : ");
    scanf("%s",form);
    if(form[1]!='l')
    {
        if(form[1]=='d')
        {
            printf("Enter an integer : ");
            int n;
            scanf("%d",&n);

            printf("The integer input is %d",n);
        }
        else if(form[1]=='f')
        {
            printf("Enter a float value : ");
            float n;
            scanf("%f",&n);

            printf("The float value input is %f",n);
        }
        else if(form[1]=='c')
        {
            printf("Enter a character : ");
            char n;
            scanf("%c",&n);

            printf("The integer input is %c",n);
        }
        else if(form[1]=='s')
        {
            printf("Enter a string : ");
            char n[100];
            fflush(stdin);
            scanf("%s",&n);

            printf("The string input is %s",n);
        }

    }
    else
    {
        if (form[2]=='d')
        {
            printf("Enter a long integer : ");
            long int n;
            scanf("%ld",&n);

            printf("The integer input is %ld",n);
        }
        else
        {
            printf("Enter a long long  integer : ");
            long long int n;
            scanf("%lld",&n);
            printf("The integer input is %d",n);
        }
    }
    abc();



    printf("\n\n\nPART C :\n");


}
