#include <stdio.h>

int main()
{
int sum = 0;
char s1[10];
char s2[100];

printf("enter s1 : ");
scanf("%s",s1);

printf("enter s2 : ");
scanf("%s",s2);

for(int i=0; s2[i] != '\0'; i++) {
for(int j=0; s1[j] != '\0'; j++) {
if(s2[i+j] == s1[j]) {
sum = sum + 1;
}
}
}

printf("%d \n", sum);
return 0;
}
