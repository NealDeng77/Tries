/*
 * Linkedlist.c
 *
 *  Created on: Nov 5, 2019
 *      Author: neald
 */


// C program for array implementation of linked list
#include <stdio.h>
#include <stdlib.h>

#include "Linkedlist.h"

void print_list(node_t * head) {
    node_t * current = head->next;

    while (current != NULL) {
        printf("state is %s, lat is %f, lon is %f\n", current->state, current->lat, current->lon);
        current = current->next;
    }
}

void push(node_t * head, char val[], char state[], char city[], double lat, double lon) {
    node_t * current = head;
    //printf("current value is %s\n", current->val);
    //printf("value is %s\n", val);
	while (current->next != NULL) {
		current = current->next;
	}

	/* now we can add a new variable */
	current->next = malloc(sizeof(node_t));
	current->next->val = val;
	current->next->state = state;
	current->next->city = city;
	current->next->next = NULL;
	current->next->lat = lat;
	current->next->lon = lon;
}

//int main()
//{
//	node_t* head = NULL;
//	head = malloc(sizeof(node_t));
//	head->val = "start";
//	head->next = NULL;
//	push(head, "hello");
//	push(head, "world");
//	push(head, "kitty");
//	print_list(head);
//// 	if(head->val == NULL){
//// 	    printf("hello");
//// 	}
//	//printf("head is %s\n", head->val);
//
//    return 0;
//}
