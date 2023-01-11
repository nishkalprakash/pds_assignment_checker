/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 8
description: counting no of words, sentences , vowels ,and frequencies particular strings 
*/ 




# include <stdio.h>


//a function to count the length of the string 
int len(char str[] ){
	int len ; 
	for(len = 0; str[len]!= '\0' ; len++);
	return len-1 ;

}

// a function to count the number of words
int n_words(char str[]){
	int words=0 ;
	for(int i = 0 ; str[i]!=0 ; i++){
		if(str[i]==' ') words ++ ;	
	}
	return words+1;
}

//a function to count number of sentences
int n_sentences(char str[]){
	int sent =0 ;
	for(int i=  0 ; str[i] != '\0' ; i++) {
		if(str[i]=='.') sent++ ;	
	}
	return sent ;
}

// a function to count the number of voweles
int n_voweles(char str[]){
	int vov =0 ;
	for(int i=0 ; str[i] != '\0' ; i++) {
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') vov++ ;	
	}
	return vov ;
}

//a function that change upper case to lower case and lower case to upper case
char casechanger(char A){
	char a ;
	if(A>='A' && A<= 'Z') return  (A +'a' - 'A');
	a=A;
	if(a>='a' && a<= 'z')  return (a +'A' - 'a');
	
}

//a function to count the frequencies of letters 
int n_frequency(char str[] , char A){
	int fre=0 ;
	char a = casechanger(A);
	for(int i=0 ; str[i]!= '\0'; i++){
		if (str[i] == A || str[i]== a) fre ++;
	}
	return fre ;
}

int main()
{
	char str[100];
	printf("enter the string \n");
	fgets(str,100,stdin);
	
	// printing the required output 
	printf("length of string = %d\n",len(str));
	printf("no of words = %d\n",n_words(str));
	printf("no of sentence = %d\n",n_sentences(str));
	printf("no of voweles = %d\n",n_voweles(str));

	for(char ch = 'a' ; ch <= 'z'; ch++){
		printf("frequency of %c is %d \n" , ch , n_frequency(str , ch));

	}
	
	

	return 0;
}
