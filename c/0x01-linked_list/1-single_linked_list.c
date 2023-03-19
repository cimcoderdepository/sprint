#include <stdio.h>
#include <stdlib.h>
#include "my_node.h"

/**
 * main - Creating a Single Linked List (Part 1)
 *
 * Return: 0 always on success.
 */

int main(void)
{
	/* STEP 1: create a node - see declaration in header file */

	/* STEP 2: declare a pointer -"head," and initialize to NULL or zero (0) */
	my_node *head = NULL;

	/**
	 * STEP 3: call the malloc function to allocate memory for the creation
	 * of the 1st node; and then go ahead to store the address of the node as
	 * created by malloc function into "HEAD" pointer. If malloc successfully
	 * allocate memory, a node is created and ready to be assigned values, else
	 * malloc will return a void (NULL) pointer back to HEAD
	 */
	head = malloc(sizeof(my_node));

	if (!head)
		return (-1);

	if (head)
	{
		head->data = 45;
		head->link = NULL;
	}
	/**
	 * STEP 4: call the malloc function again -this time to create the 2nd
	 * node and then go ahead to store the address of the created node into
	 * "CURRENT" pointer. This time we choose not to loose the content
	 * (address of 1st node) already contained in HEAD, thus leading to
	 * improvise a second (rather a temporary) pointer to hold the address
	 * (or pointer) of the 2nd node that will be returned by malloc if
	 * successful. On success, a node is created and ready to be assigned
	 * values, else malloc will return a void (NULL) pointer back to CURRENT
	 */
	my_node *current = malloc(sizeof(my_node));

	if (!current)		/* if (!current) || if (current == NULL) || if (0) */
						/* NOTE: 0 means FALSE */
		return (-1);	/* (!0) on a return statement is FALSE */

	if (current)		/* if (current) || if (1) */
	{
		current->data = 98;
		current->link = NULL;
		head->link = current;
	}
	printf("address stored in head: %p\n1st value in the list: %ld\n"
			"2nd value in the list: %ld\naddress of 1st node: %p\n"
			"address of 2nd node: %p\n", head, head->data, current->data,
			&head->data, &current->data);
	return (0);
}
