#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fac(int num){
int i;
int j = 0;
int c[1000];
for (i = 1; i < num; i++){
        if (num%i == 0){
            c[j] = i;
        j++;
        }
}
int sum  = 0;
for (i = 0; i <= j; i++){
     sum += c[i];
}


return sum;
}









int main(){

int *p,i,n;
srand(time(0));
int a[1000];
printf("Write the number of random numbers you want to form");
scanf("%d", &n);
p = (int*) malloc(100*sizeof(int));
for (i = 0; i < n ; i++){
    p[i] = 2 + rand()%1000;
}

for (i = 0; i < n ; i++){
    printf("%d\n", p[i]);

}


for (i = 0; i<n; i++){
    if (p[i] == fac(p[i])){
        printf("%d is a perfect number\n", p[i]);
    }
}



return 0;
}





