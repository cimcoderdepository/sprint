#include <stdio.h>
#include <stdlib.h>
#include "my_node.h"

/**
 * main - CREATING THE NODE OF A SINGLY LINKED LIST
 *
 * Return: 0 Always on success.
 */

int main(void)
{
	my_node *head = NULL;

	head = (my_node *)malloc(sizeof(my_node));
	if (head == NULL)		/* if malloc fails || if (0) || if (!head) */
		return (1);			/* (0) == Success, (!0) == not successful */

	else
	{
		head->data = 45;
		head->link = NULL;
	}
	printf("data is: %d\nlink is: %p\nAddress of node in memory is"
			" located at: %p\nThe value stored in HEAD is: %p\n",
			head->data, NULL, &head->data, head);
	printf("Address of data part: %p\nAddress of link part: %p\n",
			&head->data, &head->link);
	return (0);
}
