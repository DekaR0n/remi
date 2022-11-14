#define shop_
#ifndef __shop__

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

// Структура посетителя магазина.
typedef struct Visitor {
    char *name;
    int time;
    int sum;
} Visitor;

// Структура элемента очереди.
typedef struct Queue {
    Visitor *visitor;
    struct Queue *next;
} Queue;

// Структура очереди.
typedef struct QueueCommon {
    struct Queue *last;
    struct Queue *first;
    int length;
} QueueCommon;

// Структура касса.
typedef struct CashRegister {
    bool val;
    int visitor_value;
    int cash;
    QueueCommon *current_queue;
} CashRegister;

// ..

//
void push(Queue* queue);

//
void pop(Queue* queue);

// Возвращает элемент очереди
Visitor *getElement();

// Печать работы магазина
void show();

// Возвращает имя человека в очереди
char *get_name();

// Возвращает сумму покупки.
void get_value();


#endif //__shop__