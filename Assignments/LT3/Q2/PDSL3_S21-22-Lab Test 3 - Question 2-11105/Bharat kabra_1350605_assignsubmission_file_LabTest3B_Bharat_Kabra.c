/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 3
*/
#include<stdio.h>
#include<conio.h>
struct equation{
    int degree;
    int coeff;
};              //End of structure definition

void main(){
    struct equation equation1[10],equation2[10],product[100];
    int nTerms1,nTerms2,count=-1;
    int i,j;
    printf("\nEnter Number Of Terms Of 1st polynomial: ");
    scanf("%d",&nTerms1);
    for(i=0;i< nTerms1;i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d",&equation1[i].degree);
        printf("\nEnter Coefficient: ");
        scanf("%d",&equation1[i].coeff);
    }//End of i for loop
    printf("\nEnter Number Of Terms Of 2nd polynomial: ");
    scanf("%d",&nTerms2);
    for(i=0;i< nTerms2;i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d",&equation2[i].degree);
        printf("\nEnter Coefficient: ");
        scanf("%d",&equation2[i].coeff);
    }//End of i for loop
    for(i=0;i< nTerms1;i++)
    {
        for (j=0;j< nTerms2;j++)
        {
        product[++count].degree=equation1[i].degree+equation2[j].degree;
        product[count].coeff=equation1[i].coeff*equation2[j].coeff;
        }//End of j for loop
    }//End of i for loop
    printf("\nThe Product Of Two polynomials Is: \n");
        for(i=0;i<=count-1;i++)
    {
        if(product[i].degree==product[i+1].degree){
            product[i].coeff+=product[i+1].coeff;

            product[i+1].degree=-1;
        }
    }
        for(i=0;i<=count-2;i++)
    {
        if(product[i].degree==product[i+2].degree){
            product[i].coeff+=product[i+2].coeff;

            product[i+2].degree=-1;
        }
    }
    for(i=0;i<=count;i++)
    {
        if(product[i].degree==-1){
            continue;
        }

        if(product[i].degree==0){
            printf("%d ",product[i].coeff);
        }else if(product[i].degree==1){
            printf("%dx ",product[i].coeff);
        }else{
            printf("%dx^%d ",product[i].coeff,product[i].degree);
        }
        if(i!=count)
            printf("+ ");
    }//End of i for loop
    getch();
}//End of main()