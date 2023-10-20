#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int create(char ***sptr)
{int n,i,l;
  char c;
  printf("How many words to enter(<100):");
  scanf("%d",&n);
  **sptr=(char ***)malloc(n*sizeof(char));
  printf("Enter %d words(one at a time):",n);
  for(i=0;i<n;i++)
    { scanf("%s",c);
      l=strlen(c);
      (*sptr)[i]=(char **)malloc(l*sizeof(char));
      strcpy((*sptr)[i],c));
    }
  printf("The words entered by the user are:\n")
  for(i=0;i<n;i++)
    {
      printf("%s\n",(*sptr)[i]);
    }
  return 0;
}
int lengthStat(char **sptr,int n)
{ int i,l,k,s,t;
  for(i=0;i<n;i++)
   {l=strlen(sptr[i]);
    if(l==1||l==2)
      k++;
    else if(l==3||l==4||l==5)
      s++;
    else
      t++;

    }
  printf("no.of words between 1-2 letters:%d\n",k);
  printf("no.of words between 3-5 letters:%d\n",s);
  printf("no.of words larger than 5 letters:%d\n",t);
  return 0;
}
int letterStat(char **sptr,int n)
{ int k,l,j,a=0,e=0,i=0,o=0,u=0;
  char f;
  for(k=0;k<n;k++)
   {l=strlen(sptr[i]);
    f=sptr[i];
    for(j=0;j<l;j++)
     {if(f[j]=='a')
       a++;
      if(f[j]=='e')
       e++;
      if(f[j]=='i')
       i++;
      if(f[j]=='o')
       o++;
      if(f[j]=='u')
       u++;
     }
   }
  printf("no.of a:%d\n",a);
  printf("no.of e:%d\n",e);
  printf("no.of i:%d\n",i);
  printf("no.of o:%d\n",o);
  printf("no.of u:%d\n",u);
  return 0 ;
}
int search(char **sptr,int n)
{ char c,f; 
  int i,l,k;
  printf("Enter a word : ");
  scanf("%s",c);
  for(i=0;i<n;i++)
   {l=strlen(sptr[i]);
    f=sptr[i];
    for(j=0;j<l;j++)
     {if(f[j]==c[j])
        k++;
     }
    if(k==l)
    printf("occurence at %d , ",i+1);
   }
  return 0;
}
int removeDuplicate(char **sptr,int n)
{
  return 0;
}
int searchReplace(char **sptr,int n)
{
  printf("Enter a word : ");
  scanf("%s",c);
  return 0;
   for(i=0;i<n;i++)
   {l=strlen(sptr[i]);
    f=sptr[i];
    for(j=0;j<l;j++)
     {if(f[j]==c[j])
        k++;
     }
      if(k==l)
      {printf("Enter a new word : ");
       scanf("%s",b);
       k=strlen(b);
       sptr=realloc(sptr,b);
       for(i=0;i<b;i++)
        {
         sptr[i]=b[i]
        } 
      break;
      }   
    }
}
int arrange(char **sptr,int n)
{
  return 0;
} 
int main()
{
  int i,n,c;
  char ***sptr;
  printf("How many words to enter(<100):");
  scanf("%d",&n);
  for(i=0;;i++)
    {printf("1->create\n2->lengthStat()\n3->letterStat()\n4->search\n");
      printf("5->removeDuplicate()\n6->searchRepalce()\n7->arrange()\n");
     printf("Enter your choice : ");
     scanf("%d");
     if(c==1)
       create(&sptr,n);
     else if(c==2)
        lengthStat(sptr,n);
     else if(c==3)
       letterStat(sptr,n);
     else if(c==4)
      search(sptr,n);
     else if(c==5)
      removeDuplicate(sptr,n);
     else if(c==6)
      searchReplace(sptr,n);
     else if(c==7)
      arrange(sptr,n);
     else if(c==0)
       break;

    }
  return 0;
}
