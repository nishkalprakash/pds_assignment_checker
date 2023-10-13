#include<stdio.h>
#include<stdlib.h>
int roll[20];
int age[20] ;
int marks[20] ;
int i = 0 ;
int j = 0;


int p = 0;
int arr[20];

  




int main(){
for(i = 0 ; i < 20; i++){
    int a = rand()%1001 + 1000;
    roll[i] = a ;
}

for(i = 0 ; i < 20; i++){
    int a = rand()%11 + 15;
    age[i] = a ;
}

for(i = 0 ; i < 20; i++){
    int a = rand()%101 ;
    marks[i] = a ;
}


printf("\n\n\nIDENTICAL ROLL \n\n\n");

for ( i = 0 ; i < 19 ; i++){
    for ( j = i +1 ; j < 20 ; j ++){
        if ( age[i]==age[j]){
             printf("Roll : %d  Age: %d  Marks: %d\n",roll[i],age[i],marks[i]);
             printf("Roll : %d  Age: %d  Marks: %d\n",roll[j],roll[j],roll[j]);
        }
        }

    }


printf("\n\n\nIDENTICAL MARKS \n\n\n");


for ( i = 0 ; i < 19 ; i++){
    for ( j = i +1 ; j < 20 ; j ++){
        if ( marks[i]==marks[j]){
             printf("Roll : %d  Age: %d  Marks: %d",roll[i],age[i],marks[i]);
             printf("Roll : %d  Age: %d  Marks: %d",roll[j],roll[j],roll[j]);
        }
        }

    }

printf("\n\n Sorted by Roll \n\n");


for (j =0; j < 20 ; j ++){
for ( i = 1 ; i < 20 ; i++){
        if ( roll[i] > roll[i -1]){
            int x = roll[i-1];
            roll[i - 1] = roll[i];
            roll[i] = x ;




             int y = marks[i-1];
            marks[i - 1] = marks[i];
            marks[i] = y ;




             int z = age[i-1];
            age[i - 1] = age[i];
            age[i] = z ;
        }
    }
 
}


for(i = 0 ; i < 20 ; i++){
    printf("Roll : %d   Marks : %d Age : %d\n",roll[i], marks[i], age[i]);
}
}

