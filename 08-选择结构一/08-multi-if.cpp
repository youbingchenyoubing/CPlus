#include<iostream>
using namespace std;
int main() {
	int score;
	cin >> score;
	if(score>=90) {
		cout<<"优秀!\n";
	} else if(score>=80&&score<90) {
		cout<<"良好!\n";
	} else if(score>=60&&score<80) {
		cout<<"合格!\n"<<"\n";
	} else {
		cout<<"不及格!\n";
	}
	return 0;
}

