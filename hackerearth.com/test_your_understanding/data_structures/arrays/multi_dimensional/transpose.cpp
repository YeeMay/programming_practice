#include <iostream>

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;

	int A[N][M];

	for (int b=0; b<N; b++){
		for (int k=0; k<M; k++){
			cin >> A[b][k];
		}
	}

	for (int w=0; w<M; w++){
		for (int d=0; d<N; d++){
			cout << A[d][w] << " ";
		}

		cout <<endl;
	}

	return 0;

	
}