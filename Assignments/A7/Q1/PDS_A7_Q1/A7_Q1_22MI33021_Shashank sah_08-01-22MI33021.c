//* name : shashank sah sec 2 22mi33021 question no : 1 assignment no : 7 */ #include #include #include int main() { int *a,n,i,*f1; //time_t t; //srand(time(t)); // Read the size of the array printf("enter positive integer: "); scanf("%d",&n); // Dynamic memory allocation of the array a = (int*)malloc(n*sizeof(int)); for(i=0;i