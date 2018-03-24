#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#define N 2;
using namespace std;
 
bool sortare(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}
 
int main() {
    
    vector< pair<int, int> > vec;
    int a,b;
    for(int i=0; i<5; i++)
    {
        cin>>a>>b;
        vec.push_back(pair<int, int> (a,b));
    }
/*
	//afisare vector initial
	for(int i=0; i<5; i++)
	{
		cout << "("<< vec[i].first << "," << vec[i].second << ") ; "<< endl;
	}
*/

	
	//daca primul element al perechii este par il setam pe 0;
	for(int i=0; i<5; i++)
	{
		if(vec[i].first%2 ==0)
		{
		   	vec[i].first=0;
		}
	}
	//afisare vector sortat dupa primul element al perechii
	sort(vec.begin(), vec.end());
    for(int i=0; i<5; i++)
	{
	    cout << "("<< vec[i].first << "," << vec[i].second << ") ; "<< endl;
    }
   //afisare vector sortat dupa al doilea element al perechii
	sort(vec.begin(),vec.end(), sortare);
	cout<<"------------------------------------------"<<endl;
    for(int i=0; i<5; i++)
	{
	    cout << "("<< vec[i].first << "," << vec[i].second << ") ; "<< endl;
    }
    return 0;
}
