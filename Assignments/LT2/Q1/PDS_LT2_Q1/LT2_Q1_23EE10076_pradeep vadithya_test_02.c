// roll: 23EE10076
// Name: Pradeep
// set : b


#include<stdio.h>

void MaxMin();
void duplicate();
void highestFreq(();
void largestIncreasing();
void largestDecreasing();
void removeDuplicate();

int main(){
int arr[50]={20,20,20,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
printf("the 20 numbers stored in the array are:");
for(int i = 0; i < 20; i++){
printf("%d\n", arr[i]);
}
int n;
printf("enter a integer n between 1 and 6 for the following functions");
for(int j = 0;j>0 ; j++){
scanf("%d", &n);

if(n == 1){
MaxMin();
}
if(n ==2){
Duplicate();
}
else if(n == 3){
highestFreq();
}
else if(n == 4){
largestIncreasing();
}
else if(n == 5){
largestDecreasing();
}
else if(n== 6){
removeDuplicate();
}
else (n > 6){
printf("the entered number is invalid");
break;
}
}
return 0;
}


void MaxMin(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
int max = 0;
int min = 0;
int i = 0;
while(1){
if(arr[i] > max )
max = arr[i];
i++;
}
max = arr[i];
printf("the max number from the array is :%d", max);
while(1){
if(arr[i] < min)
min = arr[i];
i++;
}
min = arr[i];
printf("the min number  from the array is :%d, min);
}



void duplicate(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
for(int i =0; i<20; i++){
for(int j = 0; j< 20; j++){
if(arr[i] = arr[j]){
printf("the %d is repeated more than once in the array", arr[i]);
}
else(arr[i]!= arr[j]){
printf("no numbers are repeated");
}
}



void highestFreq(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
int count = 0;
for(int i =0; i<20; i++){
for(int j = 0; j< 20; j++){
if(arr[i] = arr[j]){
count ++;
else(arr[i] != arr[j])
break;
}
printf("the number %d is repeated %d times", arr[i], count);




void largestIncreasing(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
int Increasingarr[];
for(int i =0; i<20; i++){
for(int j = 0; j< 20; j++){
if(arr[i] >  arr[j]){










void largestDecreasing(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
int Decreasingarr[];
for(int i =0; i<20; i++){
for(int j = 0; j< 20; j++){
if(arr[i] < arr[j]){

}
}
}
}










void removeDuplicate(){
printf("the contents of the array are:");
for(int i = 0; i<20;i++){
printf("index %d = %d\n",i+1, arr[i]);
}
int duplicatearr[];
for(int i =0; i<20; i++){
for(int j = 0; j< 20; j++){
if(arr[i]= arr[j]){
printf("the %d has a duplicate", arr[i]);
}
else(arr[i] != arr[j]){
printf("the number %d doesnt have a duplicate" arr[i]);
}
}



















}