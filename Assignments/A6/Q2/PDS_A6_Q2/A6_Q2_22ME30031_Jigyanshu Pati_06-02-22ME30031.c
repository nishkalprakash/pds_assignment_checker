//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 6
//description:Q3
#include<stdio.h>
int main()
{
    char str[100], str1[20],str2[30];
    scanf("%s",&str);
    int i,len=0,j=0,k=0;
    for (i=0;i<20;i++)
    {
        str1[k]=str[i];
        k++;
    }
    printf("%s\n",str1);
    while (str1[len])
    {
        len++;
    }
    for (i=7;i<(7+30);i++)
    {
        str2[j]=str[i];
        j++;
    }
    printf("%s",str2);

}
