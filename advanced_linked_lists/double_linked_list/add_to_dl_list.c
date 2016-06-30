#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include <string.h>

int add_end_dl_list(List **list, char *str)
{
        List *node;
        List *link;

       node = malloc(sizeof(List));
       if (node == NULL){
                return 1;
        }
        if (str == NULL){
                return 1;
        }
        node->str = strdup(str);
        node->next = NULL;

        if (*list == NULL) {
                node->prev = NULL;
                *list = node;
        }
        else {
                link = *list;
                while (link->next != NULL) {
                        link = link->next;
                }
                node->prev = link;
                link->next = node;
        }
        return 0;
}

int add_begin_dl_list(List **list, char *str){
        List *node;

        node = malloc(sizeof(List));
        if (node == NULL){
                return 1;
        }
        if (str == NULL){
                return 1;
        }

        node->str = strdup(str);
        node->prev = NULL;

        if (*list == NULL){
                node->next = NULL;
                *list = node;
        }
        else{
                node->next = *list;
                (*list)->prev = node;
                *list = node;
        }
        return 0;
}
