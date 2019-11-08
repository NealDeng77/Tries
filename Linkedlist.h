/*
 * LinkedList.h
 *
 *  Created on: Nov 5, 2019
 *      Author: neald
 *      reference: https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
// C program for generic linked list
#include<stdio.h>
#include<stdlib.h>

/* A linked list node */
typedef struct Node
{
    // Any data type can be stored in this node
    char* val;
    char* state;
    char* city;
    struct Node *next;
    double lat;
    double lon;
}node_t;

/* Function to add a node to the end of the list */
void push(node_t * head, char val[], char state[], char city[], double lat, double lon);

/* Function to print nodes in a given linked list. fpitr is used
   to access the function to be used for printing current node data.
   Note that different data types need different specifier in printf() */
void print_list(struct Node *node);

#endif /* LINKEDLIST_H_ */
