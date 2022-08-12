#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


struct nod{
    int info;
    struct nod* succ;
};

struct stack{
    struct nod* sfarsit;    // ultimul element din stiva
    struct nod* inceput; // primul element din stiva
};

struct stack * initialize(struct stack* s)
{
    s = (struct stack*)malloc(sizeof(struct stack));
    s->top = 0;
    s->content = (int*)malloc(sizeof(int)*max);

    return s;
}

bool is_full(struct stack *s)
{
    if(s->top == s->max)
    {
        return true;
    }

    return false;
}

bool is_empty(struct stack *s)
{
    if (s->top == 0){
        return true;
    }

    return false;
}

bool push(struct stack *s, int value)
{
    if(is_full(s))
    {
        return false; // print
    }

    s->content[s->top] = value;
    s->top++; // s->top = s->top + 1;
    return true;
}

bool pop(struct stack *s, int* value)
{
    if(is_empty(s))
    {
        return false;
    }
    s->top--;
    *value = s->content[s->top];
    return true;
}

int main()
{

    struct stack *s;

    bool ret_val = pop(s, value);

    if (pop(s, value)){

    }
}