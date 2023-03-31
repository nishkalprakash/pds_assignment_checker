/*
*Section 2
* Roll No : 22MI10040
* Name : Mrinmoy Dey
* Assignment No : 4
* Description : Program to find magic number
*/
#include <stdio.h>
int main(){
    char p;
    int i=0;
    int flag1 = 0,flag2==0,flag3==0,flag4==0;
    printf("Enter the password::\n");
    do{
        scanf("%c",&p);
        i++;
        if ((p<'A')||(p>'Z') && i ==1){
                flag1++;
                }

        if ((p<'0')||(p>'9')) {
                flag2++;
                }


        if (p==' ') {
                flag3++;
                }
        if (p!='@' || p!='#' || p!='&'||p!='$'||'%'){
            flag4++
        }


    }while (p!='\n');
}

