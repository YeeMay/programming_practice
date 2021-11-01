#include <iostream>
using namespace std;

int top;

void checkParentheses(char str[], int n, char stack[]){
	for (int i=0; i<n; i++){
		if (str[i] == '('){
			top += 1;
			stack[top] = '(';
		}

		if (str[i] == ')'){
			if (top == -1){
				top -= 1;
				break;
			}

			else{
				top -= 1;
			}
		}
	}

	if (top == -1){
		cout << "String is balanced." << endl;
	}

	else{
		cout << "String is unbalanced." << endl;
	}
}

int main() {
	char str1[] = {'(', 'H', 'e', 'l', 'l', 'o', '(', 'i', 's', '(', 'm', 'e', ')', ')', ')', '\0'};
	char str2[] = {'(', 'H', 'e', 'l', 'l', 'o', '(', 'i', 's', '(', 'm', 'e', ')', ')', '\0'};
	char str3[] = {'(', 'H', 'e', 'l', 'l', 'o', '(', 'i', 's', '(', 'm', 'e', ')', '\0'};
	char str4[] = {'(', 'F', 'e', 'l', 'l', 'o', '(', 'i', 's', '(', 'h', 'e', ')', ')', ')', '\0'};

	char stack[20];

	cout << str1 << endl;
	top = -1;
	checkParentheses(str1, 15, stack);

	cout << str2 << endl;
	top = -1;
	checkParentheses(str2, 14, stack);

	cout << str3 << endl;
	top = -1;
	checkParentheses(str3, 13, stack);

	cout << str4 << endl;
	top = -1;
	checkParentheses(str4, 15, stack);
	return 0;
}
