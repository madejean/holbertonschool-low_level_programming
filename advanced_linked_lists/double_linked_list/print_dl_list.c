#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int print_char(char c);
void print_string(char *str);
void print_dl_list(List *list)
{
        List *node;
        node = list;
        while (node != NULL){
                print_string(node->str);
                print_char('\n');
                print_char('\t');

                if(node->prev != NULL){
                        print_string(node->prev->str);
                }
                else{
                        print_string("NULL");
                }
                print_char('\n');
                print_char('\t');
                if (node->next != NULL){
                        print_string(node->next->str);
                }
                else{
                        print_string("NULL");
                }
                print_char('\n');
                node = node->next;
        }
}
