#include<stdio.h>
int main()
{
char S[20], P[20];
int i, j, k, flag;
printf ("Enter String and Pattern:\n");
scanf ("%s%s", S, P);
printf ("S = %s, P = %s \n", S, P);
k = 0;
for (i=0; S[i] != '\0'; i++) {
flag = 1;
for (j=0; P[j]!='\0'; j++)
if (S[i+j]!= P[j]) {flag = 0; break;}
if (flag == 1) k++;
}
printf("Number of Matches = %d \n", k);
}
