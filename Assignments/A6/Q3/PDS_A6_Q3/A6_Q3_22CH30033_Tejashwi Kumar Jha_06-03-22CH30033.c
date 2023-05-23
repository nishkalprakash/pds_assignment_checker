#include<stdio.h>
void a()
{
    int n;
    printf("no. of elements in an array : \n");
    scanf("%d",&n);

    int arr[n];
    for (int j = 0;j < n ;j++)
    {
      scanf("%d", &arr[j]);
    }
    if (n%2 == 0)
    {
    int g = 0;
    int h = n-1;
    while( g < n/2 )
    {
        int temp1 = arr[g];
        arr[g] = arr[h];
        arr[h] = temp1;
        g++ ;
        h--;
    }
    }

    else
    {


        int j = 0;
        int k = n-1;
        while(j <= n/2 )
        {
            int temp2 = arr[j];
            arr[j] = arr[k];
            arr[k] = temp2;
            j++;
            k--;
        }
    }

    for(int l =0;l<n;l++)
    {
           printf("%d ",arr[l]);
    }

}

void b()
{
    char c1[1000000];
    printf("Enter your first string :\n");
    scanf(" %[^\n]s",c1);

    char c2[1000000];
    printf("Enter your second string :\n");
    scanf(" %[^\n]s",c2);

    int size1 = 0;
    for (int w = 0 ; c1[w] != '\0'; w++)
    {
        size1++;
    }



    int size2 = 0;
    for (int y = 0 ; c2[y] != '\0'; y++)
    {
        size2++;
    }


    if ( size1 == size2)
    {
        printf("%s and %s are anagrams.",c1,c2);
    }
    else
    {
        printf("%s and %s are not anagrams.",c1,c2);
    }

}


void c()
{
    char c1[20];
    int w;
    printf("Enter your first string :\n");
    scanf("%[^\n]s",c1);


    int size1 = 0;

    for (w = 0 ; c1[w] != '\0'; w++)
    {
        size1++;
        printf("%c",c1[w]);

    }

    int n = w+1;
    printf("n = %d",n);

    if (n%2 == 0)
    {
    int g = 0;
    int h = n-1;
    while( g < n/2 )
    {
        if (c1[g] == c1[h])
            {
                g++;
                h--;
            }
    }
    }

    else if (n%2 != 0)
    {
    int g = 0;
    int h = n-1;
    while( g < n/2 )
    {
        if (c1[g] == c1[h])
            {
                g++;
                h--;
            }
    }
    }
}

int main()
{
    int n1;
    printf("Enter your test case no. :\n");
    scanf("%d",&n1);

    if( n1 == 1 )a();
    if( n1 == 2 )b();
    if( n1 == 3 )c();




}
