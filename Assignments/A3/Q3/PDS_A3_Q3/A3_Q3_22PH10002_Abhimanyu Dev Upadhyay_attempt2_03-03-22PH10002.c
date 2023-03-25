//22PH10002

#include <stdio.h>
#include <math.h>

int main(){
    //Initialization
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;

    //Scanning
    printf("A(x1,y1,z1) : ");
    scanf("%f%f%f", &x1, &y1, &z1);
    printf("\nB(x2,y2,z2) : ");
    scanf("%f%f%f", &x2, &y2, &z2);
    printf("\nC(x3,y3,z3) : ");
    scanf("%f%f%f", &x3, &y3, &z3);

    //Printing each point
    printf("\nA(x1,y1,z1) : %.2f %.2f %.2f \n", x1,y1,z1);
    printf("B(x2,y2,z2) : %.2f %.2f %.2f \n", x2,y2,z2);
    printf("C(x3,y3,z3) : %.2f %.2f %.2f \n\n", x3,y3,z3);

    //Collinear Checking
    float d12, d23, d31;
    d12 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
    d23 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))+((z2-z3)*(z2-z3)));
    d31 = sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1))+((z3-z1)*(z3-z1)));

        //The logic is that distance between any 2 points on a line is equal to the sum of distance of both the points from any internal point on the line
    if((d12 + d23 == d31)||(d23 + d31 == d12)||(d12 + d31 == d23)){
        printf("The given three points are collinear.\n\n");
    }
    else{
        printf("The given three points are not collinear.\n\n");
    }

    //Collating Checking
        //If all x are equal
    if(x1==x2&&x1==x3){
            //If all y are also equal
        if(y1==y2&&y1==y3){
            // Checking z
            // All z are equal
            if(z1==z2&&z1==z3){
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
            //Two z are equal
            else if(z1==z2){
                if(z1 < z3){
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            else if(z2==z3){
                if(z2 < z1){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
            }
            else if(z3==z1){
                if(z3 < z2){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            //All different z
            else{
                if(z1<z2&&z1<z3){
                    if(z2<z3){
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                    }
                    else{
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                    }
                }
                else if(z2<z3&&z2<z1){
                    if(z1<z3){
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                    }
                    else{
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                    }
                }
                else if(z3<z1&&z3<z2){
                    if(z1<z2){
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                    }
                    else{
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                    }
                }
            }
            }
            //Taking pairwise y equal
        else if(y1==y2){
            if(y3<y1){
                if(z1<z2){
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }

            }
            else{
                if(z2<z1){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
            }
        }
        else if(y2==y3){
            if(y1<y2){
                if(z2<z3){
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            else{
                if(z2<z3){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
            }
        }
        else if(y3==y1){
            if(y2<y1){
                if(z3<z1){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
            }
            else{
                if(z3<z1){
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
        }
            //All y are unequal
        else{
            if(y1<z2&&y1<y3){
                    if(y2<y3){
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                    }
                    else{
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                    }
                }
            else if(y2<y3&&y2<y1){
                    if(y1<y3){
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                    }
                    else{
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                    }
                }
            else if(y3<y1&&y3<y2){
                    if(y1<y2){
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                        printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                    }
                    else{
                        printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                        printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                        printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                    }
                }
        }


    }
        //Taking pairwise x equal
    if(x1==x2){
        if(x3<x1){
            if(y2<y1){
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
            }
            else if(y2==y1){
                if(z2<z1){
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            else{
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
            }
        }
        else{
            if(y2<y1){
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
            else if(y2==y1){
                if(z2<z1){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
            }
            else{
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
        }
    }
    else if(x2==x3){
        if(x1<x2){
            if(y2<y3){
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
            else if(y2==y3){
                if(z2<z3){
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            else{
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
            }
        }
        else{
            if(y2<y3){
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
            }
            else if(y2==y3){
                if(z2<z3){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
            }
            else{
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
            }
        }
    }
    else if(x3==x1){
        if(x2<x3){
            if(y1<y3){
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
            else if(y1==y3){
                if(z2<z3){
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
                }
                else{
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
                }
            }
            else{
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
            }
        }
        else{
            if(y1<y3){
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
            }
            else if(y1==y3){
                if(z1<z3){
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
                else{
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
                }
            }
            else{
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
            }
        }

    }
    else{
        if(x1<x2&&x1<x3){
            if(x2<x3){
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);
            }
            else{
                printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);
            }
        }
        else if(x2<x1&&x2<x3){
            if(x1<x3){
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("C(%.2f,%.2f,%.2f)",x3, y3, z3);

            }
            else{
                printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);

            }
        }
        else if(x3<x1&&x3<x2){
            if(x1<x2){
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("A(%.2f,%.2f,%.2f) <",x1, y1, z1);
                    printf("B(%.2f,%.2f,%.2f)",x2, y2, z2);

            }
            else{
                printf("C(%.2f,%.2f,%.2f) <",x3, y3, z3);
                    printf("B(%.2f,%.2f,%.2f) <",x2, y2, z2);
                    printf("A(%.2f,%.2f,%.2f) ",x1, y1, z1);
            }
        }
    }
    return 0;
}
