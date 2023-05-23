#include<stdio.h>

int main()
{


    int n;
    char *x;
    printf("Enter limit of the names: ");
    scanf("%d",&n);

    x=(char*)malloc(n*sizeof(char));
    printf("Enter names : ");
    scanf(" ");
    gets(x);
    printf("Inputted names is: %s\n",x);
    return 0;
}
















