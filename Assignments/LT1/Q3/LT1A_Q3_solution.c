#include<stdio.h>
int main(){
int i,j,scale_factor,num_lines, num_range=0,count;

    printf("Enter scale factor between 1 and 6 :\n");
    scanf("%d", &scale_factor);

    printf("Enter number of lines between 1 and 10 :\n");
    scanf("%d", &num_lines);

    if (!((scale_factor >= 1 && scale_factor <= 6) && (num_lines >= 1 && num_lines <= 10)))  {
       printf("Invalid input. Please enter valid values.\n");
        return 0;
    }

num_range = scale_factor+3;

count = 0;
for(i=1;i<=num_lines;i++)
{
  for(j=1;j<=i;j++)
  {
    printf("%d",(count % num_range)+1);
    count++;
  }
  printf("\n");
}

return 0;
}