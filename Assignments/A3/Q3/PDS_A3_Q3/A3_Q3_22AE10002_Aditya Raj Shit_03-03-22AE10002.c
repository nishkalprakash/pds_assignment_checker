#include<stdio.h>
#include<math.h>

void main(){
    float x1,y1,z1;
    float x2,y2,z2;
    float x3,y3,z3;

    printf("A(x1,y1,z1): ");
    scanf("%f%f%f",&x1,&y1,&z1);

    printf("\nB(x2,y2,z2): ");
    scanf("%f%f%f",&x2,&y2,&z2);

    printf("\nC(x3,y3,z3): ");
    scanf("%f%f%f",&x3,&y3,&z3);


    printf("\n");
    printf("\nA(x1,y1,z1) : (%f, %f, %f)",x1,y1,z1);            //Printing the three coordinates
    printf("\nB(x2,y2,z2) : (%f, %f, %f)",x2,y2,z2);
    printf("\nC(x3,y3,z3) : (%f, %f, %f)",x3,y3,z3);





    //part b of question:

    float l1,l2,l3;       //l signifies distance between two points.
                        //l1= a-b, l2=a-c & l3=b-c

    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    l2=sqrt(pow(x1-x3,2)+pow(y1-y3,2)+pow(z1-z3,2));
    l3=sqrt(pow(x3-x2,2)+pow(y3-y2,2)+pow(z3-z2,2));

    //printf("%f,%f,%f",l1,l2,l3);
    //printf("\n%f",l1+l3-l2);

    if(l1+l2-l3==0 || l1+l3-l2==0 || l2+l3-l1==0){          //Checking if the points are collinear or not.
        printf("\n\nThe given three points are collinear.");
    }
    else{
        printf("\n\nThe given three points are not collinear.");
    }





 //Part c of the question

    if(x1!=x2 && x1!=x3 && x2!=x3){     // if all the x coordinates are different then comparing them.
        int max=-999999,smax=-999999,tmax=-999999;

        if(x1>x2 && x1>x3 && x2>x3){
            printf("\nA(x1,y1,z1) : (%f, %f, %f)",x1,y1,z1);
            printf("\nB(x2,y2,z2) : (%f, %f, %f)",x2,y2,z2);
            printf("\nC(x3,y3,z3) : (%f, %f, %f)",x3,y3,z3);
        }

        else if(x1>x2 && x1>x3 && x3>x3){
            printf("\nA(x1,y1,z1) : (%f, %f, %f)",x1,y1,z1);
            printf("\nC(x3,y3,z3) : (%f, %f, %f)",x3,y3,z3);
            printf("\nB(x2,y2,z2) : (%f, %f, %f)",x2,y2,z2);
        }

        else if(x1>x2 && x2<x3 && x1<x3){
            printf("\nC(x3,y3,z3) : (%f, %f, %f)",x3,y3,z3);
            printf("\nA(x1,y1,z1) : (%f, %f, %f)",x1,y1,z1);
            printf("\nB(x2,y2,z2) : (%f, %f, %f)",x2,y2,z2);

        }

        else if(x1<x2 && x1>x3 && x2>x1){
            printf("\nB(x2,y2,z2) : (%f, %f, %f)",x2,y2,z2);
            printf("\nC(x3,y3,z3) : (%f, %f, %f)",x3,y3,z3);
            printf("\nA(x1,y1,z1) : (%f, %f, %f)",x1,y1,z1);

        }

        //else if()

    /*if(x1>max){                      //checking for first odd number.
        tmax=smax;
        smax=max;
        max=x1;
    }
    else if(x1<max && x1>smax){
        tmax=smax;
        smax=x1;
    }
    else{
        tmax=x1;
    }

    if(x2>max){                      //checking for first odd number.
        tmax=smax;
        smax=max;
        max=x2;
    }
    else if(x2<max && x2>smax){
        tmax=smax;
        smax=x2;
    }
    else{
        tmax=x2;
    }

    if(x3>max){                      //checking for first odd number.
        tmax=smax;
        smax=max;
        max=x3;
    }
    else if(x3<max && x3>smax){
        tmax=smax;
        smax=x3;
    }
    else{
        tmax=x3;
    } */
    }
}
