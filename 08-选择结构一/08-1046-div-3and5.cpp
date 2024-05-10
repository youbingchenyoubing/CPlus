#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	if  (input%3==0 && input%5==0) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}  
	return 0;
}

