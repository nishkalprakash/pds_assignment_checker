# include<stdio.h>
int main(){
    int m1[4], m2[4], m3[4], m4[4], i, min1, min2, min3, min4, total=0;
    for(i=1;i<4;i++){
        scanf("%d", &m1[i]);
    }
    for(i=1;i<4;i++){
        scanf("%d", &m2[i]);
    }
    for(i=1;i<4;i++){
        scanf("%d", &m3[i]);
    }
    for(i=1;i<4;i++){
        scanf("%d", &m4[i]);
    }

    min1 = m1[0];
    for(i=1;i<4;i++){

        if(m1[i]<min1){
                min1=m1[i];
        }
    }
    min2 = m2[0];
    for(i=1;i<4;i++){

        if(m2[i]<min2){
                min2=m2[i];
        }
    }
    min3 = m3[0];
    for(i=1;i<4;i++){

        if(m3[i]<min3){
                min3=m3[i];
        }
    }
    min4 = m4[0];
    for(i=1;i<4;i++){

        if(m4[i]<min4){
                min4=m4[i];
        }
    }
    total = min1 + min2 + min3 + min4;

    printf("the minimum price for machine 1 is %d\n",min1);
    printf("the minimum price for machine 2 is %d\n",min2);
    printf("the minimum price for machine 3 is %d\n",min3);
    printf("the minimum price for machine 4 is %d\n",min4);
    printf("total price = %d\n", total);
    return 0;
}
