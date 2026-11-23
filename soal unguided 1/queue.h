#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

typedef int infotype;
const int MAXQ = 5;              // kapasitas array (index 0..4)

struct Queue {
    infotype info[MAXQ];
    int head;                    // indeks elemen terdepan, -1 jika kosong
    int tail;                    // indeks elemen terakhir, -1 jika kosong
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif