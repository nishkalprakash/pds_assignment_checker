
#include<stdio.h>
int main()
{
    int n, m;
    printf(" enter the number of given names in array A");
    scanf("%d" ,&n);
    char **A;
    A = (char **) malloc (n *sizeof(char));
    char * A1,A2,A3;
    char j;
    printf("enter names in array A");

    for(int i=0; i<n ;i++)
    {
        int k=0;
        int flag=0;
        do
        {
            scanf("%c" ,&j);
            A1[k]=j;
            //flag==;
            if((j== '')||(j=='\n'))
        }

        while(j!+'\n')
            A1[k]=j;
    }

}
