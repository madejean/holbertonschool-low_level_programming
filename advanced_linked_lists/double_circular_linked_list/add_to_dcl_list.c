#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int add_end_dcl_list(List **list, char *str){
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
        if (*list == NULL){
                *list = node;
                node->prev = *list;
                node->next = *list;
        }
        /*get last node and make it point to first node*/
        else {
                link = *list;
                /*iterate through nodes to get last node*/
                while (link->next != *list) {
                        link = link->next;
                }
                (*list)->prev = node;
                link->next = node;
                node->prev = link;
                node->next = *list;
        }
        return 0;
}

int add_begin_dcl_list(List **list, char *str){
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
        if (*list == NULL){
                node->prev = node;
                node->next = node;
        }
        /*same principle*/
        else {
                link = *list;
                while(link->next != *list){
                        link = link->next;
                }
                node->prev = (*list)->prev;
                (*list)->prev->next = node;
                (*list)->prev = node;
                node->next = *list;
        
        }
        *list = node;
        return 0;
}
