# include<stdio.h>
int main(){
    int m, day, n, k;
    float f;
    printf("Enter the number of machines:\n");
    scanf("%d", &m);
    printf("Enter the day number(1-7):\n");
    scanf("%d", &day);

    if(day==1){
        printf("Number of manufactured cars = %d\n", m);
    }
    else if(day==2){
        n = m + m/2 +m/4;
        if(m%2==0){
            printf("Number of manufactured cars = %d\n", n);
        }
        else{
            printf("Number of manufactured cars = %d\n", n+1);
        }
    }
    else if(day==3||day==6){
        printf("Enter the number of machines under inspection\n");
        scanf("%d", &k);
        n = (m-k) + (m-k)/2 + (m-k)/4;
        if((m-k)%2==0){
            printf("Number of manufactured cars = %d\n", n);
        }
        else{
            printf("Number of manufactured cars = %d\n", n+1);
        }

    }
    else{
        printf("Enter boosting fraction.\n");
        scanf("%f", &f);
        n = m + f*m;
        printf("Number of manufactured cars = %d\n", n+1);
    }
    return 0;
}
