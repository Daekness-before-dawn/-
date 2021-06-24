#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<Windows.h>
using namespace std;
#include<vector>
#include<algorithm>


void myprint1(int val)
{
	cout << val << " ";
}
class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test1()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(30);
	for_each(v1.begin(),v1.end(), myprint());
	cout << endl;
	for_each(v1.begin(), v1.end(), myprint1);
	
}
int main()
{
	test1();
	system("pause");
	return 0;
}