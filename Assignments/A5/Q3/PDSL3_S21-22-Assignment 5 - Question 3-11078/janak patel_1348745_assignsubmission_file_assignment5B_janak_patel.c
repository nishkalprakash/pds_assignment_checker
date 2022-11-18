/*
name: JANAK Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:5(c)
*/

#include<stdio.h>

int main(){

  int x,i,j,k,min,max,pos[2][2];

  printf("enter the value of x : \n");  // number of rows and collumn
  scanf("%d",&x);                       //  assumed a square matrix(2D array)




  float a[x][x];
  printf("ENTER THE VALUE OF ELEMENT OF 2D ARRAY :\n");

  for( i=0; i < x; ++i){                  //using  loop to take value of 2D array
    for( j=0;j < x;  ++j) {


  printf("ENTER  a%d%d :\n",i+1,j+1);
  scanf("%f",&a[i][j]);

    }

}

//  saddle point code ------>>

 for(i=0;i< x;i++)

 {
     min = a[i][0];

     for(j=0;j<x;j++)
     {
        if  (min>=a[i][j])
        {
            min = a[i][j];
            pos[0][0] = i;
            pos[0][1] = j;
        }
     }

     j = pos[0][1];
     max = a[0][j];
     for(k=0;k<x;k++);
     {
         if (max <= a[k][j])
            {
            max = a[i][j];
            pos[1][0] =k;
            pos[1][1] =j;
         }
     }


     // saddle point is minimum of row and maximum of column -------->>

     if(min==max){
        if (pos[0][0] == pos[1][0] &&  pos [0][1] == pos[1][1]){
            printf("saddle point is (%d,%d) : %d \n",pos[0][0],pos[0][1],max);
        }
     }


 }

return 0;
}
