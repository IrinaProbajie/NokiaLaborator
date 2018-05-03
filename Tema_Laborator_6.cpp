/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <memory>
#include <list>
using namespace std;
 struct SM{
 	std::string ipRangeStart;
 	std::string ipRangeStop;
 	int clients;//numarul de oameni logati in acel moment
 };
 template <class T>
 class StateMachine
 {
 	
 	private:
 		std::vector<SM> container_;
 		SM obj;
 	public:
 	    StateMachine()
 	    {
 	    }
 	    ~StateMachine(){}
 	    void pushCont(SM ob)
 	    {
 	        container_.push_back(ob);
 	    }
 	    void popCont()
 	    {
 	        container_.erase(remove_if(container_.begin(),container_.end(),Greater()));
 	    }
 	    int Greater()
 	    {
 	        return obj.clients>2;
 	    }
 	    void afisare()
 	    {
 	        for (auto i : container_)
		        cout << i.ipRangeStart <<" "<<i.ipRangeStop<<endl;
            cout<<endl;
 	    }
 };

 template<class T>
 std::shared_ptr<StateMachine<T>> SMPtr_;
 template<class T>
 std::shared_ptr<const StateMachine<T>>SMCPtr_;
 
  template <class T,class U, class Z>
  class Watcher{
  	private:
  		list<StateMachine<T>> stateMachinesPtr_;
  		U message_;
  		Z relevance_;
  	public:
  		Watcher(U message_,Z relevance_ )
  		{
  		    this.message_=message_;
  		    this.relevance_=relevance_;
  		}
      	void getMessage()
      	{
      	    return this.message_;
      	}
      	void getRelevance()
      	{
      	    return this.relevance_;
      	}
      	void setRelevance(Z relevance)
      	{
      	     this.relevance_=relevance;
      	}
      	void setMessage(Z Message)
      	{
      	     this.message_=Message;
      	}
      	//functie pt Sm cand i se schimba starea;
  };
  template <class T,class U, class Z>std::shared_ptr<Watcher<T,U,Z>>watcherPtr_;
  
     		
   template <class T,class U, class Z>
   class Notifier{
   
   	private:
   	    std::vector<const Watcher<T,U,Z>> subscribers_;
   	
   };
   
   template <class T,class U, class Z> std::shared_ptr<Notifier<T,U,Z>> notifierPtr_;
   template <class T,class U, class Z> std::shared_ptr<const Notifier<T,U,Z>> notifierCPtr_; 
int main()
{
    cout<<"Hello World"<<endl;
    
    struct SM ob,ob2;
    ob.ipRangeStart="ana";
    ob.ipRangeStop="mere";
    ob2.ipRangeStart="ana2";
    ob2.ipRangeStop="mere2";
    ob.clients=20;
    StateMachine<int>state;
    state.pushCont(ob);
    state.pushCont(ob2);
    state.afisare();
    return 0;
}

