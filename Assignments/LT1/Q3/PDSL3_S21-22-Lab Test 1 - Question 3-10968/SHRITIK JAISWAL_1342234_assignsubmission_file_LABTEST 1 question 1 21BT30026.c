//Mac-OS
//shritik jaiswal
//ROLL-21BT30026
//Sec- 3
#include <stdio.h>          
#include <string.h>  
#include<time.h>
#include<stdlib.h>
int digits(int a)
{
    int c=0;
    while(a>0)
    {
        c++;
        a=a/10;
    }
    return c;
}
int sum(int a)
{
    int c=0;
    while(a>0)
    {
        c+=a%10;
        a=a/10;
    }
    return c;
}
int main()
{
    int n;
    printf("Number of rounds = ");
    scanf("%d",&n);
    int na,nb,scorea=0,scoreb=0,aw=0,bw=0,da,db,suma=0,sumb=0;
    for(int i=1;i<=n;i++)
    {
        na = (rand() % (1000 - 5 + 1)) + 5;
        da= digits(na);
        printf("A's no. is %d.\n",na);
        
        nb = (rand() % (1000 - 5 + 1)) + 5;
        printf("B's no. is %d.\n",nb);
        db= digits(nb);
        
        if(da!=db)
        {
            scorea+=da;
            printf("A's point: %d\n",da);
            scoreb+=db;
            printf("B's point: %d\n",db);
            if(da>db){
            aw++;
                printf("\nA's badge: 1    B's badge: 0 ");
                printf("\nA wins round %d\n",i);
            }
            else{
            bw++;
             printf("\nA's badge: 0    B's badge: 1 ");
            printf("\nB wins round %d\n",i);
            }
        }
        else
        {
            suma=sum(na);
            sumb=sum(nb);
            scorea+=suma;
            printf("A's point: %d\n",suma);
            scoreb+=sumb;
            printf("B's point: %d\n",sumb);
            if(suma>sumb){
            aw++;
                printf("A's badge: 1    B's badge: 0 ");
                printf("\nA wins round %d\n",i);
            }
            else{
            bw++;
             printf("A's badge: 0    B's badge: 1 ");
            printf("\nB wins round %d\n",i);
            }
        }
    }
    printf("\nFinal result\n");
    printf("A's total score: %d\n",scorea*aw);
    printf("B's total score: %d\n",scoreb*bw);
}