#include<iostream>
using namespace std;
int main() {
	int chinese_score;
	int math_score;
	cin >> chinese_score>>math_score;
	if  ((chinese_score>=60&&math_score>=60)||
	     (chinese_score<60 && math_score<60)) {
		cout<<"0\n";
	} else {
		cout<<"1\n";
	}  
	return 0;
}

