#include<stdio.h>//important header files
#include<string.h>
int main()
{
    char exp[100],str[100];
    printf("Enter expressions :");//taking the input string
    scanf("%s",exp);
    int k=-1,i,n=strlen(exp);
    char temp ;
    for(i=0;i<n;i++)
    {  //for exp like ]](){{
        if((exp[i]==']'||exp[i]=='}'||exp[i]=='}')&&k==-1)
        {
           break;
        }
        if((exp[i]=='['||exp[i]=='{'||exp[i]=='('))
            {
                k++;
                str[k]=exp[i];
            }
            else
            {
                temp=str[k];
                k--;
                if((temp=='('&&exp[i]==')')||(temp=='{'&&exp[i]=='}'||temp=='['&&exp==']'))
              {
                  continue;
              }
              else
              {
                  break;

              }
            }

            }
            if(i==n&&k==-1)
            {
                printf("matched parenthesis\n");
            }
            else printf("un matched parenthesis\n");
            return 0;
}
