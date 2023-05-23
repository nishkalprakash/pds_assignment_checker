#include<stdio.h>
int palindrome(char str[20],int x)
{







for (int i = 0; i < x; i++) {
if (str[i] != str[x-1-i]) return 0;
}

return 1;
}


int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);

    }
    printf("the original array is \n");
     for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);

    }
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int c;
        c=arr[s];
        arr[s]=arr[e];
        arr[e]=c;
        s++;
        e--;

    }
     printf("the reverse array is \n");
      for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);

    }
    //for length of the string to be 6 enter the value of x to be 12

    char str[20];

       scanf("%s",str);


    int l;

    for(int i=0;str[i]!='\0';i++)
    {
        l++;

    }
    int a=0;
    int b=l-1;
     while(a<=b)
    {
        int c;
        c=str[a];
        str[a]=str[b];
        str[b]=c;
        a++;
        b--;

    }
    printf("the reverse of string is \n");
     for(int i=0;i<l;i++)
    {
       printf("%c ",str[i]);

    }
    if (palindrome(str,l)) {
            printf ("%s is a Palindrome\n", str);
}
else {
        printf ("%s is NOT a Palindrome\n", str);
}
char str1[20],str2[20];
  int s1,s2,flag;
  scanf("%s",str1);
  scanf("%s",str2);

    for(int i=0;str[i]!='\0';i++)
    {
        s1++;

    }


    for(int i=0;str[i]!='\0';i++)
    {
        s2++;

    }
    if(s1==s2)
    {
        for(int i=0;str1[i]!='\0';i++)
        {
            flag=0;
            for(int j=0;str2[j]!='\0';j++)
            {
                if(str1[i]==str2[j])
                {
                    flag=1;
                    break;
                }
                else{
                    continue;
                }
            }
            if(flag==1)
            {
                continue;
            }
            else{

                break;
            }

        }
        if(flag==1)
        {

            printf(" %s and %s are anagrams",str1,str2);
        }
        else{
            printf(" %s and %s are not anagrams",str1,str2);
        }

    }




}
