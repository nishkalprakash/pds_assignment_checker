#include<stdio.h>

/*name-Chetna
  dep-CSE
  Roll no.-21CS10019
  package-codeblocks*/


 int n,k,m;

 int myHostelChangingTrips(int a, int b, int c, int d, int count)
 {
    if(a>6 || b>6 || c>6 ||d>6)
    {
        return count;
    }
    if(a+ b + c + d == k)
    {
        printf("(");
        if(a!=0)
        {
            printf("%d,",a);
        }
        if(b!=0)
        {
            printf("%d,",b);
        }
        if(c!=0)
        {
            printf("%d,",c);
        }
        if(d!=0)
        {
            printf("%d",d);
        }
        printf(")");
        return count+1;
    }
    return myHostelChangingTrips(a + 1,b,c,d, count) + myHostelChangingTrips(a, b + 1, c,d, count) + myHostelChangingTrips(a,b,c + 1, d, count) + myHostelChangingTrips(a, b, c, d+ 1, count)/*+  myHostelChangingTrips(a,b,c,d,count+n)*/;
}

int main()
{

    printf("Enter value of n : ");
    scanf("%d",&n);

    printf("Enter value of k : ");
    scanf("%d",&k);

    printf("Enter value of m: ");
    scanf("%d",&m);

    int arr[n];

    int r=myHostelChangingTrips(0,0,0,0,0);

    printf("\nTrips : ",r);

    return 0;
}
