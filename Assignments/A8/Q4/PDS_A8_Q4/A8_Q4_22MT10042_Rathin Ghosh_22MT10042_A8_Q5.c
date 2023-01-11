#include<stdio.h>
int main()
{
char word_1[50], word_2[50];
int i,j,count_1=0,count_2=0,c=0,k=0;
printf("Enter 2 words, the first one being longer than the second : \n");
scanf("%s",word_1);
scanf("%s",word_2);
while (word_1[i]!='\0')
{
count_1++;
i++;
}
while (word_2[i]!='\0')
{
count_2++;
i++;
}
for(i=0;i<count_1;i++)
{
c=0;
for(j=i;j<=i+3;j++)
if (word_1[j]==word_2[c++])
k++;
}
printf("%d",k);
return 0;
}

