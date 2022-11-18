/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct def
typedef struct{
    int n;
    float coeff[100];
    int exp[100];
}poly;

//func to convert string to poly datatype
poly to_poly(char a[300]){
    poly p;
    int c1=0,c2=0;
    int n=strlen(a);
    for (int i=0;i<n+1;i++){
        if (a[i]=='x'){
            if (a[i-1]=='+'){
                p.coeff[c1]=1;
                c1++;
            }
            else if(a[i-1]=='-'){
                p.coeff[c1]=-1;
                c1++;
            }
            else {
                if (i>=2){
                    if (a[i-2]=='-'){
                        p.coeff[c1]=(-1)*atoi(a[i-1]);
                        c1++;
                    }
                   else{
                        p.coeff[c1]=atoi(a[i-1]);
                        c1++;
                    }
                }
            }
        }
        else if (a[i]=='x' && a[i+1]!='^'){
            p.exp[c2]=1;
            c2++;
        }
        else if (a[i]=='^'){
            p.exp[c2]=atoi(a[i+1]);
            c2++;
        }
        else if (a[i]!='+' || a[i]!='-'){
            p.coeff[c1]=atoi(a[i]);
            p.exp[c2]=0;
            c1++;
            c2++;
        }
    }
    
    p.n=c1;
    return p;
}

int main(){
    poly p1,p2;

    char s1[300],s2[300];
    printf("enter the first polynomial: ");
    scanf("%s",s1);
    printf("enter the second polynomial: ");
    scanf("%s",s2);

    p1=to_poly(s1);
    p2=to_poly(s2);

    printf("%d",p1.n);

    return 0;

}