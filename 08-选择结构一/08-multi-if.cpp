#include<iostream>
using namespace std;
int main() {
	int score;
	cin >> score;
	if(score>=90) {
		cout<<"����!\n";
	} else if(score>=80&&score<90) {
		cout<<"����!\n";
	} else if(score>=60&&score<80) {
		cout<<"�ϸ�!\n"<<"\n";
	} else {
		cout<<"������!\n";
	}
	return 0;
}

