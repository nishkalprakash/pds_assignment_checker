/*
name- Rishi Dhoble
roll no- 21ME30053
dept.- Mechanical Engnn
Package- code blocks
section- 3
*/

#include<stdio.h>

int main() {

    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};

    int sum;
    int min = m1[0] + m2[1] + m3[2] + m4[3];        // initializing minimum
    int m_1, m_2, m_3, m_4;                         // vendor number

    for(int i=0; i<4; i++){
        sum=0;
        for(int j=0; j<4; j++){

            for(int k=0; k<4; k++){

                for(int l=0; l<4; l++){

                    if(i!=j && j!=k && k!=l && l!=i && i!=k && l!=j){

                        sum=m1[i]+m2[j]+m3[k]+m4[l];
                        if(sum<min){

                            min=sum;
                            m_1=i;
                            m_2=j;
                            m_3=k;
                            m_4=l;
                        }
                    }
                }
            }
        }
    }

    printf("\n");
    printf("total cost : %d", min);

    printf("\n");
    printf("machine1 - vendor %d", m_1 + 1);

    printf("\n");
    printf("machine2 - vendor %d", m_2 + 1);

    printf("\n");
    printf("machine3 - vendor %d", m_3 + 1);

    printf("\n");
    printf("machine4 - vendor %d", m_4 + 1);

return 0;
}
