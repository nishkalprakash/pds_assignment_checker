/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : Codeblocks
Operating system : Windows 11
Assignment class : 3
*/

#include<stdio.h>


int lengthstr(char v[15]){
   count=0;
    while(v[count]!='\0'){

        count++;
    }
    return count+1;
}

int main(){

    char pass[15],un[20],;
    int l;
    printf("Enter the username\n ");
    scanf("%s",pass);

    l=lengthstr(pass);

     if(l<8){printf("Not Acceptable");
                      return 1;}




return 0;
}
