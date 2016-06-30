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
        if (node->str == NULL){
                return 1;
        }
        node->next = NULL;
        if (*list == NULL) {
                *list = node;
                node->prev = NULL;
        }
        else {
                link = *list;
                while (link->next != NULL) {
                        link = link->next;
                }
                link->next = node;
                node->prev = link;
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
        if (node->str == NULL){
                return 1;
        }
        node->prev = NULL;

        if (*list == NULL){
                node->next = NULL;
                *list = node;
        }
        else{
                (*list)->prev = node;
                node->next = *list;
                *list = node;
        }
        return 0;
}
