#include<stdio.h>
#include<math.h>
int main()
{    //Here i am taking the points as input//
    float x1,y1,x2,y2,x3,y3,x4,y4 ,area1 ,area2,area3,area4 ,peri ,max ;
    printf("Please enter the points\n");
    printf("(x1,y1) : ") ;
    scanf("%f %f",&x1,&y1) ;
    printf("\n") ;
    printf("(x2,y2) : ") ;
    scanf("%f %f",&x2,&y2) ;
    printf("\n") ;
    printf("(x3,y3) : ") ;
    scanf("%f %f",&x3,&y3) ;
    printf("\n") ;
    printf("(x4,y4) : ") ;
    scanf("%f %f",&x4,&y4) ;
    printf("\n") ; //Here i am calculating the area using formula of coordinate geometry for each case : 1,2,3 ; 1,2,4 ; 1,3,4 ; 2,3,4 //
    //these represent the various combinations of the points possible to create the triangle //

    area1 = 0.5*((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1)) ;
    area2 = 0.5*((x2-x1)*(y4-y1) - (x4-x1)*(y2-y1)) ;
    area3 = 0.5*((x3-x1)*(y4-y1) - (x4-x1)*(y3-y1)) ;
    area4 = 0.5*((x3-x2)*(y4-y2) - (x4-x2)*(y3-y2)) ;
//Here i am finding the maximum area using ternary operator//
    max =area1 ;
    max = max>area2?max:area2 ;
    max = max>area3?max:area3 ;
    max = max>area4?max:area4 ;
//Here i am finding the length of each side and adding to get the perimeter//
    if(max==area1) {
            printf("Points having maximum area are : (%f , %f) , (%f , %f) , (%f , %f) \n", x1,y1 , x2,y2,x3,y3);
    peri = sqrt(pow(x2-x1,2)+pow(y2-y1 ,2)) + sqrt(pow(x3-x2,2)+pow(y3-y2 ,2)) + sqrt(pow(x3-x1,2)+pow(y3-y1 ,2)) ;
    printf("perimeter = %f",peri) ;
    }

   else if(max==area2) { printf("Points having maximum area are : (%f , %f) , (%f , %f) , (%f , %f) \n", x1,y1 , x2,y2,x4,y4);
     peri = sqrt(pow(x2-x1,2)+pow(y2-y1 ,2)) + sqrt(pow(x4-x2,2)+pow(y4-y2 ,2)) + sqrt(pow(x4-x1,2)+pow(y4-y1 ,2)) ;
    printf("perimeter = %f",peri) ;
   }

   else if(max==area3) { printf("Points having maximum area are : (%f , %f) , (%f , %f) , (%f , %f) \n", x1,y1 , x3,y3,x4,y4);
     peri = sqrt(pow(x3-x1,2)+pow(y3-y1 ,2)) + sqrt(pow(x3-x4,2)+pow(y3-y4 ,2)) + sqrt(pow(x4-x1,2)+pow(y4-y1 ,2)) ;
    printf("perimeter = %f",peri) ;
    }

   else if(max==area4){ printf("Points having maximum area are : (%f , %f) , (%f , %f) , (%f , %f) \n", x2,y2 , x3,y3,x4,y4);
     peri = sqrt(pow(x3-x2,2)+pow(y3-y2 ,2)) + sqrt(pow(x4-x2,2)+pow(y4-y2 ,2)) + sqrt(pow(x4-x3,2)+pow(y4-y3 ,2)) ;
    printf("perimeter = %f \n",peri) ;}


   return 0 ;
}
