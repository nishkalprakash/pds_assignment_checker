#include <stdio.h>
#include <stdlib.h>
int main()
{
    int students = 20
    int minRollNumber = 1000;
    int maxRollNumber = 2000;
    int minAge = 15;
    int maxAge = 25;
    int minMarks = 0;
    int maxMarks = 200;
      int data[students][3];
      for(int i = 0; i < students; i++) {
        data[i][0] = rand() % (1001 + 1000);
        data[i][1] = rand() % (11 + 15);
        data[i][2] = rand() % (201);
        }
        printf("Roll NUmber\tAge\tMarks\n");
        for(int i = 0; i < students; i++) {
            printf("%d\t\t%d\t%d\n",data[i][0], data[i][1], data[i][2]);
        }
        return 0;
}