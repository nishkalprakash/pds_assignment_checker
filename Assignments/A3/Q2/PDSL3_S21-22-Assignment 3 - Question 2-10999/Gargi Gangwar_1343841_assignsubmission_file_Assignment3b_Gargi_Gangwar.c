#include <stdio.h>


int main()
{
    int len1,len2,i,score,penalty[50];
    char str1[50],str2[50];

    //input strings from user
    printf("enter first string\n");
    scanf("%s",str1);
    printf("enter second string\n");
    scanf("%s",str2);
    printf("string 1 is %s\n",str1);
    printf("string 2 is %s\n",str2);


    //finding lengths of strings
    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);

   if(len1==len2)
   {
       for (i=0; str1[i] != '\0'; i++)
    {

        for(j=0;str2[j]!='\0'; j++)
            {

              if (str1[i+j]!= str2[j])
                {
                 penalty[j]=1;
                }
              if (str1[i+j]== str2[j])
                penalty[j]=0;
            }
    }
   }

}

