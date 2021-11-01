#include <iostream>
#include <string>

#define hashN 100003

using namespace std;

struct info{
	int rollN;
	string name;
};

info hashTable[hashN];

int hashf(int i){
	return i%hashN;
}

void insert(int i, string s){
	int index = hashf(i);

	while (hashTable[index].rollN != -1){
		index += 1;
		index %= hashN;
	}

	hashTable[index] = {i, s};
}

string search(int i){
	int index = hashf(i);

	while (hashTable[index].rollN != i){
		index += 1;
		index %= hashN;
	}

	return hashTable[index].name;
}

int main(){
	int colleagueN = 0;
	cin >> colleagueN;
	
	int rollN;
	string name;

	for (int i = 0; i < hashN; i++){
		hashTable[i] = {-1, ""};
	}

	for (int i = 0; i < colleagueN; i++){
		cin >> rollN >> name;
		insert(rollN, name);
	}

	int queryN = 0;
	cin >> queryN;

	for (int i = 0; i < queryN; i++){
		cin >> rollN;
		cout << search(rollN) << endl;
	}

return 0;

}