#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> hashTable[20];

int hashf(string c){
	return c.length() % 20;
}

void insert(string s){
	int index = hashf(s);

	hashTable[index].push_back(s);
}

void search(string s){
	int index = hashf(s);
	for (auto i: hashTable[index]){
		cout << i << " ";
	}

	cout << endl;
	for (int i = 0; i < hashTable[index].size(); i++){
		if (hashTable[index][i] == s){
			cout << s << " is found." << endl;
			return;
		}

		cout << s << " is not found." << endl;
	}
}
int main() {
	insert("meow");
	insert("mewo");
	insert("mew");
	insert("mellow");
	search("meow");
	return 0;
}
