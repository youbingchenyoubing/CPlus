#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double one = sqrt(pow((y1-y2),2)+pow((x1-x2),2));
	double two = sqrt(pow((y3-y2),2)+pow((x3-x2),2));
    double three = sqrt(pow((y1-y3),2)+pow((x1-x3),2));
//    cout<< one<<two<<three<<endl; 
    double p = (one+two+three)/2;
//    cout<<p<<endl;
    double area = sqrt(p*(p-one)*(p-two)*(p-three));
    cout<<fixed<<setprecision(2)<<area<<endl;
} 
