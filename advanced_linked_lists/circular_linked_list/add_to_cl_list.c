#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int add_end_cl_list(List **list, char *str){
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
                node->next = node;
        }
        /*get last node and make it point to first node*/
        else{
                link = *list;
                while(link->next != *list){
                        link = link->next;
                }
                link->next = node;
                node->next = *list;
        }
        return 0;
}

int add_begin_cl_list(List **list, char *str){
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
                node->next = node;;
        }
        /*same principle*/
        else {
                link = *list;
                while(link->next != *list){
                        link = link->next;
                }
                link->next = node;
                node->next = *list;
        }
        /*list starts at first node*/
        *list = node;
        return 0;
}
