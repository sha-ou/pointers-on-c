#ifndef __STACK_H__
#define __STACK_H__

#include <stddef.h>

typedef int stackelemt;
enum boolean {TRUE, FALSE};

void push(stackelemt value);
void pop(void);
stackelemt top(void);
enum boolean is_empty(void);
enum boolean is_full(void);
void create_stack(size_t size);
void destroy_stack(void);

#endif
