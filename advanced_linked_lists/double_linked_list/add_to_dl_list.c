#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include <string.h>

/*add a node at end of list*/
int add_end_dl_list(List **list, char *str)
{
        List *node;
        List *link;

        /*allocate space for new node*/
       node = malloc(sizeof(List));
       if (node == NULL){
                return 1;
        }
        if (str == NULL){
                return 1;
        }
        /*initialize data*/
        node->str = strdup(str);
        if (node->str == NULL){
                return 1;
        }
        node->next = NULL;
        if (*list == NULL) {
                *list = node;
                node->prev = NULL;
        }
        /*point to new node*/
        else {
                link = *list;
                /*iterate through nodes to get last node*/
                while (link->next != NULL) {
                        link = link->next;
                }
                link->next = node;
                node->prev = link;
        }
        return 0;
}

/*add node at the beginning of the list*/
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
        /*lists points to first node and node to list, list starting at first node*/ 
        else{
                (*list)->prev = node;
                node->next = *list;
                *list = node;
        }
        return 0;
}
