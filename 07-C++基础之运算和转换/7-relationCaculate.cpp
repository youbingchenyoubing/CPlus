#include <iostream>
using namespace std;
int main()
{     int n1=4,n2=5,n3;
      n3=n1>n2;                       //n3的值为0
      cout<< "n1>n2 "<<n3<<endl;
      n3=n1<n2;                       //n3的值变为1
      cout<< "n1<n2 "<<n3<<endl;
      n3=n1==4;                       //n3的值变为1
      cout<< "n1==4 "<<n3<<endl;
      n3=n1!=4;                        //n3的值变为0
      cout<< "n1!=4 "<<n3<<endl;
      n3=n1==1+3;                   //n3的值变为1
      cout<< "n1==1+3 "<<n3<<endl;
      return 0; 
}
