/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 8
	Description : program prints how many times first string appears in the second one
*/
#include <stdio.h>



int main()
{
	char s1[100],s2[100];
	int count = 0;
	printf("Enter the two strings(program prints how many times first string appears in the second one) :\n");
	scanf("%s",s1);

	scanf("%s",s2);

	for (int i = 0; s2[i]!='\0' ; ++i)
	{
		
		if (s2[i]==s1[0])
		{
			int flag=1;

			for (int j = 0; s1[j]!='\0'; ++j)
				if (s2[i+j]!=s1[j])
				{
					flag=0;
					break;
				}

			if(flag)
				count++;
		}
	}

	printf("Number of times \"%s\" appears in \"%s\" : %d\n",s1,s2,count);

	return 0;
}