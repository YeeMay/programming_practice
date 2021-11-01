#include <iostream>

using namespace std;
int top = -1;

void push(int stack[], int x, int n){
	if (top == n-1){
		cout << "Stack is full. [Overflow]" << endl;
	}

	else{
		top += 1;
		stack[top] = x;
	}
}

bool ifEmpty(){
	if (top == -1){
		return true;
	}

	else{
		return false;
	}
}

void pop(){
	if (ifEmpty()){
		cout  << "Stack is empty. [Underflow]" << endl;
	}

	else{
		top -= 1;
	}
}

int size(){
	return top + 1;
}

int topElement(int stack[]){
	return stack[top];
}

int main(){
	int stack[5];
	push(stack, 5, 5);
	cout << "Current size of stack: " << size() << endl;
	push(stack, 10, 5);
	cout << "Current size of stack: " << size() << endl;
	push(stack, 15, 5);
	cout << "Current size of stack: " << size() << endl;
	push(stack, 20, 5);
	cout << "Current size of stack: " << size() << endl;
	push(stack, 25, 5);
	cout << "Current size of stack: " << size() << endl;

	push(stack, 30, 5);
	cout << "Current size of stack: " << size() << endl;

	//cout << "Top element: " << topElement() << endl;

	for (int i=0; i<5; i++){
		pop();
		cout << "Current size of stack: " << size() << endl;
	}

	pop();
	cout << "Current size of stack: " << size();

	return 0;
}
