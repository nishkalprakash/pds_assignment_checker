#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));

    int suma,sumb,digita,digitb,i;
    int round,pointsA=0,pointsB=0,badgeA=0,badgeB=0;
    int temp,A,B,pA,pB;
    int backup1,backup2;
    printf("Number of rounds: ");
    scanf("%d",&round);
    for(i=0;i<round;i++){
        printf("Round-%d --> ",i+1);
        int numA=(rand()%(1000-5+1))+5;
        int numB=(rand()%(1000-5+1))+5;
        A=0;
        B=0;
        pA=0;
        pB=0;
        backup1=numA;
        backup2=numB;
        for(digita=0;numA!=0;numA=numA/10){
            digita++;
        }
        for(digitb=0;numB!=0;numB=numB/10){
            digitb++;
        }
        numA=backup1;
        numB=backup2;
        for(suma=0;numA!=0;numA=numA/10){
            temp=numA%10;
            suma=suma+temp;
        }
        for(sumb=0;numB!=0;numB=numB/10){
            temp=numB%10;
            sumb=sumb+temp;
        }
        printf("A's number: %d   B's number: %d\n",backup1,backup2);
        if(digita>digitb){
            badgeA++;
            A++;
            pointsA+=digita;
            pointsB+=digitb;
            pA=digita;
            pB=digitb;
        }
        if(digitb>digita){
            badgeB++;
            B++;
            pointsA+=digita;
            pointsB+=digitb;
            pA=digita;
            pB=digitb;
        }
        if(digita==digitb){
            if(suma>sumb){badgeA++;A++;}
            else {badgeB++;B++;}
            pA=suma;
            pB=sumb;
            pointsA+=suma;
            pointsB+=sumb;
        }
        printf("            A's point: %d  B's point: %d\n",pA,pB);
        printf("            A's badge: %d  B's badge: %d\n",A,B);
        if(A)printf("            --A wins Round %d --\n",i+1);
        else printf("            --B wins Round %d --\n",i+1);
    }
    printf("Final result => A's total score: %d, B's total score: %d\n",pointsA*badgeA,pointsB*badgeB);
    if(pointsA*badgeA>pointsB*badgeB)printf("\t\t--A wins the game--");
    else printf("\t\t--B wins the game--");
    return 0;
}
