/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:8*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char *word;
	int i=1;
	word=(char *)malloc(i*sizeof(char));
	while (word[i-1]!='\n'){
		i++;
		word=realloc(word,i*sizeof(char));
	}
	word[i-1]='\0';
	for (int j=0;j<i-1;j++){
		for (int k=j;k<i-1;k++){
			for (int s=1;s<i-1-j;s++){
				
			}
		}
	}
	return 0;
}