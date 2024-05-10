#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	if  (input%3==0 && input%5==0 && input%7==0) {
		cout<<"3 5 7";
	} else if(input%3==0 && input%5==0) {
		cout<<"3 5";
	} else if(input%5==0 && input%7==0){
		cout<<"5 7";
	}else if(input%3==0 && input%7==0){
		cout<<"3 7";
	}else if(input%3==0){
		cout<<"3";
	}else if(input%5==0){
		cout<<"5";
	}else if(input%7==0){
		cout<<"7";
	}else{
	  cout<<"n";
	}
	return 0;
}

