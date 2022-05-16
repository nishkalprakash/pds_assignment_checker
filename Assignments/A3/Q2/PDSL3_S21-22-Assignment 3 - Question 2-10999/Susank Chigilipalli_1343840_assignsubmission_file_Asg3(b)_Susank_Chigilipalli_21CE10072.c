/*This program is to find similarity search of gene*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  int i,lseq1=0,lseq2=0,lmax,ss=0;
  char seq1[100],seq2[100];
  printf("Enter first sequence in order : ");
  scanf("%s",&seq1[100]);
  printf("Enter second sequence in order : ");
  scanf("%s",&seq2[100]);
  for(i=0;i<100;i++)
   {
      lseq1++;
      if(seq1[i]=='\0')break;
   }
   for(i=0;i<100;i++)
   {
      lseq2++;
      if(seq2[i]=='\0')break;
   }
   if(lseq1>lseq2)lmax=lseq1;
   else
   lmax=lseq2;
   printf("Penalty       ");
  for(i=0;i<lmax;i++)
  {
    if(seq1[i]==seq2[i])
    { printf("0");ss=ss+0;}
    else if(seq1[i]!=seq2[i])
    { printf("1");ss=ss+1;}
    else
    { printf("2");ss=ss+2;}
  }
    printf("\n");
    printf("Similarity score : %d",ss);
}
