#include<stdio.h>
int main()
{char A[100], B[5] ={'a', 'e', 'i', 'o', 'u’};
int i, j, len, C[5]= {0,0,0,0,0};
scanf ("%s", A);
printf ("A = %s\n", A);
for (len = 0; A[len] != '\0'; len++);
printf ("Length = %d\n", len);
for (i=0; i<len; i++){
for (j=0; j<5; j++) {
if(A[i] == B[j]) C[j]++;
}
}
for (j=0; j<5; j++)
printf ("Number of %d= %d \n", B[j], C[j]);

}

