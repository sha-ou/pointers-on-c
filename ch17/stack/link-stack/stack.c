#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

#include "stack.h"

#define STACK_MAX (5)

static struct stack_node *stack=NULL;
/* static int top_elemt = -1; */
static size_t stack_size = 0;


void push(stack_elemt value)
{
    assert(is_full()!=TRUE);
    struct stack_node *new_node = (struct stack_node *)malloc(sizeof(struct stack_node));
    assert(new_node!=NULL);
    new_node->value = value;
    new_node->next = stack;
    stack = new_node;
    stack_size++;
}

void pop(void)
{
    assert(is_empty()!=TRUE);
    struct stack_node *pop_node = stack;
    stack = pop_node->next;
    free(pop_node);
    stack_size--;
}

stack_elemt top(void)
{
    assert(is_empty()!=TRUE);
    return stack->value;
}

enum boolean is_empty(void)
{
    return stack==NULL?TRUE:FALSE;
}

enum boolean is_full(void)
{
    return stack_size>=STACK_MAX?TRUE:FALSE;
}

void create_stack(size_t size)
{

}

void destroy_stack(void)
{
    while (is_empty()!=TRUE) {
        pop();
    }
}

