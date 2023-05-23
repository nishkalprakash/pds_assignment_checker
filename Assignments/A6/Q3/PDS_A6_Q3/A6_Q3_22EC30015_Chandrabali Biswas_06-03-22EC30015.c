
/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 3
Description:Strings and arrays
*/
#include <stdio.h>  //header file
void reverse(int* a,int n)
{
    int t;
    for(int i=0;i<n/2;i++)  //finds the reverse of the array and stores it in the original array
    {
      t=a[i];
      a[i]=a[n-1-i];  //swaps ith and (n-1-i)th element
      a[n-1-i]=t;
    }
    return;
}
int anagram(char* str1,char* str2)
{
    int length1,length2,c=0;
    for(length1=0;str1[length1]!='\0';length1++); //stores length of string 1
    for(length2=0;str2[length2]!='\0';length2++); //stores length of string 2
    if(length1!=length2)  //0 is returned if lengths are unequal
        return 0;
    for(int i=0;i<length1;i++)
    {
        c=0;
        for(int j=0;j,length1;j++)
        {
            if(str1[i]==str2[j])
                c++;
        }
        if(c==0) //c will be 0 when the ith element of str1 is not present in str2
            return 0;
    }
    return 1;
}
int palindrome(char* str)
{
    int length=0,k=0;
    char rev[50];
    for(length=0;str[length]!='\0';length++); //stores length of string
    for(int i=length-1;i>=0;i--)
    {
        rev[k]=str[i];  //string is reversed and stored in the array rev
        k++;
    }
    for(int i=0;i<length;i++)
    {
        if(str[i]!=rev[i]) //in case of unequal characters for the original array and reversed array
            return 0;
    }
    return 1;


}

int main()
{
    int func,n,c,a[100];char str1[100],str2[100],str[20];
    printf("Enter which function number to run(1/2/3):");
    scanf("%d",&func);
    if(func==1)
    {
        printf("Enter array size:");
        scanf("%d",&n);   //takes input from user
        printf("Enter array elements:");
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);  //takes input from user
        reverse(a,n);     //calls reverse function
        printf("Reversed array:\n"); //prints the reversed array
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    else if(func==2)
    {
        printf("Enter string 1 and 2:");
        scanf("%s%s",str1,str2) ; //takes string inputs from user
        c=anagram(str1,str2);  //calls function anagram
        if(c==0)         //returns 0 if not an anagram
            printf("%s and %s are not anagrams",str1,str2);
        else             //returns 1 if an anagram
            printf("%s and %s are anagrams",str1,str2);
    }
    else
    {
        printf("Enter string:");
        gets(str);   //takes input from user
        if(palindrome(str)==0) //calls function palindrome
            printf("Not a palindrome");
        else
            printf("Palindrome");
    }
}
