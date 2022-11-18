/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 3(b)
*/

#include <stdio.h>
struct polyone //stucture for polynomial 1
{
    int term1;
    int coeff1;
    int power1;
}poly1[10];
struct polytwo //structure for polynomial 2
{
    int term2;
    int coeff2;
    int power2;
}poly2[10];
int main()
{
    char polynomial1[100],polynomial2[100];
    printf("Enter the first polynomial : ");
    scanf("%s",polynomial1); //taking the first polynomial
    printf("Enter the second polynomial : ");
    scanf("%s",polynomial2); //taking the second polynomail
    int countx1=0,count1=0,j=0;
    for (int i=0;polynomial1[i]!='\0';i++) //In this for loop we find and store the coeffients and powers of the polynomial1
    {
        if(polynomial1[i]=='x')
        {
            if(polynomial1[i+1]=='^')
            {
                poly1[j].power1=polynomial1[i+2];
            }
            else
            {
                poly1[j].power1=polynomial1[i+1];
            }
            countx1++;
            if(polynomial1[i-1]=='-')
            {
                poly1[j].coeff1=-1;
            }
            else if (polynomial1[i-2]=='-')
            {
                poly1[j].coeff1= -polynomial1[i-1];
            }
            else
            {
                if(polynomial1[i-1]=='-' || polynomial1[i-1]=='+')
                {
                poly1[j].coeff1=polynomial1[i-2];
                }
                else
                {
                    poly1[j].coeff1=polynomial1[i-1];
                }
            }
            j++;
        }
        count1++;
    }
    if(polynomial1[count1-1]!='x' && polynomial1[count1-2]!='x' && polynomial1[count1-3]!='x') //In this for loop we find and store the coeffients and powers of the polynomial2
    {
        poly1[0].term1=countx1+1;
    }
    int countx2=0,count2=0,k=0;
    for (int i=0;polynomial2[i]!='\0';i++)
    {
        if(polynomial2[i]=='x')
        {
            if(polynomial2[i+1]=='^')
            {
                poly2[k].power2=polynomial2[i+2];
            }
            else
            {
                poly2[k].power2=polynomial2[i+1];
            }
            countx2++;
            if(polynomial2[i-1]=='-')
            {
                poly2[k].coeff2=-1;
            }
            else if (polynomial2[i-2]=='-')
            {
                poly2[k].coeff2= -polynomial2[i-1];
            }
            else
            {
                if(polynomial2[i-1]=='-' || polynomial2[i-1]=='+')
                {
                    poly2[k].coeff2=polynomial2[i-2];
                }
                else
                {
                    poly2[k].coeff2=polynomial2[i-1];
                }
            }
            k++;
        }
        count1++;
    }
    if(polynomial2[count2-1]!='x' && polynomial2[count2-2]!='x' && polynomial2[count2-3]!='x')
    {
        poly2[0].term2=countx2+1;
    }
    int multcoeff[100],multpower[100];
    int g=0;
    for(int i=0;i<=j;i++) //In this for loop we calculate the final powers and the their respective coefficients
    {
        for(int n=0;n<=k;n++)
        {
            multcoeff[g]=(poly1[i].coeff1)*(poly2[n].coeff2);
            multpower[g]=(poly1[i].coeff1)+(poly2[n].coeff2);
        }
    }
    int finalcoeff[100],finalpower[100];
    int done[100],l=0,r=0;
    for(int i=0;i<(j+1)*(k+1);i++)
    {
        int temp=0;
        for(int t=0;t<r;t++)
        {
            if(done[t]==multpower[i])
            {
                temp=1;
            }
        }
        if(temp==1)
        {
            break;
        }
        for(int n=0;n<(j+1)*(k+1);n++)
        {
            if(multpower[i]==multpower[n])
            {
                finalcoeff[l]+=multcoeff[n];
                finalpower[l]=multpower[i];
            }
            done[r]=multpower[i];
            r++;
        }
        l++;
    }
    for (int i=0;i<l;i++) //In this for loop we print the final polynomial
    {
        if(finalcoeff[i]>0)
        {
            printf("+%dx^%d",finalcoeff[i],finalpower[i]);
        }
        if(finalcoeff[i]<0)
        {
            printf("%dx^%d",finalcoeff[i],finalpower[i]);
        }
    }
    return 0;
}