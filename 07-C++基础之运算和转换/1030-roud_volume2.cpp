#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	const double PAI = 3.14;
	double radius;
	cin>>radius;
	double roud_volume = 4.0/3*PAI*pow(radius,3);
	cout<<fixed<<setprecision(2)<<roud_volume<<endl; 
	return 0;
} 
