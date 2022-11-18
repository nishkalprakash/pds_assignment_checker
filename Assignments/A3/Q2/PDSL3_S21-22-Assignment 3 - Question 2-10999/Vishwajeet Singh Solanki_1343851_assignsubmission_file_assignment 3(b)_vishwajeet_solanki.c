/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:3(b)
*/
#include<stdio.h>

int main(){
char a[10],b[10];
int c[10],i,score=0;

printf("Sequence 1 :\n");
scanf("%s",a);

printf("Sequence 2 :\n");
scanf("%s",b);

for(i=0;i<=9;i++){
if((a[i]!=b[i]) && (b[i]!='-')){
    c[i]=1;
}
else if (a[i]==b[i])
    c[i]=0;

if (b[i]=='-'){
    c[i]=2;
}
}
printf("Penalty : ");
for(i=0;i<=9;i++){
    printf("%d",c[i]);
    score+=c[i];
}
printf("\n");
printf("Similarity score = %d",score);

return 0;
}
