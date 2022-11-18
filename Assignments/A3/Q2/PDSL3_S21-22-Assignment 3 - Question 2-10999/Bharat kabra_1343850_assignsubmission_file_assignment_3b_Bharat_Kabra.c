/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 3
*/
#include<stdio.h>
int strln(char s[])
{
    int len = 0;
    while (*(s++) != '\0' )
    {
        len++;
    }
    return len;
}

int main() {
    char s1[100], s2[100];
    scanf("%s",s1);
    scanf("%s",s2);

    int l1 = strln(s1);
    int l2 = strln(s2);
    int max = l1>l2? l1 : l2;
    int min = l1>l2? l2 : l1;
    // printf("%d %d ", max, min);
    int s=0;

    //case 1
    if (l1==l2){
        for (int i=0; i <l1; i++){
            if (s1[i] == s2[i]){
                s= s;
            }
            else{
                s = s+1;
            }
        }
        printf("%d", s);
    }

    //case 2

    else if ((l1-l2) == 1 || (l1-l2) == -1){
         for (int i=0; i <max; i++){


         }

    }


}
