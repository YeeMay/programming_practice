#include <iostream>

using namespace std;
int board[10][10] = {0};
bool isAttacked(int x, int y, int N);
bool nQueen(int N, int level);

int main(){
	int N;
	cin >> N;
	if (nQueen(N, 0) == true){
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	for (int x=0; x<N; x++) {
		for (int y=0; y<N; y++) {
			cout << board[x][y] << " ";
		}
		cout << "\n";
	}
}

bool isAttacked(int x, int y, int N){

	for (int f=0; f<N; f++){
		if (board[x][f] == 1 && f!=y ){
			return true;
		}

		if (board[f][y] == 1 && f!=x ){
			return true;
		}
	}

	for (int m = 0; m < N; m++){
		for (int n = 0; n < N; n++){
						
			if (m+n == x+y && board[m][n] == 1){
				return true;
			}

			if (m-n == x-y && board[m][n] == 1){
				return true;
			}

			
		}
	}
	return false;
}

bool nQueen(int N, int level){
	if (level == N){
		return true;
	}

	for (int j=0; j<N; j++){
		if(isAttacked(level, j, N) == true){
			continue;
		}
		board[level][j] = 1;

		if (nQueen(N, level + 1) == true){
			return true;
		}

		board[level][j] = 0;
	}
	

	return false;
}