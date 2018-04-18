#include<iostream>
using namespace std;

template<class Arg, class ... Args>
auto param_max(Arg arg, Args ... args) -> Arg
{	
	Arg valoare = arg;
	for (auto i : { args ... })
	{
		if (i > valoare)
		{
			valoare = i;
		}
	}
	return valoare;
};


int main() 
{
	cout <<param_max(15, 89, 4518, 1045, 350, 75,45,545,5454,215,5455);
	return 0;
}
