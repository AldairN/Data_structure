#include <stdio.h>
#include <stdlib.h>

#include "list.h"

/*
   Print List
*/

static void print_list (const List *list) {
    ListNode *node;
    char *data;
    int i;

    fprintf(stdout, "List size is %d\n", list_size(list));

    i = 0;
    node = list_head(list);

    while (1) {
        data = (char *) list_data(node);
        fprintf(stdout, "list.node[%03d] = %c, %p -> %p\n", i, *data, node, node->next);

        i++;

        if (list_is_tail(node))
            break;
        else
            node = list_next(node);
    }

   return;
}


int main (int argc, char **argv) {
    List list;
    ListNode *node;

    char *data;
    int i;

    // Initialize the linked list
    list_init(&list, free);

    // Fill the linked list with 27 characters (a–z + extra char)
    node = list_head(&list);
    for (i = 0; i < 27; i++) {
        if ((data = (char *)malloc(sizeof(char))) == NULL)
            return 1;

        if (i < 26)
            *data = 'a' + i;   // a–z
        else
            *data = '@';       // carácter extra para ser 27

        if (list_ins_next(&list, NULL, data) != 0)
            return 1;
    }

    // Print the list
    print_list(&list);

    // Remove elements one by one
    fprintf(stdout, "Destroying the list...\n");
    while (list_size(&list) > 0) {
        if (list_rem_next(&list, NULL, (void **)&data) == 0) {
            fprintf(stdout, "Removed %c\n", *data);
            free(data);
        }
    }

    return 0;
}
