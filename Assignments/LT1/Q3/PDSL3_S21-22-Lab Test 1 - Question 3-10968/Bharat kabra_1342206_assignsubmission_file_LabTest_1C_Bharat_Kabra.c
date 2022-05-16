/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Lab Test: 1
*/
#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int n;
    printf("Number of rounds:");
    scanf("%d",&n);
    int x,xl;
    int y,yl;
        int xp=0;
        int yp=0;
        int xw=0;
        int yw=0;
    for(int i=0;i<n;i++){
        printf("Round-%d\n",i+1);
        int xs=0;
        int ys=0;
        x = (rand() % (1000 - 5 + 1)) + 5;
        y = (rand() % (1000 - 5 + 1)) + 5;
        printf("A s number: %d B s number: %d\n",x,y);
        for(xl=0;x!=0;xl++){
            xs=x%10;
            x=x/10;
        }
        for(yl=0;y!=0;yl++){
            ys=y%10;
            y=y/10;
        }
        if(xl>yl){
            xw++;
            printf("A s badge: 1 B s badge: 0");
            xp+=xl;
            yp+=yl;
            printf("A s point: %d B s point: %d\n",xl,yl);
            printf("--A wins round %d--\n",i+1);
        }else if(yl>xl){
            yw++;
            printf("A s badge: 0 B s badge: 1");
            xp+=xl;
            yp+=yl;
            printf("A s point: %d B s point: %d\n",xl,yl);
            printf("--B wins round %d--\n",i+1);
        }else if(xl==yl){
            printf("A s point: %d B s point: %d\n",xs,ys);
            if(xs>ys){

                xw++;
                printf("A s badge: 1 B s badge: 0\n");
                xp+=xs;
                yp+=ys;
                printf("--A wins round %d--\n",i+1);

            }else{
                yw++;
                printf("A s badge: 0 B s badge: 1\n");
                xp+=xs;
                yp+=ys;
                printf("--B wins round %d--\n",i+1);

            }
        }
    }

    printf("Final result => A's total score: %d, B's total score: %d\n",xp*xw,yp*yw);
    if(xp*xw>yp*yw){
            printf("-- A wins the game --");
    }else if(xp*xw<yp*yw){
            printf("-- B wins the game --");
    }else if(xp*xw==yp*yw){
            printf("-- The game is tied --");
    }
    return 0;
}
