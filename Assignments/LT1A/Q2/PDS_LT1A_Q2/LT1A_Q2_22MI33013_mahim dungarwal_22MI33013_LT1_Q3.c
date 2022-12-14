#include <stdio.h>

int main() 
{
 int total_rows ;
 int i = 1;

printf("enter total number of rows :  ");
scanf("%d", &total_rows);

for(int row_no = 1 ; row_no <= total_rows ; row_no++) {

for(int column_no = 1 ; column_no <= row_no ; column_no++) {

while(i <= (row_no*(row_no+1))/2 ) {
printf("%d ",i);
i++;
}
}
printf("\n");
}
return 0;
}


