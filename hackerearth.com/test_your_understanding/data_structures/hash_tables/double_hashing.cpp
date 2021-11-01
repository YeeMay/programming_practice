#include <iostream>
#include <string>
using namespace std;

string hashTable[20];
int hashTableSize = 20;

int hashf(string c){
	return c.length() % 20;
}

int hashff(string c){
	return (c.length()+1) % 20;
}

void insert(string s){
	int index = hashf(s);

	int addIndex = hashff(s);

	while (hashTable[index] != ""){
		index += addIndex;
		index %= hashTableSize;
	}

	hashTable[index] = s;
}

void search(string s){
	int index = hashf(s);

	int addIndex = hashff(s);

	while (hashTable[index] != s && hashTable[index] != ""){
		index += addIndex;
		index %= hashTableSize;
	}

	if (hashTable[index] == s){
		cout << s << " is found." << endl;
	}

	else{
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
