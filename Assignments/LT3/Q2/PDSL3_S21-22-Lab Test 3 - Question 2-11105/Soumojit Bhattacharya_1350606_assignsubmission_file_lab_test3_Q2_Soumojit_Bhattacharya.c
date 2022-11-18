/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>

int sizef=0;//store size of final structure
struct pol
{
    int pow;
    int coeff;
};

void print(struct pol* final)    //convert struct to string format and print
{
    for(int i=0;i<sizef;i++)
    {
        if(final[i].pow>1)
        printf("%dx^%d",final[i].coeff,final[i].pow);
        else
        if(final[i].pow==1)
        printf("%dx",final[i].coeff);
        else
        printf("%d",final[i].coeff);
        if(i+1!=sizef)
        {
            if(final[i+1].coeff>=0)
            printf("+");
        }
    }
}

int convert(char* s,struct pol* poly)//convert string to struct
{
    int i=0,coeff=1,size=0,pow=0;
    
    while(s[i]!='\0')
    {
        if(s[i]>47&&s[i]<58)//check if char is a number
        {
            coeff=(int)(s[i]-48);
            if(i!=0)
            {
                if(s[i-1]=='-')//check if coefficient is negative
                coeff=-coeff;
            }
            if(s[i+1]!='x')//add struct with pow 0
            {
                if(size>0)
                poly=(struct pol*)realloc(poly,size+1*sizeof(struct pol));
                else
                {
                    
                poly=(struct pol*)malloc(sizeof(struct pol));
                }
                poly[size].pow=0;
                poly[size].coeff=coeff;
                size++;
            }
        }
        if(s[i]=='x')
        {
            if(i!=0)//if coeff is 1 or -1 then no number before x(so the next three ifs take care of tyhat)
            {
                if(s[i-1]=='-')
                coeff=-1;
            }
            if(i!=0)
            {
                if(s[i-1]=='+')
                coeff=1;
            }
            if(i==0)
            coeff=1;
            i++;
            if(s[i]=='^')//get pow
            {
                i++;
                pow=(int)(s[i]-48);
            }
            else
            {
                i++;
                pow=1;
            }
            if(size>0)
            poly=(struct pol*)realloc(poly,(size+1)*sizeof(struct pol));
            else
            {
                
            poly=(struct pol*)malloc(sizeof(struct pol));
            }
            poly[size].pow=pow;
            poly[size].coeff=coeff;
            size++;
        }
        i++;
    }
    return size;
}

struct pol* multiply(struct pol* p1,struct pol* p2,int size1,int size2)//make new struct
{
    sizef=0;
    struct pol* final;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            int npow=p1[i].pow+p2[j].pow;
            for(int k=0;k<sizef;k++)
            {
                if(final[k].pow==npow)
                {
                    final[k].coeff+=p1[i].coeff*p2[j].coeff;
                    break;
                }
            }
                if(sizef>0)
                final=(struct pol*)realloc(final,(sizef+1)*sizeof(struct pol));
                else
                final=(struct pol*)malloc(sizeof(struct pol));
                final[sizef].pow=npow;
                final[sizef].coeff=p1[i].coeff*p2[j].coeff;
                sizef++;
            
        }
    }
    return final;
}

int main()
{
    char s1[100],s2[100];
    int size1,size2;
    printf("Enter the first polynomial as a string: ");
    scanf("%s",s1);
    printf("Enter the second polynomial as a string: ");
    scanf("%s",s2);
    struct pol* p1;
    struct pol* p2;
    size1=convert(s1,p1);//string->struct
    size2=convert(s2,p2);
    struct pol*final=multiply(p1,p2,size1,size2);//multiply structs and store in struc
    print(final);//print in string format
    printf("\n");
    //free(p1);
    //free(p2);
    //free(final);
    return 0;
}