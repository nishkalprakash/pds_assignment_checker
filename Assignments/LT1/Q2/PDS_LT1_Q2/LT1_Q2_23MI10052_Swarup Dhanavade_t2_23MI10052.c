// SWARUP JAYARAM DHANAVADE
// 23MI10052

#include<stdio.h>

int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];

  for ( int i =0; i =9 ; i++){ // part a start
    a1[i]= rand() %21 + 10;
    a2[i]= rand() %31 + 30;
    a3[i]= rand() %31 + 60;
    a4[i]= rand() %31 + 90;
     }
  for ( int i =0; i =9 ; i++){
    printf ("a1[%d] = %d, ",i,a1[i]);
      } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a2[%d] = %d, ",i,a2[i]);
  } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a3[%d] = %d, ",i,a3[i]);
  } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a4[%d] = %d, ",i,a4[i]);
  } printf ("\n");



  for ( int i =0; i =19 ; i++){   // part b start
    if (i%2 == 0) a5[i]= a1[i/2];
    if(i%2 != 0) a5[i]= a2[(i-1)/2];
  }
   for ( int i =0; i =9 ; i++){
     printf ("a1[%d] = %d, ",i,a1[i]);
      } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a2[%d] = %d, ",i,a2[i]);
  } printf ("\n");
  for ( int i =0; i =19 ; i++){
    printf("a5[%d] = %d, ",i,a5[i]);
  }




  for ( int i =0; i =19 ; i++){   // part c start
     if (i%2 == 0){for (int j=9;j=0;J--)
	 a6[i]=a3[j];
	 }
    if(i%2 != 0) a6[i]= a4[(i-1)/2];
  }
   for ( int i =0; i =9 ; i++){
     printf ("a3[%d] = %d, ",i,a3[i]);
      } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a4[%d] = %d, ",i,a4[i]);
  } printf ("\n");
  for ( int i =0; i =19 ; i++){
    printf("a6[%d] = %d, ",i,a6[i]);
  }






  for ( int i =0; i =39 ; i++){     // part d start
     if (i%2 == 0){for (int j=19;j=0;J--)
	 a7[i]=a5[j];
	 }
    if(i%2 != 0){for (int j=19;j=0;J--)
	 a7[i]=a6[j];
	 }
  }
   for ( int i =0; i =19 ; i++){
     printf ("a5[%d] = %d, ",i,a5[i]);
      } printf ("\n");
  for ( int i =0; i =9 ; i++){
    printf ("a6[%d] = %d, ",i,a6[i]);
  } printf ("\n");
  for ( int i =0; i =39 ; i++){
    printf("a7[%d] = %d, ",i,a7[i]);
  }

  return 0;
  
  
}
