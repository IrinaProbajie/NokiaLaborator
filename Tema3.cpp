#include<iostream>
#include<string.h> 
#include<vector>
#include<algorithm>
#include<cctype>
//#include<functional>
using namespace std;
class Container
{
	private: int obj;
	public:Container();
	~Container();
	void SetMethod(int a)
	{
		obj=a;
	}
	int GetMethod()
	{
		return obj;
	}
};
bool IsOdd(int i)
{
    return i%2==0;
}
int main()
{ /*
	Container *ob1,*ob2,*ob3;
	ob1->SetMethod(60);
	cout<<ob1->GetMethod();
	ob1->SetMethod(80);
	cout<<ob1->GetMethod();
	ob1->SetMethod(100);
	cout<<ob1->GetMethod();
	//vector< Container> vec={<vector<ob1>,vector<ob2>,vector<ob3>};*/
	vector<int> v = {1,5,7,8,9,10};
	int x;
	vector<int> ::iterator it =find_if(v.begin(),v.end(),IsOdd);
	    //cout<<*it;
	for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	cout<<endl;
	    
	v.erase(remove_if(v.begin(),v.end(),IsOdd));
	for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	
	return 0;
}
