// To find the longest repeating pattern
// Roll No: 24NA10049
// Name   : Prateek Shambhu Kesavarapu

#include <stdio.h>
#define N 100
#define M 10

int main(){
	char haystack[N], needle[M];
	int hayLen = 0, needleLen = 0;
	printf("Haystack: ");
	scanf("%s", haystack);
	while(haystack[hayLen] != '\0'){
		if(haystack[hayLen] != 1 && haystack[hayLen] != 0){
			printf("Error: Invalid character in the haystack\n");
		}
		hayLen++;
	}
	
	printf("Needle: ");
	scanf("%s", needle);

	while(needle[needleLen] != '\0'){
		if(needle[needleLen] != 1 && needle[needleLen] != 0){
			printf("Error: Invalid character in the haystack\n");
		}
		needleLen++;
	}
	
	int count, last = -1;
	int indexes[hayLen];
	if(needleLen <= hayLen){
		int i, j = 0;
		for(i = 0; i < hayLen; i++){
			
			int truth = 0;
			if(haystack[i + j] == needle[j]){
				truth++;
				printf(needle[i]);
				j++;
			}
			
			if((truth == needleLen)){
				count++;
			}
		}
	}
	else{
		printf("Error: needle_len > haystack_len\n");
	}
	return 0;
}
