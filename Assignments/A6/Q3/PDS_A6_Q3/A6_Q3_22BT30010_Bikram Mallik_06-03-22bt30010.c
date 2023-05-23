#include<stdio.h>

/*int main()
{
    int x;
    printf("enter a value: ");
    scanf("%d",&x);
    if(x==1)
    {   int y;
        printf("no of elements: ");
        scanf("%d",&y);
        int A[y],i;


        for(i=0;i<0;i++)
        {   printf("put A[%d]",i);
            scanf("%d",A[i]);
        }
        for(i=0;)
    }
}*/
int main()
{
int i, flag, len = 0;
char name[25];
scanf ("%s", name);
len = 0; while (name[len]) len++;
for (i = 0; i < len; i++)
    flag=0;
    for(i=0;i<len;i++)
{
if (name[i] != name[len-1-i]) flag = 1;
}
if (flag == 0) printf ("%s is a Palindrome\n", name);
else printf ("%s is NOT a Palindrome\n", name);
return 0;
}
