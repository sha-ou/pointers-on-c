#include <assert.h>
#include <stddef.h>
#include <stdlib.h>

#include "stack.h"

#define STACK_MAX (5)

static stackelemt *stack=NULL;
static int topelemt = -1;
static size_t stack_size = 0;

void push(stackelemt value)
{
    assert(is_full()!=TRUE);
    topelemt++;
    stack[topelemt] = value;

}

void pop(void)
{
    assert(is_empty()!=TRUE);
    topelemt--;
}

stackelemt top(void)
{
    assert(is_empty()!=TRUE);
    return stack[topelemt];
}

enum boolean is_empty(void)
{
    return topelemt<=-1?TRUE:FALSE;
}

enum boolean is_full(void)
{
    return topelemt>=(STACK_MAX-1)?TRUE:FALSE;
}

void create_stack(size_t size)
{
    assert(stack_size==0);
    stack_size = size;
    stack = (stackelemt *)malloc(stack_size*sizeof(stackelemt));
    assert(stack!=NULL);
}

void destroy_stack(void)
{
    assert(stack_size>0);
    stack_size = 0;
    free(stack);
    stack = NULL;
}
