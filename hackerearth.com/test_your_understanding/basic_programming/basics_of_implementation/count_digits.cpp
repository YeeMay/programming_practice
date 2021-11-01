#include <iostream>
using namespace std; 

int main(){
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0,
	eight = 0, nine = 0;

	string S; 

	cin >> S;

	int Slen = S.length();

	for (int j=0; j<Slen; j++){
		if (S[j] == '0'){
			zero++;
		}
		else if (S[j] == '1'){
			one++;
		}
		else if (S[j] == '2'){
			two++;
		}
		else if (S[j] == '3'){
			three++;
		}
		else if (S[j] == '4'){
			four++;
		}
		else if (S[j] == '5'){
			five++;
		}
		else if (S[j] == '6'){
			six++;
		}
		else if (S[j] == '7'){
			seven++;
		}
		else if (S[j] == '8'){
			eight++;
		}
		else if (S[j] == '9'){
			nine++;
		}
	}

	cout << "0" << " " << zero << endl;
		cout << "1" << " " << one << endl;
		cout << "2" << " " << two << endl;
		cout << "3" << " " << three << endl;
		cout << "4" << " " << four << endl;
		cout << "5" << " " << five << endl;
		cout << "6" << " " << six << endl;
		cout << "7" << " " << seven << endl;
		cout << "8" << " " << eight << endl;
		cout << "9" << " " << nine << endl;

		return 0;


}