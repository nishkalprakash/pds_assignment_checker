/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>

int main() {


int len_a=0, len_b=0, penalty=0;
char a[50], b[50];

printf("enter first sequence\n");
scanf("%s", a);
printf("enter second sequence\n");
scanf("%s", b);

for(int i=0; a[i]!='\0'; i++) len_a++;
for(int j=0; b[j]!='\0'; j++) len_b++;

printf("%d %d\n", len_a, len_b);

if(len_a==len_b){
    for(int k=0; k<len_a; k++){
        if(a[k]!=b[k]) penalty++ ;
    }
printf("similarity score=%d\n", penalty);
}








return 0;
}
