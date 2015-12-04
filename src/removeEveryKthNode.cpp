/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head && K>1){
		struct node *prev, *temp;
		temp = head;
		prev = temp;
		int a = 1;
		while (temp){
			if (a%K){
				prev = temp;

			}
			else{
				prev->next = temp->next;
			}
			temp = temp->next;
			a++;
		}
		return head;
	}
	else return NULL;
}