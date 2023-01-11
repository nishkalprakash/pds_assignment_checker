/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 8
	Description : CHecks the length, number of words, sentences,vowels and frequency of alphabets in a string
*/
#include <stdio.h>
#include <string.h>

// void correct(char s[],char cor[])												//This function can be used to make the string proper if the input from the user does not have spaces and punctuations in the proper place
// {
// 	int j=0,i=0;

// 	while(s[i]==' ')
// 		i++;

// 	for (  ; s[i]!='\0'; ++i)
// 	{
// 		char c=s[i];

// 		if ((c>64 && c<91) || (c>96 && c<123))
// 		{
// 			if (!((cor[j-1]>64 && cor[j-1]<91) || (cor[j-1]>96 && cor[j-1]<123)) && cor[j-1]!=' ' && j!=0)
// 			{
// 				cor[j]=' ';
// 				j++;
// 			}


// 			cor[j]=c;
// 			j++;
// 		}

// 		else if (c==' ')
// 		{
// 			cor[j]=c;
// 			j++;
// 			while(s[i+1]==' ')
// 				i++;
// 		}

// 		else
// 		{
// 			if(cor[j-1]==' ')
// 				cor[j-1]=c;
// 			else
// 			{
// 				cor[j]=c;
// 				j++;
// 			}void correct(char s[],char cor[])
// {
// 	int j=0,i=0;

// 	while(s[i]==' ')
// 		i++;

// 	for (  ; s[i]!='\0'; ++i)
// 	{
// 		char c=s[i];

// 		if ((c>64 && c<91) || (c>96 && c<123))
// 		{
// 			if (!((cor[j-1]>64 && cor[j-1]<91) || (cor[j-1]>96 && cor[j-1]<123)) && cor[j-1]!=' ' && j!=0)
// 			{
// 				cor[j]=' ';
// 				j++;
// 			}


// 			cor[j]=c;
// 			j++;
// 		}

// 		else if (c==' ')
// 		{
// 			cor[j]=c;
// 			j++;
// 			while(s[i+1]==' ')
// 				i++;
// 		}

// 		else
// 		{
// 			if(cor[j-1]==' ')
// 				cor[j-1]=c;
// 			else
// 			{
// 				cor[j]=c;
// 				j++;
// 			}
// 		}

// 	}
// 	if(!((cor[j-1]>64 && cor[j-1]<91) || (cor[j-1]>96 && cor[j-1]<123)))
// 	{
// 		cor[j-1]='.';
// 		cor[j]='\0';
// 	}
// 	else
// 		cor[j]='.';
// 		cor[j+1]='\0';

// 	printf("%s\n", cor);

// }
// 		}

// 	}
// 	if(!((cor[j-1]>64 && cor[j-1]<91) || (cor[j-1]>96 && cor[j-1]<123)))
// 	{
// 		cor[j-1]='.';
// 		cor[j]='\0';
// 	}
// 	else
// 		cor[j]='.';
// 		cor[j+1]='\0';

// 	printf("%s\n", cor);

// }

void len(char s[])
{
	int i=0;

	for (i = 0; s[i]!='\0' ; ++i);

	printf("Length counted without using library : %d\n",i );

	printf("Length counted by strlen() : %lu\n",strlen(s));
}

void words(char s[])
{
	int j=0;

	for (int i = 0; s[i]!='\0' ; ++i)
		if(s[i]==' ')
			j++;

	printf("Number of words : %d\n",j+1 );
}

void sent(char s[])
{
	int j=0;

	for (int i = 0; s[i]!='\0' ; ++i)
		if(s[i]=='.')
			j++;

	printf("Number of sentences : %d\n",j );
}

void vowel(char s[])
{
	int j=0;

	for (int i = 0; s[i]!='\0' ; ++i)
		if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
			j++;

	printf("Number of vowels : %d\n",j );
}

void freq(char s[])
{
	int a[26];

	for (int i = 0; i < 26; ++i)
		a[i]=0;

	for (int i = 0; s[i]!='\0' ; ++i)
	{
		char c=s[i];
		if((c<91 && c>64))
			++a[c-65];
		else if ((c<123 && c>96))
			++a[c-97];

	}

	printf("The frequency count of each alphabet :\n");

	for (int i = 0; i < 26; ++i)
	{
		if (a[i]!=0)
		{
			printf("'%c'= %d  ",i+97 ,a[i]);
		}
	}
}

int main()
{
	char c[100];
	printf("Enter the string : \n");
	scanf("%[^\n]",c);

	// char cor[110];								//this part should be used for the case mentioned above. pass cor into all the functions except len 
	// correct(c,cor);

	len(c);
	words(c);
	sent(c);
	vowel(c);
	freq(c);

	printf("\n");
	return 0;
}