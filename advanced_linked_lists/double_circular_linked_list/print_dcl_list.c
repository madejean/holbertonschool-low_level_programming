#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int print_char(char c);
void print_string(char *str);

void print_dcl_list(List *list){
        List *node;
        node = list;
        
        if (node == NULL) {
                return;
        }
        do{
                print_string(node->str);
                print_char('\n');
                print_char('\t');
                if (node->str != NULL){
                        print_string(node->prev->str);
                        print_char('\n');
                        print_char('\t');
                        print_string(node->next->str);
                        print_char('\n');
                }
                else{
                        print_string("NULL");
                }
                node = node->next;
        }while(node != list);
} 
