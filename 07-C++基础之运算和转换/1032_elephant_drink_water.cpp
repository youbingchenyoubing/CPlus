#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int high,radius; 
	cin>>high>>radius;
	double volume=3.14*radius*radius*high;
	int number = 20000/volume+1;
    cout<<number<<endl;
} 
