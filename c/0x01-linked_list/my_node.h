#ifndef _my_node_h
#define _my_node_h


/**
 * node - A user-defined data type
 * @data: data part of the node
 * @link: the part of the node holding the address to the next node
 * my_node: A typdef alias name to call my struct
 */

struct node {
	long int data;
	struct node *link;
};
typedef struct node my_node;

#endif
