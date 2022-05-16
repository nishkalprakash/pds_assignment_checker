#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

int minindex(int m[4],int a[4],int b){

    int min,index,i;

    min=m[0],index=0;

    for(i=1;i<4;i++){

        if (m[i]<min){

            min=m[i];
            index=i;
        }
    }


    for(i=0;i<b;i++){
        if (index==a[i]-1){

            m[index]=1000000;

            index=minindex(m,a,b);

            break;
        }
    }
    return index;
}

int main(){

    int n=4;

    int m1[4],m2[4],m3[4],m4[4];

    int value1,value2,value3,value4,a[4],b;

    int i,j;

    printf("For machine 1 enter values: \n");     /*the four values of the machine 1 are entered line after the line */

    for(j=0;j<4;j++){
        scanf("%d",&m1[j]);
    }
    printf("For machine 2 enter values: \n");     /*the four values of the machine 2 are entered line after the line */


    for(j=0;j<4;j++){

        scanf("%d",&m2[j]);
    }

    printf("For machine 3 enter values: \n");     /*the four values of the machine 3 are entered line after the line */


    for(j=0;j<4;j++){

        scanf("%d",&m3[j]);
    }

    printf("For machine 4 enter values: \n");     /*the four values of the machine 4 are entered line after the line */


    for(j=0;j<4;j++){

        scanf("%d",&m4[j]);

    }
    value1=minindex(m1,a,0)+1;

    a[0]=value1;

    value2=minindex(m2,a,1)+1;

    a[1]=value2;

    value3=minindex(m3,a,2)+1;

    a[2]=value3;

    value4=minindex(m4,a,3)+1;

    a[3]=value4;

    int sum=0;

    for(i=0;i<4;i++){

        printf("%d\t",a[i]);

    }
    sum=m1[value1-1]+m2[value2-1]+m3[value3-1]+m4[value4-1];

    printf("\nTotal cost= %d\n",sum);

    printf("Machine 1 -> Vendor %d\n",value1);

    printf("Machine 2 -> Vendor %d\n",value2);

    printf("Machine 3 -> Vendor %d\n",value3);

    printf("Machine 4 -> Vendor %d\n",value4);

}
