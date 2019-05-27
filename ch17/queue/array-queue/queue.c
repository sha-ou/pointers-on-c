#include <stddef.h>
#include <assert.h>

#include "queue.h"

#define QUEUE_SIZE (5)
#define ARRAY_SIZE (QUEUE_SIZE+1)

/*
 * 用于存放队列元素的数组和头尾指针
 */
static queue_elemt queue[ARRAY_SIZE];
static size_t front = 1;
static size_t rear = 0;

/* create_queue
 * 创建一个队列
 */
void create_queue(size_t size)
{

}

/* destroy_queue
 * 销毁一个队列
 */
void destroy_queue(void)
{

}

/* insert
 * 向队尾添加一个新元素
 */
void insert(queue_elemt value)
{
    assert(is_full()!=TRUE);
    rear = (rear+1)%ARRAY_SIZE;
    queue[rear] = value;
}

/* delete
 * 从队头删除一个元素，但不返回
 */
void delete(void)
{
    assert(is_empty()!=TRUE);
    front = (front+1)%ARRAY_SIZE;
}

/* first
 * 返回队头的第一个元素，但不修改队列
 */
queue_elemt first(void)
{
    assert(is_empty()!=TRUE);
    return queue[front];
}

/* is_empty
 * 如果队列为空，返回TRUE，否则返回FALSE
 */
enum boolean is_empty(void)
{
    return ((rear+1)%ARRAY_SIZE==front)?TRUE:FALSE;
}

/* is_full
 * 如果队列满了，返回TRUE，否则返回FALSE
 */
enum boolean is_full(void)
{
    return ((rear+2)%ARRAY_SIZE==front)?TRUE:FALSE;
}

