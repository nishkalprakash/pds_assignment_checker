// question 3

#include<stdio.h>




int main(){

char a[100] , b[100];
int i = 0 , j = 0, k , l, flag1 = 0 , flag2 = 0;

scanf("%s", a);

scanf("%s" , b);

while(a[i]) i++;
while(b[j]) j++;

for( k = 0; k < i ; k++){

    for( l = 0; l < j ; j++){

        if( a[k] == b[l]) flag1 = 1;
    }
    if ( flag1 == 1) flag2++;
    flag1 = 0;
}
printf("%d  %d %d\n", flag2,j, i);
if( (i == j) && (flag2 == i) ) printf("two strings are anagrams") ;

//for ( j = 0 ; j <= i)
return 0;
}
