//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>

void check(char str[20])
{ 
	int i=0,j=0;
	while(str[i]!='\0'){
		if (str[i+2]==str[i]+1) { j++;}
		i++;
	}
	printf("The result of check = %d\n", j);
}

void encode1(char str[20])
{
	int i=0;
	printf("The first encoded string is:\n");
	while(str[i]!='\0'){
		if(str[i]!='y' && str[i]!='z'){
			printf("%c",str[i]+2);
		}
		else {
			if(str[i]=='y') printf("a");
			if(str[i]=='z') printf("b");
		}
	i++;
	}
	printf("\n");
}

void encode2(char str[20])
{
	int i;
	printf("The second encoded string is \n");
	for(i=0; str[i]!='\0'; i++){
		printf("a");
		printf("%c", str[i]);
		}
	printf("\n");
	}


int main()
{
	int i,j;
	char str[20];
	printf("Enter a character string\n");
	scanf("%s", str);
	printf("string= %s \n", str);
	check(str);
	encode1(str);
	encode2(str);
	return 0;
}

