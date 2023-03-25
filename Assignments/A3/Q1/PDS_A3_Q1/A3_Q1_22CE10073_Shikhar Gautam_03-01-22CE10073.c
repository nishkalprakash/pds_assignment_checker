#include <stdio.h>

int main () {

int s1,s2,s3,s4,s5;
printf("Enter any five integer values : ");
scanf("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);

if(s1%2 == 0 && s2%2 == 0 && s3%2 != 0 && s3<s4 && s4%2 != 0 && s4<s5 && s5%2 != 0 && s5>s4>s3>s2>s1){
    printf("Output = %d %d %d", s3,s4,s5);
}
else if(s1%2 == 0 && s2%2 == 0 && s3%2 == 0 && s4%2 != 0 && s5%2 != 0){

    printf("Output = %d", s5);
}
else {
    printf ("Invalid Response \n");
}

    return 0;
}
