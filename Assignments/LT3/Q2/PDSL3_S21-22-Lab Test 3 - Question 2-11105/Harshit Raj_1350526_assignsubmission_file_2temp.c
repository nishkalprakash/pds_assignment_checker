/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/

#include<stdio.h>
#include<math.h>

struct pol{
    int terms;
    int coff[1000];
    int exp[1000];
};
int main(){

    struct pol poly1,poly2;
    int i,j;

    printf("enter number of terms of first polynomial\n");
    scanf("%d",&poly1.terms);

    printf("enter coeffecients of first polynomial :\n");
    for(i=0;i<poly1.terms;i++){
        scanf("%d",&poly1.coff[i]);
    }
    printf("enter exponents of first polynomial :\n");
    for(i=0;i<poly1.terms;i++){
        scanf("%d",&poly1.exp[i]);
    }

    printf("enter number of terms of second polynomial\n");
    scanf("%d",&poly2.terms);

    printf("enter coeffecients of second polynomial :\n");
    for(i=0;i<poly2.terms;i++){
        scanf("%d",&poly2.coff[i]);
    }

    printf("enter exponents of second polynomial :\n");
    for(i=0;i<poly1.terms;i++){
        scanf("%d",&poly2.exp[i]);
    }

    struct pol ans;  // final polynomial after multiplication
    ans.terms=poly1.terms*poly2.terms;
    int ans_coff=0,ans_exp=0;
    for(i=0;i<poly1.terms;i++){
        for(j=0;j<poly2.terms;j++){
            ans.coff[ans_coff]=poly1.coff[i]*poly2.coff[j];ans_coff++;
        }
    }
    for(i=0;i<poly1.terms;i++){
        for(j=0;j<poly2.terms;j++){
            ans.exp[ans_exp]=poly1.exp[i]+poly2.exp[j];ans_exp++;
        }
    }
    int finalcoff[100],finalexp[100];int k=0;
    for(i=0;i<ans_coff;i++){
        if(i==ans_coff-1){
            printf("%dx^%d + ",ans.coff[i],ans.exp[i]);break;
        }
        printf("%dx^%d + ",ans.coff[i],ans.exp[i]);

    }
    return 0;
}
