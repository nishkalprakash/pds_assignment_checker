/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 8
QUESTION NO.: 1
DESCRIPTION: finds number of occurence of one string in another
*/
#include <stdio.h>
#include <stdlib.h>
int length(char s[]){
	int c=0;
	for(int t=0;*(s+t)!='\0';t++)
		c++;
	return c;
}
int main(){
	char s1[100],s2[100];
	int len1,len2,r;
	r=0;
	printf("S1: ");
	scanf("%s",s1);
	printf("S2: ");
	scanf("%s",s2);
	len1=length(s1);
	len2=length(s2);
	for(int t=0;t<len2;t++){
		int c=0; 
		for(int i=t;i<t+len1;i++){
			if(s1[i-t]==s2[i]){
				c++; 
			}
			
		}
		if(c==len1)
			r++;
	}
	printf("%d",r);
}