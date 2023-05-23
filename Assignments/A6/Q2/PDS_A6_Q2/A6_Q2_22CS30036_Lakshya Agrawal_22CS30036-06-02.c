/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 6
Description : Versatile scanf()
*/

#include<stdio.h>

#define MAXSIZE 1024

void abc()
{
    char str[100],str1[20],str2[30];
    int x = scanf("%19s %29s",str1,str2);
    printf("The value of x : %d",x);
    printf("\n str1 : %s",str1);
    printf("\n str2 : %s",str2);
}

int main()
{
    char format[10];

    printf("Enter the format specifier : ");
    scanf("%s",format);
    int f_len=0;
    for(int i=0;format[i]!='\0';i++)
        f_len++;
    if(f_len==2)
    {
        long int ln;
        printf("Enter a long integer : ");
        scanf("%ld",&ln);
        printf("\nThe long integer is : %ld",ln);
    }
    else if(f_len==3)
    {
        long long int lln;
        printf("Enter a long long integer : ");
        scanf("%lld",&lln);
        printf("\nThe long long integer is : %lld",lln);
    }
    else
    {
        if(format[0]=='d')
        {
        int n;
        printf("Enter a integer : ");
        scanf("%d",&n);
        printf("\nThe integer is : %d",n);
        }
        if(format[0]=='f')
        {
        float f;
        printf("Enter a real number : ");
        scanf("%f",&f);
        printf("\nThe real number is : %f",f);
        }
        if(format[0]=='c')
        {
        char c;
        printf("Enter a character : ");
        scanf(" %c",&c);
        printf("\nThe character is : %c",c);
        }
        if(format[0]=='s')
        {
        char str[MAXSIZE];
        printf("Enter a string : ");
        scanf("%s",&str);
        printf("\nThe string is : %s",str);
        }
    }

    printf("\n\nEnter any string : ");
    abc();

    printf("\n\n");
    char str1[MAXSIZE];
    printf("Enter the message : ");
    scanf(" %[^\n]s",str1);

    int num=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='0' && str1[i]<='9')
            num++;
    }
    printf("Numeric characters : %d\n",num);

    int ch=0,len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }

    for(int i=0;str1[i]!='\0';i++)
    {
        if((str1[i]>= '0' && str1[i]<='9') || (str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z') || str1[i]==' ')
        ch++;
    }
     printf("Special printable characters : %d\n",len-ch);

     int bl_ch=0;
     for(int i=0;str1[i]!='\0';i++)
      {
          if(str1[i]==' '||str1[i]=='.')
            bl_ch++;
      }
     printf("Words: %d\n",bl_ch+1);

     int v_ch=0;
     for(int i=0;str1[i]!='\0';i++)
      {
          if(str1[i]=='a' || str1[i]=='A' ||
             str1[i]=='e' || str1[i]=='E' ||
             str1[i]=='i' || str1[i]=='I' ||
             str1[i]=='o' || str1[i]=='O' ||
             str1[i]=='u' || str1[i]=='U')
            v_ch++;
      }

      int dot=0;
      for(int i=0;str1[i]!='\0';i++)
      {
          if(str1[i]=='.')
            dot++;
      }

      printf("Vowels: %d\n",v_ch);

      printf("Consonants: %d\n",len-v_ch-bl_ch+dot-(len-ch)-num);

      printf("Sentences: %d",(str1[len-1]=='.')? dot:dot+1);

    return 0;
}

