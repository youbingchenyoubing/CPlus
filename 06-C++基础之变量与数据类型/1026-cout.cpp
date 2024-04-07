#include <iostream>
#include <iomanip>
using namespace std;  
int main(){
	
	char one_char;
	int one_int;
	float one_float;
	double one_double; 
	cin>>one_char>>one_int>>one_float>>one_double;

	cout<<one_char<<" "<<one_int<<" "<<fixed<<setprecision(6)<<one_float<<" "<<one_double<<endl;
	return 0;                  
}
