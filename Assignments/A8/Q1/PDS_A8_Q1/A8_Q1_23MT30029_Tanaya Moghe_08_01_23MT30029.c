//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;

void create(char ***sptr)
{
	int i,j,length;
	char str[50];
	printf("How many words (less than 100) would you like to enter?\n");
	scanf("%d", &n);
	*sptr = (char**)malloc(n*sizeof(char*));
	for(i=0; i<n; i++)
	{ 
	
		printf("Enter a word\n");
		scanf("%s", str);
		length = strlen(str);
		(*sptr)[i] = (char*)malloc(length*sizeof(char));
		for(j=0; j<length; j++)
		{
			(*sptr)[i][j]= str[j];
			
		}
		
	}
	for(i=0; i<n; i++)
	{ 
		printf("&sptr[%d]=%s\n", i, (*sptr)[i]);
	}
}


void lengthStat(char ***sptr)
{
	int i,j,a=0,b=0,c=0;
	for(i=0; i<n; i++)
	{ 
		j=strlen((*sptr)[i]);
		if(j>0 && j<3) a++;
		else if(j>2 && j<6) b++;
		else if(j>5) c++;
	}
	printf("The number of words with:\n");
	printf("1-2 letters = %d\n", a);
	printf("3-5 letters = %d\n", b);
	printf("more than 5 letters = %d\n", c);
}


		



int main()
{
	int k;
	char **sptr;
	printf("User Menu:\n");
	printf("1 -create\n");
	printf("2 - lengthStat\n");
	printf("3 - letterStat\n");
	printf("4 - search\n");
	printf("5 - removeDuplicate\n");
	printf("6 - searchReplace\n");
	printf("7 - arrange\n");
	while(1)	
	{
		printf("Enter your choice\n");
		scanf("%d", &k);
		if(k>0 && k<8)
		{
		switch(k){
			case(1):{ create(&sptr); 
				break;}
			case(2):{ lengthStat(&sptr);
				break;}
					
			}
		}
		else break;
	}
	return 0;
}
		
