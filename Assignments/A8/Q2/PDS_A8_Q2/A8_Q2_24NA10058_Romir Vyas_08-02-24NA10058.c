#include <stdio.h>

int min (int x[], int k, int size)
{
	int j, pos;
	pos = k;
	for (j=k; j<size; j++)
		if (x[j] < x[pos])
			{
				pos = j;
			}
	return pos;
}

int sort (int x[], int size) 
{
	int k, m, temp;
	for (k = 0; k < size-1; k++) {
		m = min (x, k, size);
		temp = x[k];
		x[k] = x[m];
		x[m] = temp;
		}
		
}
int main () 
{
	int x , n[101] , num , m , temp ;
	printf ("Enter n = ") ;
	scanf ("%d" , &num ) ;
	printf ("[") ;
	for ( x = 0 ; x < num ; x++ ) {
		scanf ("%d" , &n[x] ) ;
	}
	for ( int i=0 ; i<num ; i++) 
	printf ("%d " , n[i] ) ;
	printf ("] \n") ;
	printf ("Enter m = ") ;
	scanf ("%d" , &m) ;
	sort ( n , num ) ; 
	m = n[num] ;
	for ( int i=0; i<=num ; i++ ) {
		if ( n[i] > m ) {
		temp = n[i];
		n[i] = m;
		n[i+1] = temp;
		}
	}
	for ( int i=0 ; i<=num ; i++) 
	printf ("%d " , n[i] ) ;
	
	 
	
	return 0 ;
}
