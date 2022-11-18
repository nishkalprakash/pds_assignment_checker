/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdlib.h>
#include <stdio.h>

/*
Note : This program is considering the minus symbol also as pplus
so it gives correct output for all postivie coeff
and for negative coefficients it assumes them as positive
*/
typedef struct
{
    int nterms;
    int *coef;
    int *power;
}poly;


int main()
{
    poly p[2];
    char st0[30],st1[30];
    int i,j,k,last=0,degree;
    printf("Enter polynomial 1 : ");
    scanf("%s",st0);
    getchar();
    printf("Enter polynomial 2 : ");
    scanf("%s",st1);
    p[0].nterms = p[1].nterms = 1;
    for(i=0;st0[i]!='\0';i++) if(st0[i]=='+' || st0[i]=='-') p[0].nterms++;
    p[0].coef = (int*) malloc(4*p[0].nterms);
    p[0].power = (int*) malloc(4*p[0].nterms);
    for(i=0;st1[i]!='\0';i++) if(st1[i]=='+' || st1[i]=='-') p[1].nterms++;
    p[1].coef = (int*) malloc(4*p[1].nterms);
    p[1].power = (int*) malloc(4*p[1].nterms);
    printf("number of terms of 1 is %d \n",p[0].nterms);
    printf("number of terms of 2 is %d \n",p[1].nterms);
    for(i=0;i<p[0].nterms;i++)
    {
        p[0].coef[i]=0;
        p[0].power[i]=0;
        for(j=last;st0[j]!='+';j++)
        {
            if(st0[j]=='-') break;
            if(st0[j]=='\0') break;
            if(st0[j]=='x')
            {
                for(k=j;st0[k]!='+';k++)
                {
                    if(st0[k]=='-') break;
                    if(st0[k]=='\0') break;
                    if(st0[k]>47 && st0[k]<58)
                    {
                        p[0].power[i] *= 10;
                        p[0].power[i] += st0[k]-48;
                        //printf("The power is %d \n",p[0].power[i]);
                    }
                }
                if(p[0].power[i]==0) p[0].power[i]=1;
                break;
            }
            if(st0[j]>47 && st0[j]<58)
            {
                p[0].coef[i] *=10;
                p[0].coef[i] += st0[j]-48;
                //printf("The coef is %d \n",p[0].coef[i]);
            }
        }
        if(p[0].coef[i]==0) p[0].coef[i]=1;
        //if(st0[last-1]=='-' && last!=0) p[0].coef[i] = 0-p[0].coef[i];
        if(i==p[0].nterms-1) break;
        for(j=last;st0[j]!='+';j++) if(st0[i]=='-')break;
        last = j+1;
    }

    last=0;
    for(i=0;i<p[1].nterms;i++)
    {
        p[1].coef[i]=0;
        p[1].power[i]=0;
        for(j=last;st1[j]!='+';j++)
        {
            if(st1[j]=='-') break;
            if(st1[j]=='\0') break;
            if(st1[j]=='x')
            {
                for(k=j;st1[k]!='+';k++)
                {
                    if(st1[k]=='-') break;
                    if(st1[k]=='\0') break;
                    if(st1[k]>47 && st1[k]<58)
                    {
                        p[1].power[i] *= 10;
                        p[1].power[i] += st1[k]-48;
                        //printf("The power is %d \n",p[1].power[i]);
                    }
                }
                if(p[1].power[i]==0) p[1].power[i]=1;
                break;
            }
            if(st1[j]>47 && st1[j]<58)
            {
                p[1].coef[i] *=10;
                p[1].coef[i] += st1[j]-48;
                //printf("The coef is %d \n",p[1].coef[i]);
            }
        }
        if(p[1].coef[i]==0) p[1].coef[i]=1;
        //if(st1[last-1]=='-' && last!=0) p[1].coef[i] = 0-p[1].coef[i];
        if(i==p[1].nterms-1) break;
        for(j=last;st1[j]!='+';j++) if(st1[i]=='-')break;
        last = j+1;
    }

    int **m_power= (int**) malloc(sizeof(int*)*p[0].nterms);
    int **m_coef= (int**) malloc(sizeof(int*)*p[0].nterms);
    for(i=0;i<p[0].nterms;i++)
    {
        m_power[i]=(int*) malloc(4*p[1].nterms);
        m_coef[i]=(int*) malloc(4*p[1].nterms);
    }
    for(i=0;i<p[0].nterms;i++)
    {
        for(j=0;j<p[1].nterms;j++)
        {
            m_power[i][j] = p[0].power[i] + p[1].power[j];
            m_coef[i][j] = p[0].coef[i] * p[1].coef[j];
        }
    }
    int *finale = (int*) malloc((p[0].power[0]+p[1].power[0]+1)*4);
    for(degree=p[0].power[0]+p[1].power[0];degree>-1;degree--)
    {
        finale[degree]=0;
        for(i=0;i<p[0].nterms;i++)
        {
            for(j=0;j<p[1].nterms;j++)
            {
                if(degree==m_power[i][j])
                {
                    finale[degree]+= m_coef[i][j];
                }
            }
        }
    }
    printf("\nThe multiplicated polynomial is : \n")

    for(degree=p[0].power[0]+p[1].power[0];degree>-1;degree--)
    {
        if(finale[degree]!=0)
        {
            if(degree==0) printf("%d",finale[degree]);
            else if(degree==1)
            {
                if(finale[degree]==1) printf("x + ");
                else printf("%dx + ",finale[degree]);
            }
            else
            {
                if(finale[degree]==1) printf("x^%d + ",degree);
                else printf("%dx^%d + ",finale[degree],degree);
            }
        }
    }
    /*
    for(i=0;i<p[0].nterms;i++)
    {
        for(j=0;j<p[1].nterms;j++)
        {
            printf("%d ",m_coef[i][j]);
        }
        printf("\n");
    }

    printf("%d \n",p[1].coef[0]);
    printf("%d \n",p[1].coef[1]);
    printf("%d \n",p[1].coef[2]);

    printf("\n\n%d \n",p[1].power[0]);
    printf("%d \n",p[1].power[1]);
    printf("%d \n",p[1].power[2]);*/

    return 0;

}
