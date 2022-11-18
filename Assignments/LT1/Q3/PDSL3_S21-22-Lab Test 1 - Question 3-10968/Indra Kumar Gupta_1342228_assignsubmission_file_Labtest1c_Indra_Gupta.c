/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 1 Question 3

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
srand(time(0));

int sd[2], a, b, n, i, num[2],j, nd[2], num0, k, point[2], total_point[2], total_badge[2], badge[2],l,m, score[2];
char win;
for(i=0; i<=1; i++){
   total_point[i]=0;
   total_badge[i]=0;
}
printf("Enter the number of rounds:");
scanf("%d", &n);

for(i=1; i<=n; i++){

for(j=0; j<=1; j++){
num[j]= (rand()%(1000-5+1))+5;
if(j==1){
 if(num[j]==num[0]){
    num[j]= (rand()%(1000-5+1))+5;
 }
}
num0 = num[j];
nd[j]=0;

while(num0>0){
num0 = num0/10;
nd[j] = nd[j]+1;
}
num0 = num[j];
sd[j]=0;
for(k=nd[j]-1; k>=0; k--){
l=pow(10, k);
sd[j]+=num0/pow(10, k);
num0=num0%l;


}


}

if(nd[0]==nd[1]){
point[0]=sd[0];
point[1]=sd[1];
if(point[0]>point[1]){
badge[0]=1;
badge[1]=0;
win = 'A';
}else{
badge[0]=0;
badge[1]=1;
win = 'B';

}
}else{
point[0]=nd[0];
point[1]=nd[1];
if(point[0]>point[1]){
badge[0]=1;
badge[1]=0;
win = 'A';
}else{
badge[0]=0;
badge[1]=1;
win = 'B';

}
}
printf("Round-%d --> A's number: %d B's number: %d\nA's point: %d B's point: %d\nA's badge: %d B's badge: %d\n-- %c wins Round %d --\n", i, num[0], num[1], point[0], point[1], badge[0], badge[1], win, i);


for(m=0; m<=1; m++){
  total_point[m]+=point[m];
  total_badge[m]+=badge[m];
}







}

for(i=0; i<=1; i++){
    score[i]=total_point[i]*total_badge[i];

    }

    printf("Final result => A's total score: %d, B's total score: %d\n", score[0], score[1]);
if(score[0]>score[1]){
    win='A';
}else if(score[0]>score[1]){
win='B';
}else{
printf("Draw");
return 0;
}


printf("--- %c wins the game ---", win);











return 0;
}
