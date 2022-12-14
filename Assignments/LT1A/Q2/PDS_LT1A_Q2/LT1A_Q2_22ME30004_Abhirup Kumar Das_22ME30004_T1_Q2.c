/*TEST 1, SET A
CODE BY: ABHIRUP KUMAR DAS, 22ME30004*/

#include<stdio.h>

int main(){
int num;
printf("Enter any number between 2 & 10: ");//Input By User
scanf("%d", &num);
//int count;

for(int i=0;i<=num-1;i++){ //Forming Rows and columns
for(int j=1;j<=i+1;j++){
printf("%d",j+i);
}
printf("\n");
}

return 0;
}

