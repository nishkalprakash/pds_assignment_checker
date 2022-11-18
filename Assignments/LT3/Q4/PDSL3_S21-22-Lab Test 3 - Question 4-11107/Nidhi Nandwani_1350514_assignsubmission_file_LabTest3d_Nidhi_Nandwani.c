/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    printf("Enter the expression: ");
    scanf("%s", s);
    int l = strlen(s);
    int array[l];//array to store the indexes of open braces which can be checked for with the closed braces
    char open[3] = {'(', '{', '['};
    char close[3] = {')', '}', ']'};//choosing the same index for the pair of braces
    int index=0;array[0] =3;
    int flag=0;//flag to check if the paranthesis are matched or not
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(s[i]==open[j])
            {
                array[index] = j;
                break;
            }
            if(s[i] == close[j])
            {
                if(array[index-1]==j)//checking if the last stored matches the index
                {
                    index-=2;//if yes then going to las index to change its value
                    break;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            
        }
       if(flag==1)
        {
            printf("Unmatched paranthesis");
            break;
        }
        index++; 

    }
    if(flag==0)
    printf("Matched Paranthesis");
    return 0;
}