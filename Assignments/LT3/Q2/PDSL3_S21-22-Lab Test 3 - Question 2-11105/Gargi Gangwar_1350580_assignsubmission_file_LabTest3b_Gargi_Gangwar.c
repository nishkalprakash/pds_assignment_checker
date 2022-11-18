//Gargi Gangwar
//21MF10017
//C program to multiply two polynomials and return the resultant polynomial as a string

#include<stdio.h>
#include <stdlib.h>

typedef struct
{
 int numitems;
 int *coeff[50];
 int *expo[];
}poly;



int main()
{
 poly *polynoms[2];
 //Dynamic memory allocation
 polynoms=(poly *)malloc(2*sizeof(poly));

 printf("Enter the first polynomial as a string:");
 int len=1,i=0,items=0,j;
 char *arr;
 arr[0]=(char *)malloc(sizeof(char));
 scanf("%c",&arr[0]);
 while (arr[i]!='\n'){
 i++;
 arr[0]=(char *)malloc(sizeof(char));
 scanf("%c",&arr[i]);
 len++;
}

//finding number of terms
for(i=0;i<len;i++)
{
      if ((arr[i]=='+')||(arr[i]=='-'))
      {
        items++;
      }
}

polynoms[0].numitems=(items+1);
//Dynamic memory allocation
polynoms[0].expo=(int *)malloc((items+1)*sizeof(int));

//array for finding exponents
for(i=0;i<len;i++)
    {
      int static j=0 , static Term_Local=0;
      if ((arr[i]=='+')||(arr[i]=='-'))
      {
       Term_Local++;
       if(arr[i-1]!='x')
       {
        polynoms[0].expo[j++]=arr[i-1];
       }
       else
       {
        polynoms[0].expo[j++]='1';
       }
      }
      if (Term_Local==items)
      {
       int check=0;

        for (int k=i;k<len;k++)
        {
          if (arr[i]=='x')
          {
            check=1;
          }
        }
        if(check=='0')
        {
         polynoms[0].expo[j]='0';
        }
      }
     }

//array for finding coefficient
for(i=0;i<len;i++)
    {
     int static k=0,static Term_Local=0;
     if ((arr[i]=='+')||(arr[i]=='-'))
     {
      Term_Local++;
     }
     if(arr[i]=='x')
     {
      polynoms[0].coeff[k++]=arr[i-1];
     }
     if (Term_Local==items)
     {
      int test=0;
      for (k=i;k<len;k++)
      {
        if (arr[i]=='x')
        {
          test=1;
        }
      }
      if(test=='0')
      {
         *** polynoms[0].coeff[k++]=arr[i];

      }
      polynoms[0].expo[j]='0';
     }
    }

    //Second polynomial similar process applied
    printf("Enter the second polynomial as a string:");
    int len=1,i=0,items=0;
    char *arr;
    arr[0]=(char *)malloc(sizeof(char));
    scanf("%c",&arr[0]);
    while (arr[i]!='\n')
    {
     i++;
     arr[0]=(char *)malloc(sizeof(char));
     scanf("%c",&arr[i]);
     len++;
    }

    //Counting the number of terms
    for(i=0;i<len;i++)
    {
      if ((arr[i]=='+')||(arr[i]=='-'))
      {
        items++;
      }
    }
    polynoms[1].numitems=(items+1);
    polynoms[1].expo=(int *)malloc((items+1)*sizeof(int));

    //array for finding exponents
    for(i=0;i<len;i++)
        {
         int static j=0 ,static Term_Local=0;
         if ((arr[i]=='+')||(arr[i]=='-'))
         {
           Term_Local++;
           if(arr[i-1]!='x')
           {
             polynoms[1].expo[j++]=arr[i-1];
           }
           else
           {
            polynoms[1].expo[j++]='1';
           }
         }
         if (Term_Local==items)
         {
           int check=0;
           for (int k=i;k<len;k++)
           {
              if (arr[i]=='x')
              {
                check=1;
              }
           }
           if(check=='0')
           {
             polynoms[1].expo[j]='0';
           }
         }
       }

       //array for finding coefficients
       for(i=0;i<len;i++)
        {
           int static k=0,static Term_Local=0;
           if ((arr[i]=='+')||(arr[i]=='-'))
           {
             Term_Local++;
           }
           if(arr[i]=='x')
           {
             polynoms[].coeff[k++]=arr[i-1];
           }
           if (Term_Local==items)
           {
             int check=0;
             for (k=i;k<len;k++)
             {
                if (arr[i]=='x')
                {
                    check=1;
                }
             }
             if(check=='0')
             {
               *** polynoms[1].coeff[k++]=arr[i];

             }
             polynoms[1].expo[j]='0';
            }


        }
}
