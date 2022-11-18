/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 4(b)
*/

#include <stdio.h>
int journey=0; //declaring journey as global varibale to store number of trips/journey
void myHostelChangingTrips(int k,int i,int m,int n) //start of the recursive function
{
    int jaamun; //declaring a variable named jaamun
    if (k == 0) //if statement when number of bags is input/becomes during the function as 0
    {
        journey++; //when number of bags becomes 0, we increment the number of trips/journey which becomes the final value of number of trips/journey
        return; //This is the return statement which tells what has to be returned
    }
    if (n < 1 || m * (n-i+1) < k ) //if statement when number of days for the change becomes less than 1
    {
        return; //This is the return statement which tells what has to be returned
    }
    for (jaamun = 1;jaamun <= m;jaamun++) //This is the for loop.This initializes our declared variable jaamun as 1 and goes on till maximum count of bags one can take in one trip/journey and the declared variables keeps on incrementing each time after the loop has been executed.
    {
        if (k - jaamun >= 0) //this is the if condition when number of bags subracted the declared variable jaamun is greater than or eqaul to 0.
        {
            myHostelChangingTrips(k-jaamun,i+1,m,n); //Here the function myHostelChangingTrips is called again inside that function only thus making the whole program a recursive function.
        }
    }
    return; //This is the return statement which tells what has to be returned
} 
int main() //This is the main program
{
    int n,k,m,i=1 ; //Declaring the variable n,k,m,i and making i equal to 1
    printf("n = "); //asking for the value of n
    scanf("%d",&n); //taking the value of n
    printf("k = "); //asking for the value of k
    scanf("%d",&k); //taking the value of k
    printf("m = "); //asking for the value of m
    scanf("%d",&m); //taking the value of m
    myHostelChangingTrips(k,i,m,n); //Calling the recursive function myHostelChanging Trips
    printf("%d\n",journey); //This prints the total number of trips/journeys one has to make.
    return 0; //This is the return statement
}