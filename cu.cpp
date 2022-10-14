#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> cu {23,45,67,82,89};
	for(vector<int>::iterator i = cu.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	
	return 0;
	
}