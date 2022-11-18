//Shubham Gajanan Warkad
//Roll No.21ME30072
//Assign2_week2_que1
#include <stdio.h>
#include <math.h>



int main(){



double z, newZ; int k, iteration = 1;



printf("Enter value of z: ");
scanf("%lf", &z);



printf("\nEnter value of k: ");
scanf("%d", &k);




while (iteration <= k && z > 0){



if (z >= 1){
newZ = z - sqrt(z);
}



else{
newZ = sqrt(z) - z;
}




if (z == newZ){



if (z >= 1){
newZ = z - pow((sqrt(z) - (1 / (double)iteration)), 2);
}



else{
newZ = pow((sqrt(z) - (1 / (double)iteration)), 2) - z;
}
}




if (newZ <= 0){
newZ = 0;
}




printf("(%lf, %d)", newZ, iteration);
if (iteration == k || newZ <= 0){
printf("\n");
}
else{
printf(", \n");
}




z = newZ;
iteration++;
}




return 0;
}
