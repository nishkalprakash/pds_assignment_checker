#include<stdio.h>
#include<string.h>

int vowel(char S){
	if(S=='a'||S=='e'||S=='i'||S=='o'||S=='u')
		return 1;
	else 
		return 0;
}


int main(){
	char S[100];
	// for(int i=0; i<100; i++){
	// 	scanf("%c", S+i);
	// 	if(S[i]=='0'){
	// 		break;
	// 	}
	// }
	scanf("%[^\n]", S);//taking the input string. 
	//for(int i=0; i<100; i++)
	//printf("%s ", S);
	int k=0;
	int l=0;
	int m=0;
	int n=0;
	while(S[k]!='\0'){
		k++;
		if(S[k]==' '){//checking number of words
			l++;
		}
		if(S[k]=='.'){//checking number of sentences
			m++;
		}
		if(vowel(S[k])){//checking number of vowels 
			n++;
		}


	}
	printf("Lenght counted without using library is %d\n", k);
	int j=strlen(S);
	printf("Lenght counted by strlen is %d\n", j);
	printf("The number of words are %d\n", l+1);
	printf("The number of sentences are %d\n", m);
	printf("The number of vowels are %d", n);


	return 0;
}
