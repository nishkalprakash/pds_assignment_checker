#include <stdio.h>
int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3,flag;
    printf("A(x1,y1,z1) : ");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("B(x2,y2,z2) : ");
    scanf("%f %f %f",&x2,&y2,&z2);
    printf("C(x3,y3,z3) : ");
    scanf("%f %f %f",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%.2f,%.2f,%.2f)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%.2f,%.2f,%.2f)\n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%.2f,%.2f,%.2f)\n",x3,y3,z3);
    flag = x1*(y2*z3-z2*y3) + y1*(z2*x3-x2*z3) + z1*(x2*y3-y2*x3);
    if (flag==0){
        printf("The given three points are collinear\n");
    }
    else{
        printf("The given three points are not collinear\n");
    }
    if (x1>x2 && x1>x3){
        if (x2>x3){
            printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
        }
        else if(x3>x2){
            printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
        }
    }
    else if (x2>x1 && x2>x3){
        if (x1>x3){
            printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
        }
        else if(x3>x1){
            printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
        }
    }
    else if (x3>x2 && x3>x1){
        if (x1>x2){
            printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
        }
        else if (x2>x1){
            printf("C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
        }
    }
    else if (x1==x2 && x3>x1){
        if (y1>y2){
            printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
        }
        else if (y2>y1){
            printf("C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
        }
        else if(y1==y2){
            if (z1>z2){
                printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            }
            else if (z2>z1){
                printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            }
        }
    }
    else if (x1==x2 && x3<x1){
        if (y1>y2){
            printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
        }
        else if (y2>y1){
            printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
        }
        else if(y1==y2){
            if (z1>z2){
                printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            else if (z2>z1){
                printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
        }
    }
    else if (x2==x3 && x1>x3){
        if (y2>y3){
            printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
        }
        else if (y3>y2){
            printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
        }
        else if(y2==y3){
            if (z2>z3){
                printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            else if (z3>z2){
                printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
            }
        }
    }
        else if (x2==x3 && x1<x3){
            if (y2>y3){
                printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
            else if (y3>y2){
                printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
            else if(y2==y3){
                if (z2>z3){
                    printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
                }
                else if (z3>z2){
                    printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
                }
            }

    else if (x1==x3 && x2>x3){
        if (y1>y3){
            printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
        }
        else if (y3>y1){
            printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
        }
        else if(y1==y3){
            if (z1>z3){
                printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
            else if (z2>z1){
                printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
        }
    }
    else if (x1==x3 && x2<x3){
        if (y1>y3){
            printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
        }
        else if (y3>y1){
            printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
        }
        else if(y1==y3){
            if (z1>z3){
                printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
            }
            else if (z2>z1){
                printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            }
        }
    }
    else if (x1=x2=x3){
        if (y1>y2 && y1>y3){
            if (y2>y3){
                printf("A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            else if(y3>y2){
                printf("A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
            }
        }
        else if (y2>y1 && y2>y3){
            if (y1>y3){
                printf("B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
            else if(y3>y1){
                printf("B(%.2f,%.2f,%.2f)>C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
        }
        if (y3>y2 && y3>y1){
            if (y1>y2){
                printf("C(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            }
            else if (y2>y1){
                printf("C(%.2f,%.2f,%.2f)>B(%.2f,%.2f,%.2f)>A(%.2f,%.2f,%.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
            }
        }
}
}
