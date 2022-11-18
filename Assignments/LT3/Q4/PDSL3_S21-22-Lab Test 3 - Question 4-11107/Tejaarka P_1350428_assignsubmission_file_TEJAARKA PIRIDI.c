  //TEJAARKA PIRIDI

  //21MT10036

  //LABTEST 3

  //GROUP 5


#include <stdio.h>



#include <stdlib.h>



#define bool int



// implmentation of structure of a stack node



struct stNode {


    char data;



    struct stNode* next;


};

// this is the function to push an item to the stack



void push(struct stNode** top_refe, int new_dat);



//this is the  function to pop an item from stack


int pop(struct stNode** top_refe);



// this will Return 1 if character1 and character2 are matching


bool isMatchPaired(char charact1, char charact2)


{


    if (charact1 == '(' && charact2 == ')')


        return 1;


    else


    if (charact1 == '{' && charact2 == '}')


        return 1;


    else

    if (charact1 == '[' && charact2 == ']')

        return 1;

    else

        return 0;

}

// this will Return 1 if expression has balanced Brackets
bool areBracketsBalance(char exp[])


{
    int i = 0;

    // here is the Declaration of  an empty character stack


    struct stNode* stack = NULL;



    // Travers the given expression to check matching brackets




    while (exp[i])

    {
        // if in here the exp[i] is a starting bracket then push it



        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);



        // If exp[i] is an ending bracket then pop from

        // stack and check the popped bracket is a


        // matching pair or not



        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']') {

            // If we see an ending bracket without a pair

            // then return incorrect/fa;se


            if (stack == NULL)


                return 0;


            else

            if (!isMatchPaired(pop(&stack), exp[i]))
                return 0;
        }


        i++;
    }



    // If there is something left in expression then there
    // is a starting bracket without a closing
    // bracket


    if (stack == NULL)


        return 1;      // balanced


    else


        return 0;      // not balanced
}

// Driver code


int main()


{
    char exp[100] ;


    printf("input the brackets\n");


    gets(exp);



    // Function call


    if (areBracketsBalance(exp))


        printf("this is balanced \n");


    else


        printf("this is Not Balanced \n");


    return 0;
}

// Function to push an item to stack


void push(struct stNode** top_refe, int new_dat)


{
    // allocate node


    struct stNode* new_node


        = (struct stNode*)malloc(sizeof(struct stNode));



    if (new_node == NULL) {


        printf("Stack overflow n");


        getchar();


        exit(0);


    }

    // put in the data


    new_node->data = new_dat;



    // link  old list off the new node


    new_node->next = (*top_refe);

    // move head to point to the new node


    (*top_refe) = new_node;
}



// this is function to pop an item from stack


int pop(struct stNode** top_refe)


{


    char res;


    struct stNode* top;

    // If stack is empty then error


    if (*top_refe == NULL) {


        printf("Stack overflows n");


        getchar();


        exit(0);


    }


    else {


        top = *top_refe;


        res = top->data;


        *top_refe = top->next;


        free(top);


        return res;


    }


}
