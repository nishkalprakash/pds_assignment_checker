# include <stdio.h>

// Function to swap two given integers
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
// Recursive function to reverse a given array
void reverse_array(int arr[],int i,int n)
{
    swap(&arr[i],&arr[n-1-i]);
    i++;
    if(i>n/2) return;
    reverse_array(arr,i,n);

}
// Function to find string length
int length(char str[])
{
    int l=0;
    for(l=0; str[l]!='\0'; l++);
    return l-1;
}

// Function to swap two given characters
void character_swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
// Recursive function to reverse a given string
void reverse_string(char *str, int k)
{
    static int i = 0;
    // if the end of the string is reached
    if (*(str + k) == '\0')
    {
        return;
    }
    reverse(str, k + 1);
    if (i <= k)
    {
        character_swap(&str[i++], &str[k]);
    }
}

//Function to compare two strings.
void compare(char a[], char b[])
{
    int i,j,k;
    for (i = 0; a[i] != '\0'; i++);
    for (j = 0; b[j] != '\0'; j++);
    if (i == j)
    {
        for (k = 0; k < i; k++)
        {
            if (a[k] != b[k])
                break;
        }
    }
    if (k==i) return 1;

    else return 0;

}

//Function to copy one string to another string.
void copy(char str1[], char str2[], int index)
{
    str2[index] = str1[index];
    if (str1[index] == '\0')
        return;
    copy(str1, str2, index + 1);


    int main()
    {
        int r;
        printf("Which no solution you want: ");
        scanf("%d",&r);

        if(r==1) // when user will give the value of r as 1 the code for first part will run.

        {
            int arr[100];
            int n,i=0;
            printf("Enter the size: ");
            scanf("%d",&n);
            for(int j=0; j<n; j++)
            {
                scanf("%d",&arr[j]);
            }
            printf("The original array:");
            for(int j=0; j<n; j++)
            {
                printf("%d\t",arr[j]);
            }
            printf("\n");

            reverse_array(arr,i,n);

            printf("The reverse array:");
            for(int j=0; j<n; j++)
            {
                printf("%d\t",arr[j]);
            }
        }

        if(r==2) // when user will give the value of r as 2 the code for second part will run.
        {



            char str1[100],str2[100];
            fgets(str1,100,stdin);
            fgets(str2,100,stdin);
            length(str1);
            length(str2);
            printf("%d,%d\n",length(str1),length(str2));
            int count=0;
            if(length(str1)==length(str2))
            {
                for(int j=0; str1[j]!='\0'; j++)
                {

                    for(int k=0; str2[k]!='\0'; k++)
                    {
                        if (str1[j]==str2[k]) count++;
                    }
                }
            }

            (count>=length(str1))?printf("These two strings are anagrams"):printf("These are not anagrams");
        }
        if(r==3) // when user will give the value of r as 3 the code for third part will run.
        {


            char str[100],original_string[100];
            fgets(str,100,stdin);
            reverse_string(str,0);
            copy(str,original_string,0);
            (compare(str,original string)==1 )? printf("The string is palindrome.\n") :printf("The string is not palindrome.");

        }


        return 0;

    }
