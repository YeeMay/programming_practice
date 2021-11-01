#include <iostream>
using namespace std;

struct linkedList{
	int data;
	struct linkedList *next;
};

typedef struct linkedList *node;

node createNode(){
	node temp;
	temp = (node)malloc(sizeof(struct linkedList));
	temp->data = 0;
	temp->next = NULL;
	return temp;
}

node addNode(node head, int val){
	node temp;
	node p;

	temp = createNode();
	temp->data = val;
	if (head == NULL){
		head = temp;
	}

	else{
		p = head;

		while (p->next != NULL){
			p = p->next;
		}

		p->next = temp;
	}

	return head;
}

int main() {
	node head = createNode();
	head = addNode(head, 5);
	head = addNode(head, 4);
	head = addNode(head, 7);

	node p = head;

	while (p != NULL){
		cout << p->data << endl;
		p = p->next;
	}

	return 0;
}
