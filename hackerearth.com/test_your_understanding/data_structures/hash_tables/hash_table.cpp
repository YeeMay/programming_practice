#include <iostream>
using namespace std;


int frequency[26];

int hashf(char c){
	return (c - 'a');
}
void countFrequency(string S){
		for (int i = 0; i < S.length(); i++){
			int index = hashf(S[i]);
			frequency[index]++;
		}

		for (int i = 0; i < 26; i++){
			cout << (char)(i + 'a') << " " << frequency[i] << "\n";
	}
}
int main() {
	string Str = "abcabcabcd";
	countFrequency(Str);
	return 0;
}


