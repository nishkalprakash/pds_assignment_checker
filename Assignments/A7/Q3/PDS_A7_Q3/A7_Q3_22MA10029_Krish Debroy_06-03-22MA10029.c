# include <stdio.h>
void rev(int a[], int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

void anagram()
{
        char a[100],b[100];
        char s;
        int i=0;
        printf("Enter the first string.\n");
        scanf("\n%c",&s);
        if (s=='\n')
        {
            printf("Invalid Input. Try again .");
            scanf("%c",&s);
        }
        int count_a=0;
        while(s!='\n' )
        {
            a[i]=s;
            i++;
            count_a++;
            scanf("%c",&s);
        }
        a[i]='\0';


        printf("Enter the second string.\n");
        scanf("%c",&s);
        if (s=='\n')
        {
            printf("Invalid Input. Try again .");
            scanf("%c",&s);
        }
        i=0;
        int count_b=0;
        while(s!='\n')
        {
            b[i]=s;
            i++;
            count_b++;
            scanf("%c",&s);
        }
        b[i]='\0';


        if (count_a!=count_b)
        {
            printf("%s and %s are not anagrams.",a,b);
            return ;
        }
        else
        {
            for(int k=0;k<count_a;k++)
            {
                int flag=0;
                for(int j=0;j<count_b;j++)
                {
                    if (a[k]==b[j])
                    {
                        flag=1;
                    }
                }
                if(flag!=1)
                {
                    printf("%s and %s are not anagrams.",a,b);
                    return ;
                }
            }
        }
        printf("%s and %s are anagrams.",a,b);
        return ;
}


int palindrome(char a[20])
{
    int count=0,i=0;
    while (1)
    {
        if (a[i]!='\0')
        {
            count++;
            i++;
        }
        else
        {
            break;
        }
    }

    for(int k=0;k<count/2;k++)
    {
        if(a[i]!=a[count-1-i])
        {
            printf("%s is ",a);
            return 0;
        }
    }
    printf("%s is ",a);
    return 1;
}

int main()
{
    int opt;
    printf("Select you option : ");
    scanf("%d",&opt);
    printf("\n");
    if(opt==1)
    {
        int n,a[100];
        printf("Enter the number of elements : ");
        scanf("%d",&n);
        printf("\nEnter the elements of the array : \n");
        int c;
        for(int l=0;l<n;l++)
        {
            scanf("%d",&c);
            a[l]=c;
        }
        rev(a,n);

        printf("New Array : ");
        for(int l=0;l<n;l++)
        {
            printf("%d ",a[l]);
        }



    }
    else if (opt==2)
    {
        anagram();
    }
    else if (opt==3)
    {
        char a[20];
        int ans;
        printf("\nEnter the elements of the array : \n");
        scanf("%s",&a);
        ans=palindrome(a);
        if(ans==0)
        {
            printf("not a palindrome.");
        }
        else if (ans ==1)
        {
            printf("a palindrome.");
        }
    }
}
