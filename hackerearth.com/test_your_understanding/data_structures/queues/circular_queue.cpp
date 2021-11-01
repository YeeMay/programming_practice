#include <iostream>
using namespace std;

void enqueue(char queue[], int element, int& rear, int arraySize, int& count){
	if (count == arraySize){
		cout << "Overflow." << endl;
	}

	else{
		queue[rear] = element;
		rear += 1;
		rear %= arraySize;
		count += 1;
	}
}

void dequeue(char queue[], int& front, int rear, int& count, int arraySize){
	if (count == 0){
		cout << "Underflow." << endl;
	}

	else{
		queue[front] = 0;
		//front += 1;
		//front %= arraySize;
		front = (front+1)%arraySize;
		count -= 1;
	}
}

int frontElement(char queue[], int front){
	return queue[front];
}

int rearElement(char queue[], int rear){
	return queue[rear-1];
}

int size(int count){
	return count;
}

bool ifEmpty(int count){
	return (count == 0);
}

int main() {
	char queue[5] = {'a', 'b', 'c', 'd'};
	int front = 0;
	int rear = 4;
	int count = 4;
	int arraySize = 5;
	char el = 'e';
	char el2 = 'f';

	dequeue(queue, front, rear, count, arraySize);
	enqueue(queue, el, rear, arraySize, count);
	enqueue(queue, el2, rear, arraySize, count);

	for (int i=0; i<arraySize; i++){
		cout << queue[i];
	}

	cout << endl;

	char frel = frontElement(queue, front);
	char reel = rearElement(queue, rear);

	cout << "Front element: " << frel << endl;
	cout << "Rear element: " << reel << endl;

	return 0;
}
