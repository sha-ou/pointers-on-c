#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stddef.h>

typedef int queue_elemt;
enum boolean {TRUE, FALSE};

/* create_queue
 * 创建一个队列
 */
void create_queue(size_t size);

/* destroy_queue
 * 销毁一个队列
 */
void destroy_queue(void);

/* insert
 * 向队尾添加一个新元素
 */
void insert(queue_elemt value);

/* delete
 * 从队头删除一个元素，但不返回
 */
void delete(void);

/* first
 * 返回队头的第一个元素，但不修改队列
 */
queue_elemt first(void);

/* is_empty
 * 如果队列为空，返回TRUE，否则返回FALSE
 */
enum boolean is_empty(void);

/* is_full
 * 如果队列满了，返回TRUE，否则返回FALSE
 */
enum boolean is_full(void);

#endif
