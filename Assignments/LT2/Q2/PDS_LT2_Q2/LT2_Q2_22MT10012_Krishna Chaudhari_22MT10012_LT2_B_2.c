//krishna chaudhari
//22MT10012


#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int max(int *a,int n)
{

}
int main()
{
    srand(time(0));
    int n;
    int list[n];
    int p,q;
    printf("enter the size of aray : \n");
    scanf("%d",&n);
    printf("Enter the lowest number p:");
    scanf("%d",&p);

    printf("Enter the largest number q:");
    scanf("%d",&q);
    if(n<1)printf("Invalid value of n");
    else if(p>q)printf("p should be less than q");
    else{
    for(int i=0;i<n;i++)
    {
        int r=p+rand()%(q-p+1);
        list[i]=r;
    }

    printf("\n\n List = [ ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
    printf("]");
    }
    return 0;
}
