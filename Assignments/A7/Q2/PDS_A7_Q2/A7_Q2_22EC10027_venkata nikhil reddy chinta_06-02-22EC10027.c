/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 6
* Description :about scanf()
*question : 2
*/
#include<stdio.h>
#include<string.h>
void abc()
{
    char str2[100],str3[20],str4[30];
    printf("give a string : ");
    scanf("%s" , str2);
  int x= scanf("%19s %29s" ,str3,str4);
    printf("%s" , x);
    printf("%s %s %s" , str2,str3,str4);

}
int main()
{
    char str[5],ld,lld,d,f,c,s,a4,a5[100];
    int a1;
    long int a2;
    long long int a3;
    float a6;
    printf("give the formant spesifier(d or f or ld or lld or c or s) : ");
    scanf("%s" , str);
    if(str[0]=='d')
    {
        printf("give the number : ");
        scanf("%d", &a1);
        printf("the given number is %d" , a1);
    }
    if(str[0]=='ld')
    {
        printf("give the number : ");
        scanf("%ld", &a2);
        printf("the given number is %ld" , a2);
    }
    if(str[0]=='lld')
    {
        printf("give the number : ");
        scanf("%lld", &a3);
        printf("the given number is %lld" , a3);
    }
    if(str[0]=='f')
    {
        printf("give the number : ");
        scanf("%f", &a6);
        printf("the given character is %f" , a6);
    }
    if(str[0]=='c')
    {
        printf("give the number : ");
        scanf("%c", &a2);
        printf("the given character is %c" , a4);
    }
    if(str[0]=='s')
    {
        printf("give the string : ");
        scanf("%s", &a5);
        printf("the given string is %s" , a5);
    }

/*int a1;
long int a2;
long long int a3;
float a4;
char a5;
char str[20];
printf("give any integer : \n");
scanf("%d" , &a1);
printf("the given integer is :%d\n" , a1);

printf("give any little bigger integer : \n");
scanf("%ld" , &a2);
printf("the given integer is :%ld\n" , a2);

printf("give any long integer : \n");
scanf("%lld" , &a3);
printf("the given integer is :%lld\n" , a3);

printf("give any real number : \n");
scanf("%f" , &a4);
printf("the given real number is :%f" , a4);

printf("give any character : \n");
scanf("%c" , &a5);
printf("the given character is :%c\n" , a5);

printf("give any string : \n");
scanf("%s" , str);
printf("the given string is :%s\n" , str);*/

abc();



char str1[1024];
printf("give the string whose size is lss than 1024 : ");
int x=scanf("%[^\n]s" , str1);
char a,e,i,o,u,rem;
int len,j,vowels,consonents,count;

len = strlen (str1);
for(j=0;j<len;j++)
{
    if(str1[j]==a)
    {
        count++;
    }
     if(str1[j]==e)
    {
        count++;
    } if(str1[j]==i)
    {
        count++;
    } if(str1[j]==o)
    {
        count++;
    } if(str1[j]==u)
    {
        count++;
    }
}
vowels==count;
consonents==len-count;
printf("no of vowels is :%d" , vowels);
printf("no of consonents is :%d" , consonents);
printf("words :%d" , x);
return 0;
}
