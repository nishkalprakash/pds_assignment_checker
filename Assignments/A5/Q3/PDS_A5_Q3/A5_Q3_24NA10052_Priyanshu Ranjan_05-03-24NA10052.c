#include <stdio.h>
#include <string.h>

int main(){
	//initialising the variables
	int i=1,j=0,l=0,z=1;
	//initialising the array
	char array [100];
	//initialsising needle
	char needle[10];
	//taking inputs in a array 
	scanf("%s",array);
	//taking inputs of needle 
	
	scanf("%s",needle);
	//printing heystack
	printf("Heystack: ");

	printf("%s\n", array);
	//printing needle
	printf("Needle :");#include <string.h>

	printf("%s",needle);
	printf("%lu\n", strlen(array));
	printf("%lu\n", strlen(needle));
}
