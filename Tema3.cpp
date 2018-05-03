/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template <class T>class Container
{ 
	public:
		T obj;
	Container(T contain)
	{
		obj = contain;
	}
	  Container(){};
	 ~Container(){};
	void setMethod(T input)
	{
		obj = input;		
	}
	T getMethod() const {
		return obj;
	}
};

bool isOdd(Container<int> i){
    return (i.getMethod()%2)==0;
}


ostream& operator << (ostream& cout, const Container<int> &c) {
	cout << c.getMethod();
	return cout;
}

int main()
{
	vector<Container<int> > container ;
	Container<int> obj1, obj2;
	obj1.setMethod(10);
	obj2.setMethod(9);
	container.push_back(obj1);
	container.push_back(obj2);
    cout<< "AFISARE VECTOR: ";
    for (auto i : container)
		cout << i.getMethod() << " ";
    cout<<endl;
	auto it  = find_if(container.begin(), container.end(),isOdd);
    cout<<"pare: "<< *it <<endl;
    container.erase(remove_if(container.begin(), container.end(), isOdd),container.end()); 
    for (auto i : container)
		cout << i.getMethod() << " ";
    cout<<endl;
	 
	return 0;
}
