#include <stdio.h>

extern struct List* list_add(struct List* list, int _data);
extern void list_print(struct List* list);

int main(){
    struct List* list = NULL;

    list = list_add(list, 3);
    list = list_add(list, 1);
    list_print(list);

    return 0;
}
