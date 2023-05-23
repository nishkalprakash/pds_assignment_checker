#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int *p,int *q)
{
    int temp =*p;
    *p=*q;
    *q=temp;
}
void reverse(int *a,int start,int end)
{
    if (start>=end)
    {
        return;
    }
    swap(&a[start],&a[end]);
    reverse(a,start+1,end-1);
}



int size(int* x )
{
    int size=0;
    while(*x!='\0')
    {
        size++;
        x++;
    }
    return size;
}


int pallindrome(char x[],int len)
{
    int flag=0;
    for (int i = 0; i < len; i++)
    {
        if (x[i]!=x[len-i-1]) flag = 1;
    }

    if (flag == 0) return 1;
    else return 0;
}

int anagram(int* x,int* y)
{
    int size1=size(x),size2=size(y),val1=0,val2=0;


}


int main()
{
    int n;
    scanf("%d ",&n);
    if (n==2)
    {
        char str1[50],str2[50];
        scanf("%[^\n]s",str1);
        scanf("%[^\n]s",str2);


        anagram(&str1,&str2);
    }
    else if (n==3)
    {
        char str3[50];
        scanf("%s",str3);
        int len = 0; while (str3[len]) len++;
        int x=pallindrome(str3,len);

        if (x==0)
        {
            printf("%s is not a pallindrome",str3);
        }
        if (x==1)
        {
            printf("%s is a pallindrome",str3);
        }

    }
    else if (n==1)
    {
        int arrlen;
        scanf("%d",&arrlen);
        int arr[arrlen];
        for (int i=0;i<arrlen;i++)
        {
            scanf("%d",&arr[i]);
        }
        reverse (arr,0,arrlen-1);
        for (int i=0;i<arrlen;i++)
        {
            printf("%d",arr[i]);
        }
    }


    return 0;
}
