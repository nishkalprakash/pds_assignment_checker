#include <stdio.h>

typedef int L;
struct list{
		L d;
		struct list *next;
	};
typedef struct list element;
typedef element* link;
int main()
{
	link head;
	head = (link)malloc(sizeof(element));
	head->d =
	return 0;
}