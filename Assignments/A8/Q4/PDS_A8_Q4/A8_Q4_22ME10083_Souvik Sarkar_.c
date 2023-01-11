/*
*    section 14
*    Name: Souvik Sarkar
*    Roll no.:22ME10083
*    Assignment: 8
*    Topic:2D array & Strings
*    Question no.:4
*    Programme to check same word in array
*/
#include<stdio.h>
#include<stdlib.h>
int count(char a[], int p){
    int i,j=0;
    for(i=0;i<p;i++){
        if(a[i]=='\0')
            break;
        else
        j++;
    }
    return j;
       

}           

void main(){
    //Varriable initialization
    char s1[10],s2[100],p,q,i,j;
    //input
    printf("Enter the sub word\n");
    scanf("%s",s1);
    printf("Enter the large word\n");
    scanf("%s",s2);
    count(s1,10);
    count(s2,100);
    printf("%d",j);
   

}