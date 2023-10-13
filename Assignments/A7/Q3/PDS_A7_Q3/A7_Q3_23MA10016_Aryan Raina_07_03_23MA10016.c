//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dist[5][5];

void dist2city() {
  char s, t;
  // i am taking in input via %s because if we use %c we will get '\n' ' ' etc into the next character
  printf("Enter starting city (A to E): ");
  scanf("%c", &s);
  printf("Enter ending city (A to E): ");
  scanf("%c", &t);

  // d stores the distance between s and t
  int d = dist[s-'A'][t-'A'];

  // if d is -1 it is unreachable by definition
  if (d == -1) printf("%c to %c is unreachable\n\n", s, t);
  else printf("Distance from %c to %c is %d km\n\n", s, t, d);
}

//----------------------------------------------------------------

void distThr1city() {
  char s, t;
  printf("Enter starting city (A to E): ");
  scanf("%c", &s);
  printf("Enter ending city (A to E): ");
  scanf("%c", &t);

  // initialize mnd with a large number so that it updates atleast once if there is a path
  int mc, mnd = 1e9+7;

  // loops through all cities
  for (char c = 'A'; c <= 'E'; c++) {
    // if c is starting or ending point continue
    if (c == s || c == t) continue;

    // d1 = distance from s to c, d2 = distance from c to t
    int d1 = dist[s-'A'][c-'A'], d2 = dist[c-'A'][t-'A'];

    // if either of the distances is unreachable it is unreachable
    if (d1 == -1 || d2 == -1) printf("%c to %c via %c is unreachable\n", s, t, c);
    else {
      printf("Distance from %c to %c via %c is %d km\n", s, t, c, d1+d2);

      // if distance of path via c is less than current min update min and update the minimum's corresponding c
      if (d1+d2 < mnd) {
	mnd = d1+d2;
	mc = c;
      }
    }
  }

  // if mnd is very big that means we didnt update it therefore there is no path via other cities
  if (mnd < 1000)
    printf("Minimum distance from %c to %c is via %c and it is %d km\n\n", s, t, mc, mnd);
  else
    printf("There is no path from %c to %c via any other city\n\n", s, t);
}

//-------------------------------------------------------------

int main() {
  srand(time(0));

  // fills left half of distance array with numbers in [20, 999] and dist[i][i] as 0
  for (int i = 0; i < 5; i++) {
    dist[i][i] = 0;
    for (int j = 0; j < i; j++) 
      dist[i][j] = rand() % 980 + 20;
  }

  // fills the other half such that dist from i to j is same as that from j to i
  for (int i = 0; i < 5; i++)
    for (int j = i+1; j < 5; j++)
      dist[i][j] = dist[j][i];

  // prints the original distance array
  printf("Dist : \n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++)
      printf("%3d ", dist[i][j]);
    printf("\n");
  }
  printf("\n");

  // prints the array where non reachable are marked -1
  printf("Updated Dist : \n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (dist[i][j] > 150) dist[i][j] = -1;
      printf("%3d ", dist[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  dist2city();
  distThr1city();
 }

 
