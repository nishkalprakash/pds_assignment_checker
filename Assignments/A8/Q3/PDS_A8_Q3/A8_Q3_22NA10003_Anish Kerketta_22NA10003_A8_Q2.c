/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 8-2
Description:Count the length of string,words,sentences,vowels and the frequency of the letters present in the string.*/
#include <stdio.h>
#include <string.h>
void main()
{	
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char line[200];
	int i,length=0;
	int sentences=0,vowels=0,words=1;
	int check=0;
	printf("Enter '@!' to end the input\n");
	scanf("%[^!]",line);
	printf("%s",line);
	for(i=0;i<100;i++)
	{
	if(line[i]=='@')
	check=1;
	if(check==0)
	length++;
	if(line[i]=='.')
	sentences++;
	if(line[i]=='a'|| line[i]=='e'|| line[i]=='i'|| line[i]=='o'|| line[i]=='u'|| line[i]=='A'|| line[i]=='E'|| line[i]=='I'|| line[i]=='O'|| line[i]=='U')
	vowels++;
	if(line[i]==' ')
	words++;
	if(line[i]=='a' || line[i]=='A' )
	count[0]++;
	if(line[i]=='b' || line[i]=='B')
	count[1]++;
	if(line[i]=='c' || line[i]=='C')
	count[2]++;
	if(line[i]=='d' || line[i]=='D')
	count[3]++;
	if(line[i]=='e' || line[i]=='E')
	count[4]++;
	if(line[i]=='f' || line[i]=='F')
	count[5]++;
	if(line[i]=='g' || line[i]=='G')
	count[6]++;
	if(line[i]=='h' || line[i]=='H')
	count[7]++;
	if(line[i]=='i' || line[i]=='I')
	count[8]++;
	if(line[i]=='j' || line[i]=='J')
	count[9]++;
	if(line[i]=='k' || line[i]=='K')
	count[10]++;
	if(line[i]=='l' || line[i]=='L')
	count[11]++;
	if(line[i]=='m' || line[i]=='M')
	count[12]++;
	if(line[i]=='n' || line[i]=='N')
	count[13]++;
	if(line[i]=='o' || line[i]=='O')
	count[14]++;
	if(line[i]=='p' || line[i]=='P')
	count[15]++;
	if(line[i]=='q' || line[i]=='Q')
	count[16]++;
	if(line[i]=='r' || line[i]=='R')
	count[17]++;
	if(line[i]=='s' || line[i]=='S')
	count[18]++;
	if(line[i]=='t' || line[i]=='T')
	count[19]++;
	if(line[i]=='u' || line[i]=='U')
	count[20]++;
	if(line[i]=='v' || line[i]=='V')
	count[21]++;
	if(line[i]=='w' || line[i]=='W')
	count[22]++;
	if(line[i]=='x' || line[i]=='X')
	count[23]++;
	if(line[i]=='y' || line[i]=='Y')
	count[24]++;
	if(line[i]=='z' || line[i]=='Z')
	count[25]++;
	}
	printf("\nLenght counted without using library =%d\n",length);
	printf("Length counted by strlen() =%ld\n",strlen(line)-1);
	printf("Words=%d\n",words);
	printf("Sentences=%d\n",sentences);
	printf("vowels=%d\n",vowels);
	printf("Frequency count of each aplhabet\n");
	for(i=0;i<26;i++)
	if(count[i]!=0)
	printf("'%c' = %d\n",alpha[i],count[i]);






	
}
