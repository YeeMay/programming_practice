#include <iostream>
using namespace std;

int countOne(int);

int main(){
	int T;
	int N;

	cin >> T;

	for (int i = 0; i < T; i++){
      cin >> N;
	
	  cout << countOne(N) << endl;
	}
	


}

 int countOne(int N){
	int count=0;

	while (N){
		N = N&(N-1);
		count++;
	}

	return count;
}
