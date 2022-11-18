#include <stdio.h>
#include <stdlib.h>

void main() {

    int c,d;
    printf("Enter the value of c and d:");
    scanf("%d %d",&c,&d);

    char str[6] = {c+'0',c+'0',c+'0',c+'0',c+'0','\0'};
    for (int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            str[j] = d+'0';
            int num = atoi(str);
            if (num % (c+d) != 0){
                printf("%d\n",num);
            }
        }
        str[i] = c+'0';
    }

    getch();
}
