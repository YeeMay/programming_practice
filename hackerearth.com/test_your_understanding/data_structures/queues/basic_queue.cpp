#include <iostream>
using namespace std;

void enqueue(char queue[], char element, int& rear, int arraysize){
	if (rear == arraysize){
		cout << "Overflow." << endl;
	}

	else{
		queue[rear] = element;
		rear++;
	}

}

void dequeue(char queue[], int& front, int rear){
	if (front == rear){
		cout << "Underflow." << endl;
	}

	else{
		queue[front] = 0;
		front++;
	}
}

char frontElement(char queue[], int front){
	return queue[front];
}

int main() {
	char queue[20] = {'a', 'b', 'c', 'd'};
	int front = 0;
	int rear = 4;
	int arraysize = 20;
	int step = 3;
	char chr;

	for (int i=front; i<rear; i++){
			cout << queue[i];
		}

	cout << endl;

	for (int i=0; i<step; i++){
		chr = frontElement(queue, front);
		enqueue(queue, chr, rear, arraysize);
		dequeue(queue, front, rear);

		cout << "Case " << i+1 << " when chr = " << chr << " Current queue = ";

		for (int i=front; i<rear; i++){
				cout  << queue[i];
			}

		cout << endl;

	}

	for (int i=front; i<rear; ++i){
		cout << queue[i];
	}

	cout << endl;

	return 0;
}
