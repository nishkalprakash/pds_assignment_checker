//Shrey G PAtel
//23CS10051

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void create(char ***sptr,int n)
{
char c,cha[100];
int size=0;

printf("enter the words one by one:\n");
*sptr=(char **)malloc(n*sizeof(char *));

for(int i=0;i<n;i++)
{
scanf("%s",cha);
(*sptr)[i]=(char *)malloc(strlen(cha)*sizeof(char));
strcpy((*sptr)[i],cha);
}

for(int i=0;i<n;i++)
printf("%s ",(*sptr)[i]);
printf("\n");

}

void lengthstat(char **sptr,int n)
{
int count1=0,count2=0,count3=0,temp;
for(int i=0;i<n;i++)
{temp=strlen(sptr[i]);
if(temp>=1 && temp<=2)
count1=temp;
else if(temp>=3 && temp<=5)
count2=temp;
else if(temp>=6)
count3=temp;
}

printf("\nwords(1 to 2 letters):%d",count1);
printf("\nwords(3 to 5 letters):%d",count2);
printf("\nwords(More than 5 letters):%d\n\n\n",count3);

}

void letterstat(char **sptr,int n)
{
int a=0,e=0,i=0,o=0,u=0;
for(int i=0;i<n;i++)
{for(int j=0;sptr[i][j]!='\0';j++)
{if(sptr[i][j]=='a')
a=a+1;
else if(sptr[i][j]=='e')
e=e+1;
else if(sptr[i][j]=='i')
i=i+1;
else if(sptr[i][j]=='o')
o=o+1;
else if(sptr[i][j]=='u')
u=u+1;
}}
printf("\na=%d e=%d i=%d o=%d u=%d\n",a,e,i,o,u);}

void search(char **sptr,int n)
{char a[100];
int flag=0;
printf("enter the word:\n");
scanf("%s",a);
for(int i=0;i<n;i++)
{if(strcmp(sptr[i],a)==0)
{printf("\nword %d resembles\n",i+1);
flag=1;}}

if(flag==0)
printf("\nNo word resembles\n");
}


void removeduplicate(char **sptr,int *n)
{
for(int i=0;i<*n;i++)
{
for(int j=i+1;j<*n;j++)
{if(strcmp(sptr[i],sptr[j])==0)
{for(int k=j;k<*n;k++)
sptr[k]=sptr[k+1];

free(sptr[*n-1]);
*n=*n-1;
}}}
for(int i=0;i<*n;i++)
printf("%s ",sptr[i]);
printf("\n");
}

int main()
{

int p,n;
char **sptr;
while(1)
{
printf("Enter the choice from the menu[1,7]:\n");
printf("1->create\n2->lengthstat\n3->letterstat\n4->search\n");
printf("5->remove duplicate\n6->searchreplace\n7->arrange\n0->terminate");
scanf("%d",&p);

if(p==1)
{printf("how many words you want to enter:\n");
scanf("%d",&n);
create(&sptr,n);
}

else if(p==2)
lengthstat(sptr,n);

else if(p==3)
letterstat(sptr,n);

else if(p==4)
search(sptr,n);

else if(p==5)
removeduplicate(sptr,&n);

/*else if(p==6)
searchreplace(sptr,n);

else if(p==7)
arrange(sptr,n);
*/
else if(p==0)
break;


}return 0;}
