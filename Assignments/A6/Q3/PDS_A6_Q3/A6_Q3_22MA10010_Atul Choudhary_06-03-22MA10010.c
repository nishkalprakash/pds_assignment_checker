
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{

    if(*str)
    {
        reverse(str+1);
        printf("%c", *str);
    }
}



/*void rev(int str[], int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
}*/

int main()
{
    char string1[20];

    int i,j, k, length;
    int flag =0;
    printf("Enter a string:");
    scanf("%s", string1);
   reverse(string1);
   printf("\n\n");

    length = strlen(string1);


    for(i=0; i<length; i++)
    {
        if(string1[i] != string1[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%s is not a palindrome\n", string1);
    }

    else{
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}
