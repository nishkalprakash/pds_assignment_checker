/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-3
description-   */

#include<stdio.h>
#include<math.h>

void rev_array(int a[], int input)
{
    int term;
    for(int i=0; i<(input/2); i++)
    {

        term=a[i];
        a[i]=a[input-1-i];
        a[input-1-i]=term;

    }
    printf("ARRAY AFTER REVERSE IS\n");

    for(int i=0; i<input; i++)
    {
        printf("%d ",a[i]);
    }


}



void anagram(char s1[], char s2[])
{
    int term;
    int length1=0,length2=0;

    for(int i=0; s1[i]!='\0'; i++)
    {
        length1++;
    }
    for(int i=0; s2[i]!='\0'; i++)
    {
        length2++;
    }
    /*printf("%d\n ",length1);
    printf("%d\n ",length2);*/


    if(length1!=length2)
    {
        printf("Given string are not anagram\n");
        return;
    }

    for(int i=0; i<length1; i++)
    {
        for(int j=0; j<length2; j++)
        {
            if(s1[i]==s2[j])
            {
               term++;
                break;
            }



        }
    }
    printf("%d ",term);
    if(term==length1){
        printf("These are anagram\n");
    }


}




int  paladrome(char a2[])
{
    int length=0;
    int j=0;
    for(int i=0; a2[i]!='\0'; i++)
    {
        length++;
    }

    for(j; j<length/2; j++)
    {
        if(a2[j]!=a2[length-1-j])
        {
            return 0;
        }
    }
    if(j==length/2)
    {
        return 1;
    }







}




int main()
{


    int n,input,c;
    int a[100];
    int a2[100];


    char s1[100],s2[100];
    printf("ENter the number from 1 to 3 \n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Enter the limit of your array\n");
        scanf("%d",&input);
        printf("ENter the element of array\n");

        for(int i=0; i<input; i++)
        {

            scanf("%d",&a[i]);
        }
        printf("THE array you entered is \n");

        for(int i=0; i<input; i++ )
        {
            printf("%d ",a[i]);
        }
        printf("\n");

        rev_array(a,input);


    }


    if(n==2)
    {

        printf("Enter the 1st string\n");
        scanf("%s",s1);


        printf("Enter the 2nd string\n");
        scanf("%s",s2);


        anagram(s1,s2);
    }


    if(n==3)
    {



        printf("ENTER THE string\n");
        scanf("%s",a2);


        c= paladrome(a2);


        if(c==1)
        {
            printf("the string %s is paladrime\n",a2);
        }
        if(c==0)
        {
            printf("the string %s is  not paladrime\n",a2);
        }


    }









    return 0;
}
