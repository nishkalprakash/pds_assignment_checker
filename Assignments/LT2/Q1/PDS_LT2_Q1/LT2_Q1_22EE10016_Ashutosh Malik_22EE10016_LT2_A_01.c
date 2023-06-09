#include<stdio.h>
float mean(float *a, float n){
int x = 0;
for (int i = 0; i<n; i++){
    x+=a[i];
}



return x/n;
}





int main(){
int n;
float *b = (float *) malloc (n*sizeof(float));
scanf("%d",&n);
for (int i = 0; i < n; i++){
    scanf("%d", &b[i]);
}

for (int i = 0; i < n; i++){
    printf("%d ", b[i]);
}

float c = mean(b, n);
printf("Mean = %lf", c);

return 0;
}

