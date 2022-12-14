/*TEST 1, SET A
CODE BY: ABHIRUP KUMAR DAS, 22ME30004*/

#include<stdio.h>
#include<math.h>

int main(){
int Ax,Ay,Bx,By, Cx,Cy;
printf("Enter 1st point ");//Input By User
scanf("%d %d", &Ax,&Ay);
printf("Enter 2nd point ");//Input By User
scanf("%d %d", &Bx,&By);
printf("Enter 3rd point ");//Input By User
scanf("%d %d", &Cx,&Cy);

int AC,AB,BC; //Distance b/w points
AC=pow(Ax-Cx,2)+pow(Ay-Cy,2);
AB=pow(Ax-Bx,2)+pow(Ay-By,2);
BC=pow(Bx-Cx,2)+pow(By-Cy,2);

int eq;
eq = Ax*(By-Cy)-Ay*(Bx-Cx)+(Bx*Cy-By*Cx);
if(eq ==0){
printf("Invalid \n");
}

else if( eq !=0){

if(AC>AB+BC){ ///Condition Check of type of triangle
printf("Obtuse Triangle \n");
}

else if(AC=AB+BC){
printf("Right angled Triangle \n");
}

else if(AC<AB+BC){
printf("Acute angled Triangle \n");
}
}

//else printf("Invalid \n");


return 0;
}

