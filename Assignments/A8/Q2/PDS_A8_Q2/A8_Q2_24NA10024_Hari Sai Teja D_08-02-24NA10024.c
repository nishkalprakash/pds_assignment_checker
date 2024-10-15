#include<stdio.h>

int min_loc (int a[], int k, int size);

int sel_sort (int size, int a[]);

int main()
{
    int n, a[101], i;
   
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
       scanf("%d", &a[i]);
    
    sel_sort (n, a);
 
     for (i=0; i<n; i++)
       printf("%d", a[i]);
    
    scanf("%d", &n);
    
 }
 
 
 int min_loc (int x[], int k, int size)
 {
 
       int j, pos;
       
       pos = k;
       for (j=k+1; j<size; j++)
         if (x[j] < x[pos])
            pos = j;
            
        return pos;
  }
  
  int sel_sort (int size, int x[]) {
        int k, m, temp;
        
        for (k=0; k< size-1; k++) {
          m = min_loc (x, k, size);
          
          temp = x[k];
          x[k] = x[m];
          x[m] = temp;
       }
  }
      
