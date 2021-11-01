#include <iostream>
using namespace std;

void insertAtBack(char queue[], char element, int& rear, int arraySize){
	if (rear == arraySize){
		cout << "Overflow." << endl;
	}

	else{
		queue[rear] = element;
		rear += 1;
	}
}

void deleteFromBack(char queue[], int& rear, int front){
	if (front == rear){
		cout << "Underflow." << endl;
	}

	else{
		rear -= 1;
		queue[rear] = 0;
	}
}

void insertAtFront(char queue[], int& rear, int& front, char element, int arraySize){
	if (rear == arraySize){
		cout << "Overflow." << endl;
	}

	else{
		for (int i=rear; i>front; i--){
			queue[i] = queue[i-1];
		}

		queue[front] = element;
		rear += 1;
	}
}

void deleteFromFront(char queue[], int& front, int& rear){
	if (front == rear){
		cout << "Underflow." << endl;
	}

	else{
		queue[front] = 0;
		front += 1;
	}
}

int frontElement(char queue[], int front){
	return queue[front];
}

int rearElement(char queue[], int rear){
	return queue[rear-1];
}
int main() {
	char queue[20] = {'a', 'b', 'c', 'd'};
	int front = 0;
	int rear = 4;
	int arraySize = 20;

    char el = frontElement(queue, front);
	insertAtBack(queue, el, rear, arraySize);
	insertAtFront(queue, rear, front, el, arraySize);

	for (int i=front; i<rear; i++){
		cout << queue[i];
	}

	cout << endl;

	deleteFromBack(queue, rear, front);
	deleteFromFront(queue, front, rear);

	for (int i=front; i<rear; i++){
		cout << queue[i];
	}

	cout << endl;

	char el2 = rearElement(queue, rear);
	cout << el2 << endl;

	return 0;
}
