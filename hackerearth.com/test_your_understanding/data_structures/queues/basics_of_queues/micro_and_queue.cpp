#include <iostream>
using namespace std;

void dequeue(int queue[], int& front, int rear){
	if (front == rear){
		cout << -1;
	}

	else{
		int deletedint = queue[front];
		cout << deletedint;
		queue[front] = 0;
		front++;
	}
}

void enqueue(int queue[], int element, int& rear, int arraySize){
	if (rear == arraySize){

	}

	else{
		queue[rear] = element;
		rear++;
	}
}

int size(int rear, int front){
	return (rear-front);
}
int main(){
	int queue[100];
	int N;
	cin >> N;
	int front = 0;
	int rear = 0; 
	int arraySize = 100;


	for (int i = 0; i < N; i++){
		char operation;
		cin >> operation;
		if (operation == 'D'){
			dequeue(queue, front, rear);
			int afterSize = size(rear, front);
		    cout << " " << afterSize << endl;
		}

		if (operation == 'E'){
			int insertedElement;
			cin >> insertedElement;
			enqueue(queue, insertedElement, rear, arraySize);
			int afterSize = size(rear, front);
		    cout << afterSize << endl;
		}


	}
	return 0;
}