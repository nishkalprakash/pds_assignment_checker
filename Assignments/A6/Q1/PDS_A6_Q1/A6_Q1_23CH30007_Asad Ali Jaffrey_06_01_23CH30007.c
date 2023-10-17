//Roll No.-23CH30007
//Name-Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

void fill(int[]);
void exchange(int[]);
void rotate_right(int[]);
void rotate_left(int[]);
void segregate(int[]);
void search(int[]);
void fold(int[]);
void analyze(int[]);

int arr[100],size=0;

int main() {

  int flag=1,choice;

  while (flag==1) {
    flag=0;
    printf(" i. 1 ---- Fill\n ii. 2 ---- Exchange\n iii. 3 ---- Rotate right\n iv. 4 ---- Rotate left\n v. 5 ---- Segregate\n vi. 6 ---- Search\n vii. 7 ---- Fold\n viii. 8 ---- Analyze\n ix. 0,9 or any higher number ---- Exit\n");
    scanf("%d",&choice);

    switch (choice) {
    case 1 :  fill(arr); flag=1;break; 
    case 2 : exchange(arr); flag=1;break;
    case 3 : rotate_right(arr); flag=1; break;
    case 4 :  rotate_left(arr); flag=1; break;
    case 5 :  rotate_left(arr); flag=1; break;
    case 6 : segregate(arr); flag=1; break;
    case 7 : search(arr); flag=1; break;
    case 8 : fold(arr); flag=1; break;
    case 9 :  analyze(arr); flag=1; break;
    default : break;
  }
}
  return 0;
}

  void fill (int a[]) {

    while ((size<1)||(size>100)) {
      printf("Enter the size of the array to be used ");
      scanf("%d", &size);
    }

    for (int i=0; i<size; i++) {
      a[i] = rand()%900 + 100;
    }

    for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }
  }


void exchange(int a[]) {

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }

  for (int i=0; i<size/2; i++) {
    int temp;
    temp = a[i];
    a[i] = a[size+i-size/2];
    a[size+i-size/2] = temp;
  }

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }
}

void rotate_right(int a[]) {

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }

  for (int i=size-1; i>0; i--) {
    int temp;
    temp = a[i-1];
    a[i-1] = a[i];
    a[i] = temp;
   }

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }
}

void rotate_left(int a[]) {

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }

  for (int i=0; i<size-1; i++) {
    int temp;
    temp = a[i+1];
    a[i+1] = a[i];
    a[i] = temp;
  }

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }
}

void segregate(int a[]) {

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }

  int even_count=0, n;

  for (int i=0; i<size; i++) {

    if ((a[i]%2)==0) {
      even_count++;
      n = i;

      while (n>=even_count) {
	int temp;
	temp = a[n-1];
	a[n-1] = a[n];
	a[n] = temp;
	n--;
      }
    }
  }

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }
}

void search(int a[]) {

  int n, flag=0;

  for (int i=0; i<size; i++) {
      printf("% d", a[i]);

      if (i==size-1){
	printf("\n");
      }
    }

  printf("Enter the value to be searched ");
  scanf("%d", &n);

  for (int i=0; i<size; i++) {
    if (a[i]==n) {
      printf("Value found at index : %d\n",i);
      flag = 1;  
    }
  }

  if (flag==0) {
    printf("Not Found\n");
  }

}

void fold(int arr[]) {

  int a2[100];
  int n;   //stores the number of values in a2

  if (size%2==0) {
    n = size/2;
  }
  else {
    n = size/2 +1;
  }

  for (int i=0; i<size/2; i++) {
    a2[i] = arr[i] + arr[size-1-i];
}
  if (size%2!=0) {
    a2[size/2] = arr[size/2];
  }

  for (int i=0; i<n; i++) {
    printf("%d ", a2[i]);
  }

  printf("\n");
}

void analyze(int a[]) {

  int count = 1, maxcount = 1, start, end;

  for (int i=0; i<size; i=i+count) {
    for (int j=i+1; j<size; j++) {
    if (a[j]>a[i]) {
      if (count==0) {
	printf("%d ", a[i]);
      }
      printf("%d",a[j]);
	     count++;
	     }
      else {
	if (count>1) {
	  printf(", ");
	}
	if (count>maxcount) {
	  maxcount = count;
	  start = i;
	  end = j-1;
	}
	count=1;
	break;
      }
    }
    }
}
	
	
	     
      

  

  
    
  
    
      

  

  
  
	
	
  
  
    
  



    

    
