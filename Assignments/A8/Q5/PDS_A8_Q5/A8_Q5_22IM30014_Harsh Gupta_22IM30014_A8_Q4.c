/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 8
Description - 
*/


#include <stdio.h>
#include<string.h>
int palin(char s[1000]){
	
	int mid=strlen(s)/2;
	if (strlen(s)%2==1){
		
		
		for(int i=1;i<=mid;i++){
			if (s[mid-i]==s[mid+1]){
				continue;
			}else return 0 ;
		}
	}else {
		for(int i=mid-1;i<=mid-1;i--){
			if (s[i+1]==s[strlen(s)-mid]){
				continue;
			}else return 0 ;
	}
	} 
	printf("%s",s);
	return 1;
}

int main() {
    	char s[1000];
    	scanf("%s",&s);
    	for (int i=0;i<strlen(s);i++){
    			char arr[100];

    			arr[0]=s[i];
    		for (int j=i+1;j<strlen(s);j++){
    			 arr[j-i]=s[j];
    			 palin("abba");
    			 printf("%s",arr);


    			
    		}
    	}
    	
	
    return 0;
    
    
}