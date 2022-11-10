#define __shop__
#ifndef __shop__

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

typedef struct Visitor{
    char* name;
    int time;
    int sum;
} Visitor;

typedef struct QueueElement {
    struct Visitor* visitor;
    struct Queue* next;
}

typedef struct Queue {
    struct Queue* last;
    struct Queue* first;
    int length;
} Queue;


typedef struct CashRegister {
    bool val;
    int visitor_value;
    int cash;
    struct Queue* current_queue;
} CashRegister;

// ..

//
void push();

//
void pop();

// Возвращает элемент очереди
Visitor* getElement();

// Печать работы магазина
void show();

// Возвращает имя человека в очереди
char* get_name(){

}

// Возвращает сумму покупки.
void get_value(){

}



#endif //__shop__