// Name : Bhoomik Modi
// Roll no. 23PH10013
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// declaring functions


int create(char ***sptr);
void lengthStat(char **sptr,int n);
void letterStat(char **sptr,int n);
void search(char **sptr,int n);
void removeDublicate(char **sptr, int n);
void searchReplace(char **sptr, int n);
void arrange(char **sptr,int n);


int main()
{
	char **sptr;
	int c;
	int num_words;
	while(1)
	{
		printf("enter your choice :  ");
		scanf("%d",&c);
		switch(c){
		case 0: exit(0);
			break;
		case 1: num_words=create(&sptr);
			break;
		case 2: lengthStat(sptr,num_words);
			break;
		case 3: letterStat(sptr,num_words);
			break;
		case 4: search(sptr,num_words);
			break;
		case 5: removeDublicate(sptr,num_words);
			break;
		case 6: searchReplace(sptr,num_words);
			break;
		case 7: arrange(sptr,num_words);
			break;
		default:printf("Wrong choice\n");
			break;
		
		}
	}
   return 0;
}
int create (char ***sptr)
{
	int n;
	printf("Enter the no. of words to be entered : 	");
	scanf("%d",&n);
	*sptr=(char**)malloc(n*sizeof(char*));// allocating pace
	for (int i=0;i<n;i++)
	{
		char word[100];
		printf("Enter the %d word  ",i+1);
		scanf("%s",word);
		fflush(stdin);
		(*sptr)[i]=(char*)malloc((strlen(word)+1)*sizeof(char));//allocating space
		strcpy((*sptr)[i],word);
	}
	printf("display the words entered by user\n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",(*sptr)[i]);
	}
	return n;

}
void lengthStat(char **sptr,int n)
{
	int len1=0;
	int len2=0;
	int len3=0;
	for(int i=0;i<n;i++)
	{
		int length= strlen(sptr[i]);
		if(length>=1 && length<=2)
			len1++;
		else if (length>=3 && length<=5)
			len2++;
		else if (length>5)
			len3++;

	}
	printf("\n Between 1--2 : %d \n Between 3--5 : %d\nGreater than 5 : %d\n",len1,len2,len3);

	
}
void letterStat(char **sptr,int n)
{
	int vc=0;
	for (int i=0;i<n;i++)
	{
		char *word=sptr[i];
		int length=strlen(word);
		for(int j=0;j<length;j++)
		{
			if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u')//checking for vowels
			vc++;
		}
	}
	printf("\nTotal no. of vowels : %d \n",vc);
}
void search(char **sptr, int n)
{
	char str[100];
	int f=0;//to store counts of word
	printf("Enter the word to be searched : ");
	scanf("%s",str);
	fflush(stdin);	
	for(int i=0;i<n;i++)
	{
		if (strcmp(sptr[i],str)==0)
		{
			printf("Word %s found at seqn posn %d\n",str,i+1);
			f=1;
		}
	}
	if(f==0) printf("Word %s is not present in sequence",str);
}
void removeDublicate(char **sptr, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(sptr[i],sptr[j])==0&&sptr[i]!="\0")
			{
				printf("%s is repeated\n",sptr[i]);
				for(int k=j;k<n-1;k++)
				{
					(sptr[k])=(char*)realloc(sptr[k],(strlen(sptr[k])+1)*sizeof(char));
					sptr[k]=sptr[k+1];
				}
				n--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",(sptr)[i]);
	}
}
void searchReplace(char **sptr,int n)
{
	char str[100];
	printf("Enter the word to be searched : ");
	scanf("%s",str);
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		if (strcmp(sptr[i],str)==0)
		{
			printf("Enter a new word : ");
			char str1[100];
			scanf("%s",str1);
	                fflush(stdin);
			(sptr[i])=(char*)realloc(sptr[i],(strlen(str1)+1)*sizeof(char));
			sptr[i]=str1;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",(sptr)[i]);
	}
}
void arrange(char **sptr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s\n",(sptr)[i]);
	}
}
