#include<stdio.h>

void main()
{
    char a[100],temp='';

    int i[100],l;
    printf("Enter the array");
    gets(a);
    for(l=0;a[l]!='\0';l++);
    for(i=0;i<l/2;i++);
    {
        if(a[i]!=a[l-i-1])
        {
            temp=a[i];
            a[i]=a[l-i-1];
            a[l-i-1]=temp;

        }
    }
    (temp='')?printf("The reverse array")
}
