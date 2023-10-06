// Name - Anshuman Acharya
// Roll No. - 23CH10006
#include<stdio.h>
#include<stdlib.h>

int arr[100], size;

void fill(){

  printf("Enter your no of inputs : ");
  scanf("%d", &size);

  if(size > 100 || size < 0){
    fill();
  }

  else{

    for(int i = 0;i < size;i++){
      arr[i] = rand()%800 + 100;
      printf("%d  ", arr[i]);
    }

}
}

void exchange(){

  int mid = (size)/2;

  for(int i = 0;i < mid;i++){

    int temp = arr[i];
    arr[i] = arr[mid + i];
    arr[mid + i] = temp;
    
  }

  for(int i = 0;i < size;i++){

    printf("%d  ", arr[i]);
    
  }
  
}

void rotateright(){

  printf("Updated array : ");
  for(int i = 0;i < size;i++){
    printf("%d  ", arr[i]);
  }

  printf("\n\n");

  // rotating right

   // Swapping first and last ones
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;

    
  printf("Rotated array : ");
  for(int i = size - 1;i > 1;i--){

    // swapping the remaining elements from last.
    int tempo = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = tempo;
  }

  for(int i = 0;i < size;i++){

    printf("%d  ", arr[i]);
    
  }

}

void roteteleft(){

  printf("Updated array : ");
  for(int i = 0;i < size;i++){
    printf("%d  ", arr[i]);
  }

  printf("\n\n");

  // rotating right

   // Swapping first and last ones
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;

    
  printf("Rotated array : ");
  for(int i = 0;i < size - 1;i++){

    // swapping the remaining elements from start.
    int tempo = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = tempo;
  }

  for(int i = 0;i < size;i++){

    printf("%d  ", arr[i]);
    
  }

}

void segregate(){

  int count = 0, hash[100];
  printf("Updated array : ");
  for(int i = 0;i < size;i++){
    printf("%d  ", arr[i]);
  }

  printf("\n\n");

  printf("Segregated array : ");

  for(int i = 0;i < size;i++){

    if(arr[i] % 2 == 0){
      hash[count] = arr[i];            // even numbers sent to starting.
      count++;
    }

  }
  for(int i = count;i < size;i++){

    for(int j = i;j < size;j++){
      if(arr[j] % 2 != 0)
	hash[i] = arr[j];
      break;
    }
     
    
  }
  for(int i = 0;i < size;i++){

      printf("%d  ", hash[i]);
  }

}

void search(){

  int n;
  printf("Enter your key to be searched : ");
  scanf("%d", &n);

  for(int i = 0;i < size;i++){

    if(arr[i] == n){
      printf("Found ");
      break;
    }
    else{
      printf("Not Found");
      break;
    }
    
  }

}
int main()
{

  int n, i;
  printf("Enter the inputs of your array ");
  //scanf("%d", &n);

  while(1){

    scanf("%d", &arr[i]);

    if(arr[i] == 0 || arr[i] >= 10){
      break;
    }
    i++;    

  }

  for(int j = 0;j < i;j++)
    printf("%d  ", arr[j]);
  
  //Part a solved

  printf("\n\n");

  fill();

  // Part b solved

  printf("\n\n");

  exchange();

  // Part c to be solved

  printf("\n\n");

  rotateright();

  // Part d solved
  
  printf("\n\n");

  roteteleft();

  // Part e solved

  printf("\n\n");

  segregate();

  printf("\n\n");
  

  search();

  // Part g solved.
  
   printf("\n\n");
}
