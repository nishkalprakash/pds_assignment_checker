#include<stdio.h>
#include<string.h>
int  main()
{
	char str1[100],str2[100];char *p,*q;int i,j;int k=0;

	printf("Enter two strings");
	scanf("%s %s",str1,str2);
	
	int c=strlen(str1);
p=str1;
q=str2;

	while(*p!='\0')
	{
		for(i=0;i<c;i++)
		{
			if(*p==*(q+i))
				k++;


		}
		p++;

	}
	if(k==c)
{
printf("Anagram");
}
else{
printf("Not Anagram");
}
return 0;


}
