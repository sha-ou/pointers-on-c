#include <assert.h>
#include "stack.h"

#define STACK_MAX (5)

/*
 * 存储堆栈中值的数组和指向栈顶元素的指针
 */
static stackelemt stack[STACK_MAX];
static int topelemt = -1;

/* push
 * 把一个新值压入堆栈，它的参数是要压入的值
 */
void push(stackelemt value)
{
   assert(is_full()==FALSE);
   topelemt++;
   stack[topelemt] = value;
}

/* pop
 * 从堆栈中弹出一个值，并将其丢弃
 */
void pop(void)
{
    assert(is_empty()==FALSE);
    topelemt--;
}

/* top
 * 返回栈顶的元素，不对堆栈修改
 */
stackelemt top(void)
{
    assert(is_empty()==FALSE);
    return stack[topelemt];
}

/* is_empty
 * 如果堆栈是的空，返回TRUE，否则返回FALSE
 */
enum boolean is_empty(void)
{
    return topelemt==-1?TRUE:FALSE;
}

/* is_full
 * 如果堆栈满了，返回TRUE，否则返回FALSE
 */
enum boolean is_full(void)
{
    return topelemt==(STACK_MAX-1)?TRUE:FALSE;
}

