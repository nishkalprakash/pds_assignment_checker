#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void create(char ***sptr)
	{
	int n;
	printf("enter the numberin words");
	scanf("%d",&n);
        *sptr = (char**)malloc(n*sizeof(char*));
	for (int i=0;i<n;i++)
	{
	char word[100];
	scanf("%s",word);
	(*sptr)[i] = (char*)malloc(strlen(word)*sizeof(char));
	strcpy((*sptr)[i],word);
	
	}
	for(int i=0;i<n;i++){
	printf("%s\n",(*sptr)[i]);	
	}
}
	void lengthstat(char **sptr,int n)
	{
	int count1 =0,count2=0,count3=0;
	for(int i=0; i<n;i++){
	for(int g=0; ;g++){
	if(
}
printf("%d",len);
	if (len>=1&& len<=2){
	count1++;
	}if(len>=3&& len<=4){
	count2++;
	}
	else{
	count3++;
	}
	}
	printf("the number of length 1-2 is %d",count1);
	printf("the number of length 3-4 is %d",count2);
	printf("the number of length more then 4  is %d",count3);
}
	void countvowels(char**sptr,int n){
	int count[21]={0};
	char vowels[]="aeiou";
	for(int i=0;i<n;i++){
	  for(int j=0;j<strlen(sptr[i]);j++){
	  for(int k=0;k<5;k++){
	if (sptr[i][j]==vowels[k]){
	count[k]++;
	break;	
	}
	  
	}
	}
	}
	for(int i =0;i<5;i++){
	printf("number of occurenceof %c: %d\n",vowels[i],count[i]);}
}
	

 int main(){
	char **sptr;
	
	printf("enter the choice between 1 to 7");
	int a;
	scanf("%d",&a);
	if (a==1)
      create(sptr);
	else if (a==2){
	lengthstat(sptr,a);	
	}
else if(a==3){
	countvowels(sptr,a);	
	}
	return 0;

}




