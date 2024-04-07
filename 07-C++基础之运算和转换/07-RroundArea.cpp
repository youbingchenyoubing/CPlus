#include <iostream>
using namespace std;  
int main(){
	const float PAI=3.14159;
	int radius;
	cin>>radius;
	cout<<"radius:"<<radius<<endl;
	double round_area=PAI*radius*radius;
	cout<<round_area<<endl;
	return 0;                  
}
