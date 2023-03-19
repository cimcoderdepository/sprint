#include <stdio.h>
#include <stdlib.h>
#include "my_node.h"

/**
 * count_of_nodes - Traversing a Single Linked List (Counting the Nodes)
 * @head: the HEAD pointer.
 */
void count_of_nodes(my_node *head)
{
	int count = 0;

	if (head == NULL)
		printf("Linked List is empty\n");

	my_node *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("Number of nodes: %d\n", count);
}
int main(void)
{
	my_node *head = NULL;

	head = malloc(sizeof(my_node));

	if (!head)
		return (-1);

	printf("Enter 1st value of the List you're trying to create: ");
	scanf("%ld", &head->data);
	head->link = NULL;

	my_node *current = malloc(sizeof(my_node));

	if (!current)
		return (-1);

	printf("Enter 2nd value of the List you're trying to create: ");
	scanf("%ld", &current->data);
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(my_node));

	if (!current)
		return (-1);

	printf("Enter 3rd value of the List you're trying to create: ");
	scanf("%ld", &current->data);
	current->link = NULL;
	head->link->link = current;

	printf("\nList = [%ld, %ld, %ld]\n", head->data, head->link->data,
			head->link->link->data);

	count_of_nodes(head);
	return (0);
}
