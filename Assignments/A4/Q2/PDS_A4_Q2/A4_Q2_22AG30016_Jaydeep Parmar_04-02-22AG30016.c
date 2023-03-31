/*NAME -JAYDEEP
ROLL NO - 22AG30016
SECTION 2
ASSIGNMENT 4
DESCRIPTION -RESULT WAALA QUESTION*/









#include<stdio.h>
int main()
{
    int a,c,m,e,N,q=1;
    float b,d,n,f;
    printf("enter number of students: ");
    scanf("%d",&N);

    while(q<=N)

    {
        q++;





        printf("enter marks of attendance: ");
        scanf("%d",&a);
        if((a<0)||(a>40))
        {
            printf("wrong input\n");
        }
        printf("enter marks of class test: ");
        scanf("%d",&c);
        if((c<0)||(c>20))
        {
            printf("wrong input\n");
        }
        printf("enter marks of mid sems: ");
        scanf("%d",&m);
        if ((m<0)||(m>60))
        {
            printf("wrong input\n");
        }
        printf("enter marks of end sems: ");
        scanf("%d",&e);
        if((e<0)||(e>100))
        {
            printf("wrong input\n");
        }
        b=a/4;
        n=m/2;
        f=(2*e)/5;
        d=b+n+f+c;

        if(d>=90)
            printf("grade : EX\n");
        else if(d>=80)
            printf("grade : A\n");
        else if(d>=70)
            printf("grade : B\n");
        else if(d>=60)
            printf("grade : C\n");
        else if(d>=50)
            printf("grade : D\n");
        else if(d>=35)
            printf("grade : P\n");
        else
            printf("grade : F\n");



    }




    return 0;
}
