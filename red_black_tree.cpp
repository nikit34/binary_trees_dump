#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


typedef int T;
typedef enum {BLACK, RED} nodecolor;

// rename helpfully "typedef" defined struct Node_ -> Node
typedef struct Node_ {
    struct Node_ *left;
    struct Node_ *right;
    struct Node_ *parent;
    nodecolor color;
    T data;
} Node;

// red-black tree always start with black color, we initializate tree with NULL child leaves
#define NIL &sentinel Node sentinel = {NULL, NULL, 0, BLACK, 0};


void main(int argc, char **argv){
    int a;
    int maxnum;
    int ct;
    Node *t;
    maxnum = atoi(argv[1]);
    for (ct = maxnum; ct; ct--){
        a = rand() % 9 + 1;
        if ((t = findNode(a)) != NULL){
            deleteNode(t);
        } else {
            insertNode(a);
        }
    }
}