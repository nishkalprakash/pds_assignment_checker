/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
/*Rearranges a,b,c in ascending order*/
void ascending(int *aptr,int *bptr,int *cptr){
    int t,w;
    if ((*aptr<*bptr)&&(*aptr<*cptr)){
        if (*bptr<*cptr){
            return;
        }
        else{
            t=*bptr;
            *bptr=*cptr;
            *cptr=t;
        }
    }
    else if ((*bptr<*cptr)&&(*bptr<*aptr)){
        if (*cptr<*aptr){
            t=*aptr;
            *aptr=*bptr;
            w=*cptr;
            *bptr=w;
            *cptr=t;
        }
        else{
            t=*aptr;
            *aptr=*bptr;
            w=*cptr;
            *bptr=t;
            *cptr=w;
        }
    }
    else if ((*cptr<*aptr)&&(*cptr<*bptr)){
            if (*bptr<*aptr){
            t=*aptr;
            *aptr=*cptr;
            *cptr=t;
            }
            else{
            t=*aptr;
            *aptr=*cptr;
            w=*bptr;
            *bptr=t;
            *cptr=w;
            }
    }
    return;
}
int main(){
int a,b,c;
printf("Enter a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
printf("----Before function call----\n");
printf("Values of a,b,c=%d,%d,%d",a,b,c);/*a,b,c before calling function*/
printf("address of a=%u\naddress of b=%u\n,address of c=%u\n",&a,&b,&c);/*addresses before function call*/
ascending(&a,&b,&c);
printf("----After function call----\n");
printf("Values of a,b,c=%d,%d,%d",a,b,c);/*a,b,c after function call*/
printf("address of a=%u\naddress of b=%u\n,address of c=%u\n",&a,&b,&c);/*addresses after function call*/
return 0;
}
