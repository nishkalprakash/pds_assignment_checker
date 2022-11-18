/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include<stdio.h>
#include<stdlib.h>

//defining the number generator function with inputs as c,d,no of digits needed to be filled,pointer of the char array
void generateNumbers(int c,int d,int noofDigits,char *storeNum){

    //termination condition when there are no digits to be filled
    if(noofDigits==0){
        int num=0;
        int i=0;
        while(storeNum[i]!='\0'){
            num=num*10+(storeNum[i]-'0');
            i++;
        }
        //if the number is not divisible by c+d, printing them
        if(num%(c+d)!=0)printf("%s\n",storeNum);
        return;
    }
    //first initializing last char to c and running the recursive loop for 1 digit less
    storeNum[noofDigits-1]=c+'0';
    generateNumbers(c,d,noofDigits-1,storeNum);

    //if c and d are different initializing last char to d and running the recursive loop for 1 digit less
    if(c!=d){
    storeNum[noofDigits-1]=d+'0';
    generateNumbers(c,d,noofDigits-1,storeNum);
}
}


int main(){

    int c,d;
    //taking numbers input
    printf("enter the two digits:\n");
    scanf("%d%d",&c,&d);

    //defining a char array to store of numbers as characters
    char storeNum[6];

    //assigning last char to null to make it a string
    storeNum[5]='\0';

    //calling the recursive function
    generateNumbers(c,d,5,storeNum);
    return 0;
}
