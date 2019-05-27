#ifndef __STACK_H__
#define __STACK_H__

#include <stddef.h>

typedef int stack_elemt;

struct stack_node {
    stack_elemt value;
    struct stack_node *next;
};

enum boolean {TRUE, FALSE};

void push(stack_elemt value);
void pop(void);
stack_elemt top(void);
enum boolean is_empty(void);
enum boolean is_full(void);
void create_stack(size_t size);
void destroy_stack(void);

#endif
