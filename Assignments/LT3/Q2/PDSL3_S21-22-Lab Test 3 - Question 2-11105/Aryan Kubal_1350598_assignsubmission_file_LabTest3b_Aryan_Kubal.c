/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int n;
    int *exp;
    int *coef;
}
poly;

void print(poly *x)
{
    for (int i=0; i<x->n; i++)
    {
        if (i && x->coef[i]>=0) printf("+");
        else if (x->coef[i]<0) printf("-");
        if (x->coef[i]>1) printf("%d",x->coef[i]);
        if (x->exp[i]!=0) printf("x");
        if (x->exp[i]!=1 && x->exp[i]!=0) printf("^%d",x->exp[i]);
    }
    return;
}

poly *add(poly *x, poly *y)
{
    poly *z = (poly*)malloc(sizeof(poly));
    int k = y->n + x->n;
    int p = x->n;
    z->coef = (int*)malloc(k*sizeof(int));
    z->exp = (int*)malloc(k*sizeof(int));
    for (int i=0; i<p; i++) 
    {
        z->coef[i] = x->coef[i];
        z->exp[i] = x->exp[i];
    }
    for (int i=0; i<y->n; i++)
    {
        int check = 1;
        for (int j=0; j<p; j++)
        if (z->exp[j] = y->exp[i])
        {
            z->coef[j] += y->coef[i];
            check = 0;
            break;
        }
        if (check)
        {
            z->coef[p] = y->coef[p];
            z->exp[p] = y->exp[p];
            p++;
        }
    }
    z->n=p;
    return z;
}

poly *multiply(poly *x, poly *y)
{
    poly *z = (poly*)malloc(sizeof(poly));
    poly *temp = (poly*)malloc(sizeof(poly));
    z->n = 0;
    temp->n = y->n;
    temp->coef = (int*)malloc(temp->n*sizeof(int));
    temp->exp = (int*)malloc(temp->n*sizeof(int));
    for (int j=0; j<x->n; j++)
    {
        for (int i=0; i<y->n; i++)
        {
            temp->coef[i] = x->coef[j] * y->coef[i];
            temp->exp[i] = x->exp[j] + y->coef[i];
        }
        z = add(temp,z); 
    }
    return z;
}

poly* read(char *t)
{
    poly *res = (poly*)malloc(sizeof(poly));
    res->n = 1;
    for (int i =0; t[i]!='\0'; t++)
    if (t[i]=='x') (res->n)++;
    res->exp = (int*)malloc((res->n)*sizeof(int));
    res->coef = (int*)malloc((res->n)*sizeof(int));
    int x = 0, idx = 0, sign = 0;
    for (int i=0; t[i]!='\0'; i++)
    {
        switch (t[i])
        {
        case '0' ... '9':
            x *= 10;
            x += t[i] - '0';
            break;
        case 'x':
            if (x==0) 
            {
                if (sign) res->coef[idx] = -1;
                else res->coef[idx] = 1;
            }
            else 
            {
                if (sign) x*=-1;
                res->coef[idx] = x;
                x = 0;
            }
            break;
        case '+': 
            if (t[i-1]=='x') res->exp[idx] = 1;
            else res->exp[idx] = x;
            sign = 0;
            idx++;
            break;
        case '-':
            if (t[i-1]=='x') res->exp[idx] = 1;
            else res->exp[idx] = x;
            sign = 1;
            idx++;
            break;
        }
    }
    res->coef[idx] = x;
    res->exp[idx] = 0;
    return res;
}

int main()
{
    char a[100], b[100];
    printf("Enter the first polynomial as string: ");
    scanf("%s",a);
    poly *p = read(a);
    printf("Enter the second polynomial as string: ");
    scanf("%s",b);
    poly *q = read(b);
    poly *product = multiply(p,q);
    sort(product);
    printf("\nThe resultant polnomial after multiplication = ");
    print(product);
    printf("\n\n");
}
