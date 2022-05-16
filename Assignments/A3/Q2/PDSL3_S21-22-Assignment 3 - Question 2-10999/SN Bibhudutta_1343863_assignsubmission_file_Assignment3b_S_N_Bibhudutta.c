// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 3

#include<stdio.h>
int strsize(char str1[])
{
    int i;
    for( i=0;str1[i]!='\0';i++)
    {}
    return i;
}

void score1(char str1[],char str2[],int n)
{
    int min=2*n;int k=0, index;
    for(int i=0;i<n;i++)
    {
       int curr=2;
       for(int j=0;j<n;j++)
       {
            if(k!=i)
            {
                if(str1[j]!=str2[k])
                {
                    curr++;
                }
            }
       }
       if(curr<min)
       {
           min=curr;
           index=i;
       }
    }
    printf("\nSequence1:%s",str1);
    printf("\nSequence2: ");
    for (int i = 0; i <n-1; i++)
    {
         if(i!=index)
         printf("%c",str2[i]);
         else
         printf("-%c",str2[i]);
    }

    printf("\nPentaly ");
    k=0;
    for (int i = 0; i < n; i++)
    {
        if(i!=index)
        {
            if(str1[i]!=str2[k])
            printf(" 1");
            else
            printf(" 0");

            k++;
        }
        else
        {
            printf(" 2");
        }
    }
    
    printf("\nThe similarity score =%d",min);

    return ;
    
}


void score2(char str1[],char str2[],int n)
{
    int min=2*n;int k=0, index1,index2;

    for(int h=0;h<n;h++)
    {
        for(int i=h+1;i<n;i++)
        {
            int curr=2;
       for(int j=0;j<n;j++)
       {
            if(k!=i&&k!=h)
            {
                if(str1[j]!=str2[k])
                {
                    curr++;
                }
            }
       }
       if(curr<min)
       {
           min=curr;
           index1=h;index2=i;
       }
        }
    }
    
     printf("\nSequence1:%s",str1);
    printf("\nSequence2: ");
    for (int i = 0; i <n-1; i++)
    {
         if(i!=index1&&i!=index2)
         printf("%c",str2[i]);
         else
         printf("-%c",str2[i]);
    }

    printf("\nPentaly ");
    k=0;
    for (int i = 0; i < n; i++)
    {
        if(i!=index1&&i!=index2)
        {
            if(str1[i]!=str2[k])
            printf(" 1");
            else
            printf(" 0");

            k++;
        }
        else
        {
            printf(" 2");
        }
    }
    
    printf("\nThe similarity score =%d",min);

    return ;




}

int Calculate_Score(char str1[],char str2[], int size1)
{
    int count=0;
    printf("Penalty ");
    for(int i=0;i<size1;i++)
    {
           if(str1[i]!=str2[i])
           {
               printf(" 1");
               count++;
           }
           else
           {
               printf(" 0");
           }
            
    }
    return count ;
}

int main()
{

  char str1[1000];
  char str2[1000];

  printf("\nEnter the 2 string only consist of A,G,T,C ");
  scanf("%s",str1);
  scanf("%s",str2);


  printf("\nThe string 1 is %s",str1);

  printf("\nThe string 2 is %s",str2);


  //Function to calculate string size;
  int size1= strsize(str1);
  int size2= strsize(str2);

  if(size1==size2)
  {
      printf("\nSEQUENCE 1 %s",str1);
      printf("\nSEQUENCE 1 %s",str2);

      int score=Calculate_Score(str1,str2,size1);
      
      printf("The similarity score %d",score);

      return 0;
      
  }

  if(size1>size2)
  {
      int diff=size1-size2;
      if(diff==1)
      {
          score1(str1,str2,size1);
          score2(str1,str2,size1);
          return 0;
      }
  }
  if(size1<size2)
  {
      int diff=size2-size1;
      if(diff==1)
      {
          score1(str2,str1,size2);
          score2(str2,str1,size2);
          return 0;
      }
  }

#include<stdio.h>
int strsize(char str1[])
{
    int i;
    for( i=0;str1[i]!='\0';i++)
    {}
    return i;
}

void score1(char str1[],char str2[],int n)
{
    int min=2*n;int k=0, index;
    for(int i=0;i<n;i++)
    {
       int curr=2;
       for(int j=0;j<n;j++)
       {
            if(k!=i)
            {
                if(str1[j]!=str2[k])
                {
                    curr++;
                }
            }
       }
       if(curr<min)
       {
           min=curr;
           index=i;
       }
    }
    printf("\nSequence1:%s",str1);
    printf("\nSequence2: ");
    for (int i = 0; i <n-1; i++)
    {
         if(i!=index)
         printf("%c",str2[i]);
         else
         printf("-%c",str2[i]);
    }

    printf("\nPentaly ");
    k=0;
    for (int i = 0; i < n; i++)
    {
        if(i!=index)
        {
            if(str1[i]!=str2[k])
            printf(" 1");
            else
            printf(" 0");

            k++;
        }
        else
        {
            printf(" 2");
        }
    }
    
    printf("\nThe similarity score =%d",min);

    return ;
    
}


void score2(char str1[],char str2[],int n)
{
    int min=2*n;int k=0, index1,index2;

    for(int h=0;h<n;h++)
    {
        for(int i=h+1;i<n;i++)
        {
            int curr=2;
       for(int j=0;j<n;j++)
       {
            if(k!=i&&k!=h)
            {
                if(str1[j]!=str2[k])
                {
                    curr++;
                }
            }
       }
       if(curr<min)
       {
           min=curr;
           index1=h;index2=i;
       }
        }
    }
    
     printf("\nSequence1:%s",str1);
    printf("\nSequence2: ");
    for (int i = 0; i <n-1; i++)
    {
         if(i!=index1&&i!=index2)
         printf("%c",str2[i]);
         else
         printf("-%c",str2[i]);
    }

    printf("\nPentaly ");
    k=0;
    for (int i = 0; i < n; i++)
    {
        if(i!=index1&&i!=index2)
        {
            if(str1[i]!=str2[k])
            printf(" 1");
            else
            printf(" 0");

            k++;
        }
        else
        {
            printf(" 2");
        }
    }
    
    printf("\nThe similarity score =%d",min);

    return ;




}

int Calculate_Score(char str1[],char str2[], int size1)
{
    int count=0;
    printf("Penalty ");
    for(int i=0;i<size1;i++)
    {
           if(str1[i]!=str2[i])
           {
               printf(" 1");
               count++;
           }
           else
           {
               printf(" 0");
           }
            
    }
    return count ;
}

int main()
{

  char str1[1000];
  char str2[1000];

  printf("\nEnter the 2 string only consist of A,G,T,C ");
  scanf("%s",str1);
  scanf("%s",str2);


  printf("\nThe string 1 is %s",str1);

  printf("\nThe string 2 is %s",str2);


  //Function to calculate string size;
  int size1= strsize(str1);
  int size2= strsize(str2);

  if(size1==size2)
  {
      printf("\nSEQUENCE 1 %s",str1);
      printf("\nSEQUENCE 1 %s",str2);

      int score=Calculate_Score(str1,str2,size1);
      
      printf("The similarity score %d",score);

      return 0;
      
  }

  if(size1>size2)
  {
      int diff=size1-size2;
      if(diff==1)
      {
          score1(str1,str2,size1);
          score2(str1,str2,size1);
          return 0;
      }
  }
  if(size1<size2)
  {
      int diff=size2-size1;
      if(diff==1)
      {
          score1(str2,str1,size2);
          score2(str2,str1,size2);
          return 0;
      }
  }


}