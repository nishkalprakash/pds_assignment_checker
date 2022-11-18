#include<stdio.h>
#include<stdlib.h>

struct sn
{
    char data;
    struct sn *next;
};

int main()
{
    char a[100];
    scanf("%s",a);
    if (checkBalanced(a))
        printf("Balanced");
    else
        printf("Not Balanced");
            return 0;
        }

int checkBalanced(char a[])
{
    int i = 0;
 //declaring a blank stack under the structure
    struct sn *stack = NULL;
    while (a[i])
    {
       //inserting element a[] in the stack if it is starting paranthesis from below
        if (a[i] == '{' || a[i] == '(' || a[i] == '[')
            insert(&stack, a[i]);
       //removing element if it is closing paranthesis
        if (a[i] == '}' || a[i] == ')' || a[i] == ']')
        {
            if (stack == NULL)
                return 0;
            else if ( match(remove(&stack), a[i]) )
                return 0;
        }
        i++;
    }
//below given is for possible case if opening paranthesis has no ending.here null means no element left
    if (stack == NULL)
        return 1;
    else
        return 0;
     }

//function to insert element
void insert(struct sn** t, int new_data)
    {
    //new node defining dynamically
    struct sn* new_node =(struct sn*) malloc(sizeof(struct sn));
    //inserting new data
    new_node->data  = new_data;
    new_node->next = (*t);
//moving the head to point new node
    (*t) = new_node;
    }

    //function to remove element from stack
int *remove(struct sn** t)
{
    char s;
    struct sn *top;

    top = *t;
    s = top->data;
    *t = top->next;
    free(top);
    return(s);
}

//matching to pairs of characters
void match(char c1, char c2)
{
    if (c1 == '(' && c2 == ')')
        return 1;
    else if (c1 == '{' && c2 == '}')
        return 1;
    else if (c1 == '[' && c2 == ']')
        return 1;
    else
        return 0;
}



