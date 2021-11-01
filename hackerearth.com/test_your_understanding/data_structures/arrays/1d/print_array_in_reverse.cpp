#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int arrayA[N];

	for (int i=0; i<N; i++){
		cin >> arrayA[i];
	}

	for (int j=N-1; j>=0; j--){
		cout << arrayA[j] << endl;
	}
}