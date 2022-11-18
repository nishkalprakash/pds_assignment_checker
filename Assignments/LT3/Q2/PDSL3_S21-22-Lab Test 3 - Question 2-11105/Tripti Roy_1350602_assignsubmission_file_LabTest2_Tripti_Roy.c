# include<stdio.h>

//defining the structure
struct polynomial
{

    int coeff;
    int exponent;
};

int main()
{
    struct polynomial polynomial1[120,polynomial2[20],prod[100];
    int count=-1, noOfTerms1,noOfTerms2;
    int i,j;

    printf("\nEnter Number Of Terms Of 1st Polynomial: ");
    scanf("%d",&noOfTerms1);
    for(i=0; i< noOfTerms1; i++)
    {

        printf("\nEnter Degree: ");
        scanf("%d",&polynomial1[i].exponent);
        printf("\nEnter Coefficient: ");
        scanf("%d",&polynomial1[i].coeff);
    }
    printf("\nEnter Number Of Terms Of 2nd Polynomial: ");
    scanf("%d",&noOfTerms2);
    for(i=0; i< noOfTerms2; i++)
    {

        printf("\nEnter Degree: ");
        scanf("%d",&polynomial2[i].exponent);
        printf("\nEnter Coefficient: ");
        scanf("%d",&polynomial2[i].coeff);
    }
    for(i=0; i< noOfTerms1; i++)
    {
        for (j=0; j< noOfTerms2; j++)
        {
            prod[++count].exponent=polynomial1[i].exponent+polynomial2[j].exponent;
            prod[count].coeff=polynomial1[i].coeff*polynomial2[j].coeff;
        }
    }
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(i=0; i<=count; i++)
    {
        if(prod[i].exponent==0)
            printf("%d ",prod[i].coeff);
        else if(prod[i].exponent==1)
            printf("%dx ",prod[i].coeff);
        else
        {
            printf("%dx^%d ",prod[i].coeff,prod[i].exponent);
        }
        if(i!=count)
            printf("+ ");
    }

    return 0;
}
