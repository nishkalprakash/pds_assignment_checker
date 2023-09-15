#include <stdio.h>
#include <stdlib.h>
int age[20];
int roll[20];
int mark[20];
int a,b,c;

int main(){
for(int i =0 ; i < 20; i ++){
    a = rand()%1001 + 1000;
    b = rand()%11 +5;
    c = rand()%101 ;
    age[i] = b ;
    mark[i] = c;
    roll[i]= a;
}
for(int i =0 ; i < 20; i ++){
    for(int j = i+1; j < 20 ; j++){
        if (age[i]== age [j]){
            printf("Roll: %d  Age: %d  Mark: %d\n",roll[i],age[i],mark[i]);
             printf("Roll: %d  Age: %d  Mark: %d\n",roll[j],age[j],mark[j]);
        }
    }
    
}
for(int i =0 ; i < 20; i ++){
    for(int j = i+1; j < 20 ; j++){
        if (mark[i]== mark [j]){
            printf("Roll: %d  Age: %d  Mark: %d\n",roll[i],age[i],mark[i]);
             printf("Roll: %d  Age: %d  Mark: %d\n",roll[j],age[j],mark[j]);
        }
    }
    
}
for (int i =0 ; i < 20 ; i++){
    for(int j = i +1 ;j <19; j++){
    if ( roll[i]>roll[j]){
        int a = roll[i];
        roll[i]= roll[j];
        roll[j]=a;
        int b = age[i];
        age[i]= age[j];
        age[j]=b;
         int c = mark[i];
        mark[i]= mark[j];
        mark[j]=c;
    }
    
    }
    for(int i =0 ; i < 20; i ++){
    
       
            printf("Roll: %d  Age: %d  Mark: %d\n",roll[i],age[i],mark[i]);
            
    
}





}}