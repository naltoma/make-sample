#include <stdio.h>
#include <stdlib.h>

struct List {
    int data;
    struct List *next;
};

struct List* list_add(struct List* list, int _data);
void list_print(struct List* list);

struct List* list_add(struct List* list, int _data){

    // ready new list
    struct List* node = (struct List*)malloc(sizeof(struct List));
    node->data = _data;
    node->next = NULL;

    if( list == NULL ){
        // when list is empty, return node only.
        return node;
    }else{
        // when list has data, search the last and add node.
        struct List* temp = list;
        while( temp->next != NULL ){
            temp = temp->next;
        }
        temp->next = node; // add node to the last
        return list;
    }
}

void list_print(struct List* list){
    int count = 0;
    struct List* temp = list;
    while( temp->next != NULL ){
        printf("list[%d] = %d\n",count,temp->data);
        temp = temp->next;
        count++;
    }
    printf("list[%d] = %d\n",count,temp->data);
}

