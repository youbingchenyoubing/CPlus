#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int boy,girl; 
	cin>>boy>>girl;
//    cout<<p<<endl;
    double average = 1.0*(87*boy+85*girl)/(girl+boy);
    cout<<fixed<<setprecision(4)<<average<<endl;
} 
