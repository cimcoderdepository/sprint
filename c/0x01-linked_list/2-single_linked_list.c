#include <stdio.h>
#include <stdlib.h>
#include "my_node.h"

/**
 * main - CREATING A SINGLE LINKED LIST (PART 2)
 *
 * Return: 0 always on success.
 */

int main(void)
{
	/**
	 * CREATING THE 1ST_NODE
	 * Declare the HEAD pointer. Call the malloc function to create
	 * (allocate) bytes in memory for the node; and assign the pointer
	 * (address) returned by the malloc function to HEAD.
	 */
	my_node *head = malloc(sizeof(my_node));

	if (!head)
		return (-1);

	printf("Enter 1st value of the List you're trying to create: ");
	scanf("%ld", &head->data);
	head->link = NULL;
	/**
	 * At this point, 1st node is acheived.
	 *___________________________________________________________________________
	 * CREATING THE 2ND_NODE
	 * Declare a tempoarary pointer (call it CURRENT). Call the malloc function
	 * to create (allocate) bytes in memory for the node; and assign the pointer
	 * (address) returned by the malloc function to CURRENT.
	 */
	my_node *current = malloc(sizeof(my_node));

	if (!current)
		return (-1);
	/**
	 * With the help of the arrow (->) operator, CURRENT can go (access) inside
	 * the node. This means CURRENT is accessing the node and trying to
	 * initialize each member of the 2nd node.
	 */
	printf("Enter 2nd value of the List you're trying to create: ");
	scanf("%ld", &current->data);
	current->link = NULL;
	head->link = current;	/**
							 * Here we're updating the link part of the 1st
							 * node from old value (NULL) to the address of
							 * the 2nd node (stored in CURRENT), then
							 * assigning CURRENT to head->link.
* NOTE: Once CURRENT has delivered its value (address of 2nd node) to be
* stored in (head->link), CURRENT is freed up (ready) to be reused
* subsequently to create other nodes, because its former value is NOT lost
* yet, but has been held in the link part of the 1st node.
*______________________________________________________________________________
	 * CREATING THE 3RD_NODE
	 * We can reuse the CURRENT pointer for creating the 3rd node. Call the
	 * malloc function to create (allocate) bytes in memory for the node; and
	 * assign the pointer (address) returned by the malloc function to CURRENT
	 */
	current = malloc(sizeof(my_node));

	if (!current)
		return (-1);

	printf("Enter 3rd value of the List you're trying to create: ");
	scanf("%ld", &current->data);
	current->link = NULL;
	head->link->link = current;	/**
								 * Here we're updating & assigning the link
								 * part of the 2nd node from old value (NULL)
								 * to the address of the 3rd node (stored in CURRENT).
								 */
	printf("\nList = [%ld, %ld, %ld]\n", head->data, head->link->data, head->link->link->data);
	printf("\n1st value: %ld\n2nd value: %ld\n3rd value: %ld\n"
			"The HEAD is: %p\n\n1st_node address: %p\n2nd_node address: "
			"%p\n3rd_node address: %p\n\nThe 1st value is stored at %p in "
			"memory\nThe 2nd value is stored at %p in memory\nThe 3rd value is "
			"stored at %p in memory\n", head->data, head->link->data, current->data,
			head, head, head->link, current, &head->data, &head->link->data,
			&head->link->link->data);
	printf("\nThe address of %ld is: %p\nThe address of %ld is: %p\nThe address"
			" of %ld is: %p\n", head->data, head, head->link->data, head->link,
			head->link->link->data, head->link->link);
	return (0);
	free(current);
}
