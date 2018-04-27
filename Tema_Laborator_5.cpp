#include <iostream>
#include<memory> 
using namespace std;
using std::shared_ptr;
template<class T>
class Baza{
    private:
        T index;
    public:
        Baza(T index){
            this->index = index;
        }
        T getValoare(){
            return this->index;
        }
        void setValoare(T valoare){
            this->index = valoare;
        }
       
};


int main()
{
    shared_ptr<Baza<int>> value=make_shared<Baza<int>>(20);
    cout << value.get()->getValoare()<<  endl;
    value.get()->setValoare(21);
    cout << value.get()->getValoare() << endl;
    return 0;
}
