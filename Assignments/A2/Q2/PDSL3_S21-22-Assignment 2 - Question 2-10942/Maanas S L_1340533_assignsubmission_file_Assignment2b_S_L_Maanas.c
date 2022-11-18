/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 2(b)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    srand (time(NULL)) ;
    int plane , kutt , don , pigeon  ; //initialising values
    printf ("n = ") ; // asking value of n
    scanf ("%d",&plane ) ; // taking 
    printf ("k = ") ; //asking value of k
    scanf ("%d",&kutt) ; //taking value of k
    printf ("\n") ;
    double demo = 0.00 ;
    for (int j=0;j<kutt;j++) //for loop
    {
        don = 0 ; // initialising start distance as zero
        for(int i=0 ; i<plane ; i++) // for loop
        {
            pigeon = rand() & 1 ? -1 : 1; // random allocation of values
            don = don + pigeon ; //sumation 
        }
        demo = demo + (don*don); //sumation of final values
    }
    demo = sqrt (demo/kutt) ; // getting De
    printf ("DE = %lf", demo) ; //printing the value of de
    return 0; //return of the value
}