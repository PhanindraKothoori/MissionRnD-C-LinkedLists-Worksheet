/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	if (N<0)
	{
		N = -N;
	}
	int d;
	struct node *Node = (struct node*)malloc(sizeof(struct node)), *start = NULL;

	do
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		d = N % 10;
		temp->num = d;
		if (start == NULL)
		{
			start = temp;
			start->next = NULL;
		}
		else
		{
			temp->next = start;
			start = temp;
		}

		N = N / 10;
	}while (N > 0);

	return start;
}