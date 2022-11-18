/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
   char seq1[100], seq2[100],newseq[100];
   int seqlen1=0, seqlen2=0, i,j,k,l,m,min=1000;
   int longseq,shortseq;
   int sim_score=0;
   printf("Enter the sequence 1: "); // taking the input for sequence 1
   scanf("%s", seq1);
   printf("Enter the sequence 2: "); // taking the input for sequence 2
   scanf("%s", seq2);
   for(i=0;seq1[i]!='\0';i++)
   {
        seqlen1+=1;
   }
    for(i=0;seq2[i]!='\0';i++)
   {
        seqlen2+=1;
   }
    printf("%d\n", seqlen1);
    printf("%d\n", seqlen2);

    if(seqlen1>=seqlen2)
    {
        longseq=seqlen1;
        shortseq=seqlen2;
    }
    else 
    {
        longseq=seqlen2;
        shortseq=seqlen2;

    }


   if(seqlen1==seqlen2)
   {
        for(i=0;i<seqlen1,seq1[i]!='\0';i++)
        {
            if(seq1[i]==seq2[i]) sim_score+=0;

            else sim_score+=1;
        }
        min=sim_score;

   }
    else if(seqlen1!=seqlen2){
    for (i=0;i<longseq-1;i++)
        {
            for (j=i+1;j<longseq;j++)
                {
                    for (k=0,l=0;k<longseq;k++)
                        {
                            if(k==i)
                            newseq[k]=' ';
                            else if(k==j)
                                newseq[k]=' ';
                            else {
                                newseq[k]=seq2[l];
                                l++;
                            }
                        }
                        sim_score=0;
                        for(m=0;m<seqlen1,seq1[m]!='\0';m++)
                        {
                            if(seq1[m]==newseq[m]) sim_score+=0;
                            else if(newseq[m]==' ') sim_score+=2;
                            else sim_score+=1;
                        }

                        if(min>sim_score) min=sim_score;



                }
        }
   }


   printf("\n\nMININUM SCORE POSSIBLE IS %d \n\n", min);
return 0;
}