/*
sec 2
name-sandesh patil
roll no-22MF1034
QUE NO:3 */



#include<stdio.h>
#include<string.h>
int legth(char c[34]);
int main()
 {
     int n,temp,s,i,z,l,t=' ';
     int a[34];
     char str1[100];
     char str2[100];
     char b[100];

     printf("enter the number from 1 to 3 \n");
     scanf("%d",&s);
     if(s==1)
      {printf("enter no of elements in array \n");
       scanf("%d",&n);
       printf("enter array \n");
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       z=n-1;
        for(i=0;i<z;i++,z--)
            {
               temp=a[i];
               a[i]=a[z];
               a[z]=temp;
            }

        printf("the reverse array is \n");

        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
      }
     else if(s==3)
     {

        printf("enter the string \n");
        scanf("%s",b);
        for(l=0;b[l]!='\0';l++);
           for(i=0;i<l;i++)
              {
               if(b[i]!=b[l-i-1])
                 {
                   t=b[i];
                   b[i]=b[l-i-1];
                   b[l-i-1]=t;
                }
             }
                (t==' ')? printf("The reverse string is %s i.e. The string is palindrome\n",b):
                printf("The string is not palindrome. The reverse string is %s \n",b);
         }


     else if(s==2)
     {
         printf("enter the string 1 \n");
         gets(str1);
         printf("enter string 2 \n");
         gets(str2);
         if(length(str1)==length(str2))
         {
             printf("yes \n");
         }



     }



     return 0;
 }

int length( char c[34])
{
    int m;
    gets(c);
    for(m=0;c[m]!='\0';m++);
    printf("The length of the string is %d",m);



}





