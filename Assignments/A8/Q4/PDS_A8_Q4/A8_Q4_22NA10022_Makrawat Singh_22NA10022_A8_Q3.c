/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 8
 Description : print the number of times the first string appears in the second string
 */

#include<stdio.h>
#include<math.h>

#define ll long long 
int strleng(char s[]){      //defining a function to calculate the length of the string
	int i=0;int count=0;
	do{
		count++;i++;
	}
	while(s[i]!='\0');
	return count;
}
int main(){
	char s1[100];char s2[100];
	printf("S1:");

	scanf("%s",&s1);
	printf("S2:");
	scanf("%s",&s2);
	int ls1=strleng(s1);int j=0;int count=0;
	for(int i=0;i<strleng(s2);i++){
		if(s2[i]==s1[0]){
			j=i;
			while(s2[j]==s1[j-i]){
				j++;
			}
			if(j==i+ls1){
				count++;
			}

		}
	}
	printf("%d\n",count+1);

}