#include <stdio.h>
#include<math.h>
int main(){
    float x1, y1, z1, x2, y2, z2, x3, y3, z3, k1, k2, k3;
    printf("A(x1,y1,z1) :");                   /*taking inputs*/
    scanf("%d%d%d",&x1,&y1,&z1);
    printf("\nB(x2,y2,z2):");
    scanf("%d%d%d",&x2,&y2,&z2);
    printf("\nC(x3,y3,z3):");
    scanf("%d%d%d",&x3,&y3,&z3);
    k1 = (x2-x1)/(x3-x1);             /*checking for the collinearity*/
    k2 = (y2-y1)/(y3-y1);
    k3 = (z2 -z1)/(z3-z1);
    if (k1 == k2){
        if (k1 == k3){
            printf("The given three points are collinear points\n");
        }
        else{
            printf("The given three points are not collinear\n");
        }
    }
    if(x1>x2){                                            /*checking for the collating sequence*/
            if (x1>x3){
                if (x2>x3){
                    Printf("A>B>C");
                }
                else{
                    printf("A>C>B");
                }
            }
            else if (x1 == x3){
                if (y1>y3){
                    printf("A>C>B");
                }
                else if (y1 == y3){
                    if (z1>z3){
                            printf("A>C>B");

                    }
                    else if(z3>z1){
                        printf("C>A>B");
                    }
                    else{
                        printf("C>A>B");
                    }
                }
            }

    }
    else if(x2>x1){
        if (x2>x3){
            if(x3>x1){
                printf("B>C>A");
            }
            else if (x1>x3){
                printf("B>A>C");
            }
            else{
                if (y1>y3){
                    printf("B>A>C");
                }
                else if (y3>y1){
                    printf("B>C>A");
                }
                else{
                    if(z3>z1){
                        printf("B>C>A");
                    }
                    else if (z1>z3){
                        printf("B>A>C");
                    }
                    else{
                        printf("B>C>A");
                    }
                }
            }

        }
        else if (x3>x2){
                printf("C>B>A");
                if (x2 == x3){
                    if (y2>y3){
                        printf("B>C>A");

                    }
                    else if(y3>y2){
                        printf("C>B>A");
                    }
                    else{
                        if(z3>z2){
                            printf("C>B>A");
                        }
                        else{
                            printf("B>C>A");
                        }
                    }
                }


        }
        else{
            if (y3>y2){
                printf("C>B>A");
            }
            else if(y2>y3){
                printf("B>C>A");
            }
            else{
                if (z2>z3){
                    printf("B>C>A");
                }
                else{
                    printf("C>B>A");
                }
            }

        }

    }
    return 0;



}

