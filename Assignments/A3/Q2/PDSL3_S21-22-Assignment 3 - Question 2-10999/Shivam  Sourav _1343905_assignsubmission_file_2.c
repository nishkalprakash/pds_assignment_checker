#include<stdio.h>
void main()
{
    char s1[1000],s2[1000];
    int l1,l2,sc=0,j,k,i,l;
    printf("enter two DNA sequences such that the length of sencond should not exceed first\n");
    printf("sequence 1");
    scanf("%s",s1);
    printf("sequence 2");
    scanf("%s",s2);
   l1= sizeof(s1)/8;
   l2= sizeof(s2)/8;
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(s1[i]!=s2[i])
                sc++;
        }
        printf("similarity score =%d",sc);

    }
     if ((l1-l2)==1)
    {
        int min=0;
        for(i=0;i<l2;i++)
        {
            for(j=i;j<l2;j++)
                s2[j+1]=s2[j];
                s2[i]='-';
                for(k=0;k<=l2;k++)
                {
                    if(s1[k]==s2[k])
                        sc++;
                     if (s1[k]=='-')
                        sc+=2;
                        if(sc<min)
                            min=sc;


                }

        }
       printf("similarity score=%d",min);
    }
    if((l1-l2)==2)
    {
        int min=0;
         for(i=0;i<l2;i++)
        {
            for(j=i+1;j<l2;j++)
            {
                    for(k=i;k<j;k++)
                    {
                        s2[k+1]=s2[k];
                        s2[k]='-';
                    }

                    for(k=j;k<l2;k++)
                        s2[k+2]=s2[k];
                        s2[j+2]=='-';

                         for(k=0;k<l2+2;k++)
                {
                    if(s1[k]==s2[k])
                        sc++;
                     if (s1[k]=='-')
                        sc+=2;
                        if(sc<min)
                            min=sc;


                }
            }
            printf("similarity score=%d",min);


    }


}}
