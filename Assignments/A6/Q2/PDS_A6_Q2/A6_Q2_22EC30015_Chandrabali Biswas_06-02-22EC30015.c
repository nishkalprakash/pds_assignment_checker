/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description:scanf function
*/
#include <stdio.h> //header
int main()
{
   int n=0,spch=0,word=0,v=0,c=0,s=0;
   int num;long int num1;long long int num2;float num3;char char1;char char2[100];
   char str1[20],str2[20];
   printf("d for int,l for long int,i for long long int,f for real number,c for character,s for string: ");
   scanf("%c",&ch); //a
   switch(ch)
   {
       case 'd':printf("Enter:");
                scanf("%d",&num);
                break;
       case 'l':printf("Enter:");
                scanf("%ld",&num1);
                break;
       case 'i':printf("Enter:")
                scanf("%lld",&num2);
                break;
       case 'f':printf("Enter:");
                scanf("%f",&num3);
                break;
       case 'c':printf("Enter:");
                scanf("%c",&char1);
                break;
       case 's':printf("Enter:");
                scanf("%s",char2);
                break;
   }
   abc();  //b
   printf("Enter string:");  //c
   scanf("%[^\n]%*c",str1);

   for(int i=0;str1[i]!='\0';i++)  //checks for types of characters
   {
       if(str1[i]>=48 && str1[i]<=57)
        n++;
       else if(str1[i]==' ')
        word++;
       else if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
        v++;
       else if(str1[i]!='a'&&str1[i]!='e'&&str1[i]!='i'&&str1[i]!='o'&&str1!='u'&&str1[i]!='A'&&str1[i]!='E'&&str1[i]!='I'&&str1[i]!='O'&&str1[i]!='U')
        c++;
       else if(str1[i]=='.')
        {
            s++;
            spch++;
        }
        else
            spch++;

   }
   printf("Numeric characters:%d\n",n);
   printf("Special printable characters:%d\n",spch);
   printf("Words:%d\n",word+1);
   printf("Vowels:%d\n",v);
   printf("Consonants:%d\n",c);
   printf("Sentences:%d\n",s);
   return 0;   //end of program

}
void abc() //b
{
    char str[100],str1[20],str2[30];
    scanf("%s",str);
    int x=scanf("%19s %29s",str1,str2);
    printf("x:%d\nfirst string:%s\nsecond string:%s",x,str1,str2);
}

