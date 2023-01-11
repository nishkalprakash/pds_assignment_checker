/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 8 
Description - 
*/


#include <stdio.h>
 
int main() {
	char s1[100],s2[100];
	printf("S1  ");
	scanf("%s",&s1);             // taking first string 
	printf("S2  ");
	scanf("%s",&s2);                  // taking second string 
	int ls1=strlen(s1),j=0,count=0;
	for (int i=0;i<strlen(s2);i++){        
		if (s2[i]==s1[0]){                         // matching first alpha bet 
			int hsh=1;
			for (int j=1;j<strlen(s1);j++){ 
				if (s2[i+j]==s1[j]){                   
					continue;
				}else {
					hsh=0;                    // if it does not match 
					break;
				}
			}
			if (hsh==1) count++;
		}else continue;
	}	
	printf("%d",count);                     // priting the count 
    return 0;
    
    
}
