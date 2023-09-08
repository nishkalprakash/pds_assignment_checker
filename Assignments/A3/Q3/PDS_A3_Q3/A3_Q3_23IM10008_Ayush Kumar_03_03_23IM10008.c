#include <stdio.h>
//ROLL-23IM10008
//NAME- AYUSH KUMAR
int main(){
int x,y;
printf ("Enter the coordinates:");
scanf( "%d %d", &x, &y );
if (x==0 && y!=0 ){
  printf( "Point lies on Y axis");
}
else if (y==0 && x!=0){
     printf("Point lies on X axis");
 }
 else if ( x>0 && y>0  ){
   printf ("Point lies in 1st quadrant");
}
 else if( x>0 && y<0 ){
   printf ( "Point lies in 2nd quadrant");
 }
 else if ( x<0 && y <0  ){
   printf ( " Point lies in 3rd quadrant");
 }
 else (x<0 && y>0);
	{
	printf( " Point lies in 4th quadrant");}
return 0;
}
  
