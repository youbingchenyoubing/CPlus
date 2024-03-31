
#include <iostream>
#include <string> 
using namespace std;  
int main(){
	
	string name;
	int age;
	char sex;
	float english_score; 
	cout<<"输入姓名:";
	cin>>name;
	cout<<"输入性别:";
	cin>>sex;
	cout<<"输入年龄(必须正整数):";
	cin>>age;
	cout<<"英语成绩:";
	cin>>english_score;
	cout<<"姓名:"<<name<<" 性别:"<<sex<<" 年龄: "<<age<<" 英语成绩:"<<english_score<<endl;
	return 0;                  
}
