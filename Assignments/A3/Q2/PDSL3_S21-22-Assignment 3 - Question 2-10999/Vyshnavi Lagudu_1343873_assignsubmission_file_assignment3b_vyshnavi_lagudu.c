/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
comments         : all are integers
*/
#include<stdio.h>

int main() {
    char S1[10], S2[10];
    printf("Sequence1   ");
    scanf("%s", &S1);
    printf("\n");
    getchar();
    printf("Sequence2   ");
    scanf("%s", &S2);
    printf("\n");
    int i = 0;
    int k = 0;
    printf("Penalty   ");
    while(i<10){
        if(S1[i]==S2[i]){
            printf("0 ");
        }
        else if(S1[i]=='-' || S2[i]=='-'){
            printf("2 ");
            k = k+2;
        }
        else if(S1[i]!=S2[i]){
            printf("1 ");
            k = k+1;
        }
        i++;
    }
    printf("\n");
    printf("similarity score = %d", k);
}
