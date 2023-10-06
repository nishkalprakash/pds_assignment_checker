#include <stdio.h>
#include <stdlib.h>
int arr[100];
int size;
int fill(){
    printf("enter the size");
    scanf("%d",&size);
    if (size <= 100 && size >= 1){

        for( int i = 0 ; i < size ; i++){
            arr[i] = rand()%900 + 100;
        }
        for( int i = 0; i < size ; i++){
            printf("Array is --\n");
            printf("%d,\n",arr[i]);
        }
        

    }
    else{ fill();}
}


int  exchange(){
     for( int i= 0 ; i < size ; i++){
            printf("Array is --\n");
            printf("%d,\n",arr[i]);
        }
        if ( size & 2 == 0){
            for( int i = 0 ; i < (size/2); i++){
                int x;
               x = arr[i];
               arr[i] = arr[ (size/ 2 + 1 + i)];
               arr[ (size/ 2 + 1 + i)] = x;

        }
            
        }
        else{
            for( int i = 0 ; i < ((size-1)/2); i++){
                int x;
               x = arr[i];
               arr[i] = arr [ ((size + 1)/ 2 + i)];
               arr[ ((size+1)/ 2  + i)] = x;

        }
            
        }

         for( int i = 0; i < size ; i++){
            printf("New array is --\n");
            printf("%d,\n",arr[i]);
        }




}
int rR(){
    int h = arr[size - 1];
    for ( int i = (size -1 ) ; i > 0 ; i -- ){
        arr[i]= arr[i - 1];

    }
    arr[0] = h;
    
}


int rL(){
    int h = arr[0];
    for (int i = 0 ; i < size ; i ++){
        arr[i]= arr[i + 1];
    
    }
    arr[size-1] = h ;    
}


int seg(){
    for( int i = 0 ; i < size ; i++){
            printf("Array is --\n");
            printf("%d,\n",arr[i]);
        }
    int arr2[100];
    int y = 0;
    for( int i = 0 ; i < size ; i++){
           if( arr[i]%2 ==0 ){
            arr2[y] = arr[i];
            y = y+1 ;
           }
        }
    for( int i = 0 ; i < size ; i++){
           if( arr[i]%2 !=0 ){
            arr2[y] = arr[i];
            y = y+1 ;
           }
        }
     for( int i = 0 ; i < size ; i++){
            printf("New array is --\n");
            printf("%d,\n",arr2[i]);
        }
     for( int i = 0 ; i < size ; i++){
            arr[i] = arr2[i];
        }
    
}

int fold (){
    int arr2[100];
    if( size % 2 == 0 ){
         for( int i = 0 ; i < (size/2) ; i++){
            arr2[i] = arr[i] + arr[size - i];
           
        }

    }
     if( size % 2 != 0 ){
         for( int i = 0 ; i < ((size+1)/2) ; i++){
            arr2[i] = arr[i] + arr[size - i];
           
        }
        arr2[(size+1/2)] = arr[(size+1/2)] ;
 
    } 

    if ( size % 2 == 0 ){
     for( int i = 0 ; i < (size /2) ; i++){
            printf("New array is --\n");
            printf("%d,\n",arr2[i]);
        }
    }
    if ( size % 2 != 0 ){
     for( int i = 0 ; i < ((size +1)/2) ; i++){
            printf("New array is --\n");
            printf("%d,\n",arr2[i]);
        }
    }
    
}


int analyze(){
    int pos;
    int msize;
    for( int i = 0 ; i < size ; i++){
            printf("Array is --\n");
            printf("%d",arr[i]);

        }
    int i = 0;
    while(i <= size){
    for( i ; i < size ; i ++){
        printf("(");
        if( arr[i] < arr[i +1] ){
            printf("%d,",arr[i]);
        }
        else{printf("%d )\n",arr[i]);
         return 0;
         }

    }
    }

}

int search(){
    for( int i = 0 ; i < size ; i++){
            printf("Array is --\n");
            printf("%d",arr[i]);

        }
        int x; 

    printf("Enter the value to be searched");
    scanf( "%d",&x);
    for ( int i = 0 ; i < size ; i++){
        if ( arr[i ] == x ){
            printf(" Found on %d ", i );
        }
        else{printf("Not found");
        }
    }
     
    

    
    
    
}



int main(){
    int a ;
printf(" Menu choices:\n 1.Fill\n2.Exchange\n3.Rotate right\n4.Rotate left\n5.Segregate\n6.Search\n7.Fold\n8.Analyze\n0,9 or any higher no-- exit\n");
scanf("%d",&a);
if (a > 0 && a  <9){
    switch(a){
        case 1:  fill();
        break;
        case 2:  exchange();
        break;
        case 3:  rR();
        break;
        case 4:  rL();
        break;
        case 5:  seg();
        break;
        case 6:  search();
        break;
        case 7:  fold();
        break;
        case 8:  analyze();
        break;
    }
    main();
    }
else{
  return 0;}
}
