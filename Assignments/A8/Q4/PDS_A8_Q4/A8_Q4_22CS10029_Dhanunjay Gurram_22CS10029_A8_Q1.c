#include <stdio.h>
#include <stdlib.h>
int main(){
	char *s1,*s2;
	int size_s1=1,count=0;
	printf("S1:");
	s1=(char *)malloc(size_s1*sizeof(char));
	scanf("%c",&s1[size_s1-1]);
	while (s1[size_s1-1]!='\n'){
	  size_s1++;
	  s1=realloc(s1,size_s1*sizeof(char));
	  scanf("%c",&s1[size_s1-1]);
	}
	int size_s2=1;
	printf("S2:");
	s2=(char *)malloc(size_s2*sizeof(char));
	scanf("%c",&s2[size_s2-1]);
	while (s2[size_s2-1]!='\n'){
	  size_s2++;
	  s2=realloc(s2,size_s2*sizeof(char));
	  scanf("%c",&s2[size_s2-1]);
	}
	for (int j=0;j<size_s2-size_s1;j++){
	  for (int k=0;k<size_s1-1;k++){
	    if (s2[j+k]!=s1[k]) break;
	    else if (k==size_s1-2) count++;
	  }
	}
	printf("%d\n",count);
	return 0;
}