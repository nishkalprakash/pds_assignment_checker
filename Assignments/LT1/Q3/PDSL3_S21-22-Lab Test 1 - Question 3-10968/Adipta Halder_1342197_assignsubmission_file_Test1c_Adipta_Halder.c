/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3

Test : 1c
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int n,a,b,i,q,r,digita,digitb,badgea,badgeb,suma,sumb,tota=0,totb=0,sba=0,sbb=0;
    printf("Number of rounds: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        digita=0;
        digitb=0;
        suma=0;
        sumb=0;
        printf("\nRound - %d -->  ",i);
        a=(rand() % (1000-5+1)) + 5;
        b=(rand() % (1000-5+1)) + 5;
        printf("A's number: %d     ",a);
        printf("B's number: %d ",b);
        q=a;
        do{
            r=q%10;
            q=q/10;
            digita++;
            suma=suma+r;
        }while(q>0);
        q=b;
        do{
            r=q%10;
            q=q/10;
            digitb++;
            sumb=sumb+r;
        }while(q>0);

        if(digita>digitb){
        printf("\nA's point: %d     ",digita);
        printf("B's point: %d ",digitb);
            badgea=1;
            badgeb=0;
            sba=sba+badgea;
            sbb=sbb+badgeb;
            printf("\nA's badge: %d     ",badgea);
            printf("B's badge: %d ",badgeb);
            tota=tota+digita;
            totb=totb+digitb;
            if(badgea==1){
            printf("\n-- A wins Round %d --",i);
        }
            else{
            printf("\n-- B wins Round %d --",i);
        }
        }
        else if(digitb>digita){
        printf("\nA's point: %d     ",digita);
        printf("B's point: %d ",digitb);
            badgeb=1;
            badgea=0;
             sba=sba+badgea;
            sbb=sbb+badgeb;
            printf("\nA's badge: %d     ",badgea);
            printf("B's badge: %d ",badgeb);
            tota=tota+digita;
            totb=totb+digitb;
            if(badgea==1){
            printf("\n-- A wins Round %d --",i);
        }
            else{
            printf("\n-- B wins Round %d --",i);
        }
        }
        else if(digitb==digita){
            if(suma>sumb){
                printf("\nA's point: %d     ",suma);
                printf("B's point: %d ",sumb);
                badgea=1;
                badgeb=0;
                sba=sba+badgea;
                sbb=sbb+badgeb;
                tota=tota+suma;
                totb=totb+sumb;
            }
            else if(sumb>suma){
                printf("\nA's point: %d     ",suma);
                printf("B's point: %d ",sumb);
                 badgeb=1;
                 badgea=0;
                sba=sba+badgea;
                 sbb=sbb+badgeb;
                 tota=tota+suma;
                 totb=totb+sumb;
        }
        //this case is not mentioned in the problem so I make both winners if tie cannot be broken by sum . this anyway should not affect the result
        else if(sumb==suma){
                 printf("\nA's point: %d     ",suma);
                printf("B's point: %d ",sumb);
                 badgeb=1;
                 badgea=1;
                 sba=sba+badgea;
                 sbb=sbb+badgeb;
                 tota=tota+suma;
                 totb=totb+sumb;
        }
        printf("\nA's badge: %d     ",badgea);
        printf("B's badge: %d ",badgeb);
        if(badgea==1){
            printf("\n-- A wins Round %d --",i);
        }
        else{
            printf("\n-- B wins Round %d --",i);
        }
    }
    }
    printf("\nFinal result => A's total score: %d, B's total score: %d",(tota*sba),(totb*sbb));
    if((tota*sba)>(totb*sbb)){
        printf("\n-- A wins the game --");
    }
    else if((tota*sba)<(totb*sbb)){
        printf("\n-- B wins the game --");
    }
 return 0;
}
