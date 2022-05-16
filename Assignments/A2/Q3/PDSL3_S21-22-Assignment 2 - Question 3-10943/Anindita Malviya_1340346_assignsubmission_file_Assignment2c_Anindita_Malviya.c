/*
Anindita Malviya
21MI33004
Section3
Code blocks
Assignment 2 c
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int  least, total = 0;
    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};

    int V1,V2,V3,V4;
    least = m1[0] + m2[1]+ m3[2]+ m4[3];
    printf("least = %d",least);
    for(int a=0; a<4; a++){

    for (int b = 0; b<4; b++){
    for (int c = 0; c<4; c++){
    for (int d = 0 ; d<4;d++){

    if(a != b && b != c && c != d && d != a)
        {
        total = m1[a] + m2[b] + m3[c] + m4[d];
        if (total<least)
        {
            least = total;
            V1 = a;
            V2 = b;
            V3 = c;
            V4 = d;
        }
        }
        }
        }
    }
    }

    printf("\n total cost: %d\n",least);
    printf("Machine 1 vendor %d\n",V1+1);
    printf("Machine 2 vendor %d\n",V2+1);
    printf("Machine 3 vendor %d\n",V3+1);
    printf("Machine 4 vendor %d\n",V4+1);

}
