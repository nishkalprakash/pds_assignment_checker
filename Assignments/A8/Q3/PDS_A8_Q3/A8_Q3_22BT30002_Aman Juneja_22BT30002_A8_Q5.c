/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 8
QUESTION :TO TAKE a text message from the keyboard and store message in an array

*/

#include<stdio.h>
#include<string.h>

//function to count number of words
int now(char * str,int len){
	int ans=0;
	for(int j=0;j<len;j++){
		if(str[j]==' ')
			ans++;	
	}
	ans++;
	return ans;

}

//function to count number of sentences
int nos(char * str,int len){
	int ans=0;
	for(int j=0;j<len;j++){
		if(str[j]=='.')
			ans++;	
	}
	return ans;

}

//function to check number of vowels
int nov(char * str,int len){
	int ans=0;
	for(int j=0;j<len;j++){
		if(str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U' || str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' )
			ans++;	
	}
	return ans;

}



int main(){
	
	char str1[101];
	int i=0;
	int freq[26]={0};		//frequency array to check frequency of each alphabet

	char c;
	//taking string1 input
  	scanf("%c",&c);
	
  	while(c!='\n'){
		str1[i]=c;
    		++i;
    		scanf("%c",&c);
  	}
	str1[++i]='\0';							//adding null character to terminate string

	int l=strlen(str1);
	printf("length counted without using library : %d\n",i-1);	//-1 as it also include null character
	printf("length using strlen() : %d\n",l-1);			//l-1 as it also counts null character


	printf("Number of words : %d\n",now(str1,i-1));

	printf("Number of sentences : %d\n",nos(str1,i-1));

	printf("Number of vowels : %d\n",nov(str1,i-1));
	

	//loops to check frequency of each character
	printf("Frequency count of each alphabet : \n");
	for(int k=0;k<27;k++){
		for(int j=0;j<i-1;j++){
			if(str1[j]==65+k || str1[j]==97+k){
				freq[k]++;			
			}	
									
		}
	}
	
	//printing frequencies
	for(int q=0;q<27;q++){
		if(freq[q]!=0){
			printf("%c = %d\n",'a'+q,freq[q]);
		}
	}
	  
	return 0;
}
