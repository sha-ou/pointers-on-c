#ifndef __STACK_H__
#define __STACK_H__

typedef int stackelemt;
enum boolean {TRUE, FALSE};


/* push
 * 把一个新值压入堆栈，它的参数是要压入的值
 */
void push(stackelemt value);

/* pop
 * 从堆栈中弹出一个值，并将其丢弃
 */
void pop(void);

/* top
 * 返回栈顶的元素，不对堆栈修改
 */
stackelemt top(void);

/* is_empty
 * 如果堆栈是的空，返回TRUE，否则返回FALSE
 */
enum boolean is_empty(void);

/* is_full
 * 如果堆栈满了，返回TRUE，否则返回FALSE
 */
enum boolean is_full(void);

#endif
