/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>

int main() {

char u[50], p[50];
int len_u=0, len_p=0, count_char_equality=0, count_ucase=0, count_lcase=0, count_spchar=0, consecutive_i=0, consecutive_ch=0;

printf("enter username:\n");
scanf("%s", u);
printf("enter password:\n");
scanf("%s", p);

for(int i=0; u[i]!='\0'; i++) len_u++;
for(int j=0; p[j]!='\0'; j++) len_p++;

if(len_u==len_p){
    for (int i=0; i<len_u; i++){
        if(u[i]!=u[i]){
                count_char_equality++;
                break;
        }
    }
}

for (int i=0; i<len_p; i++){
        if(u[i]=='$'|| '*' || '+' || '/' || '#' || '@' || '<' || '>' || '?' || '_' || '!') count_spchar++;
        if(u[i]>='a' && u[i]<='z') count_lcase++;
        if(u[i]>='A' && u[i]<='Z') count_ucase++;
        for(int j=i; j<=i+5; j++){
            if (p[j]>=48 && p[j]<=57) consecutive_i++;

        }

}





if(len_p<8 || len_p>15 || count_char_equality==1 || count_spchar<2 || count_lcase<1 || count_ucase<1 || consecutive_i>5 ) printf("not acceptable\n");
else printf("acceptable");









return 0;
}
