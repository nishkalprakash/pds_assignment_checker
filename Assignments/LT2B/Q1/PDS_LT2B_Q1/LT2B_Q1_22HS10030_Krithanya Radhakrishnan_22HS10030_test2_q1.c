/* 
NAME: KRITHANYA
SET: b
*/

#include <stdio.h>
#include <stdlib.h>
struct SET{
	char data;
	struct SET *next;
};
int main()
{
char arr1[10],arr2[10],s1,s2,t1;
struct SET*l1;
struct SET*l2;
int i;
l1=(struct SET*)malloc(sizeof(struct SET));
l2=(struct SET*)malloc(sizeof(struct SET));
printf("enter strng 1\n");
scanf("%s",&s1);
printf("enter strng 2\n");
scanf("%s",&s2);
s1=t1;
arr1[10]=t1;
for(i=0;i!='\0';i++)
{
printf("%c",arr1[i]);
}
return 0;
}
