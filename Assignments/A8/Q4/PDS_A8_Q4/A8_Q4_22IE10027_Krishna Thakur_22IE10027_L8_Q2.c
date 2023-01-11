#include<stdio.h>

int main(){
	char A1[50];
	char A2[50];
	scanf("%s", A1);
	scanf("%s", A2);
	int i=0;
	int count=0;
	int k=0;
	while(A1[k]!='\0'){//counting the number of characters in string 1
		k++;
	}
	while(A2[i]!='\0'){//iterating the second string to check for instances of first string 
		if(A2[i]==A1[0]){
			int j=0;
			int l=0;
			while(A1[j]!='\0'){//checking for first string to be subset 
				if(A2[i+j]==A1[j]){
					l++;
				}
				j++;


			}
			//printf("l is %d, k is %d\n", l, k);
		if(l==k){
			count=count+1;
		}
		}
		i++;
	}
	printf("The Number of times the string occurs as a subset is %d\n", count);
	
	return 0;
}