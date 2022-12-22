#ifdef __MAIN_H__
#define __MAIN_H__
#include <struct.h>

 float haClose(stock *head);
 int freeLinkedList(stock** headPointer);
 void appendLinkedList(stock **headPointer, stock* data);
 void display_stock(stock* st);
 void printLinkedList(stock *st);
 int loadFromFile(const char *fileName, stock **headPointer);

#endif
