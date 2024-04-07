#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
//    cout<<p<<endl;
    double area = abs((x2-x3)*(y1-y3)-(x1-x3)*(y2-y3))/2.0;
    cout<<fixed<<setprecision(2)<<area<<endl;
} 
