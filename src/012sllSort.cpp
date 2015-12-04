/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/


#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
struct node * create(int x) {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	return temp;
}
void sll_012_sort(struct node *head){
	struct node *temp1, *temp2;
	temp1 = head;
	while (temp1->next != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp1->data > temp2->data)
			{
				int y = temp2->data;
				temp2->data = temp1->data;
				temp1->data = y;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	while (head != NULL)
	{
		printf("%d ->", head->data);
		head = head->next;
	}
	printf("null");
}