/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include <vector>
#include <memory>
#include <list>
#include <functional>
using namespace std;
using namespace std::placeholders;
 struct SM{
 	std::string ipRangeStart;
 	std::string ipRangeStop;
 	int clients;//numarul de oameni logati in acel moment
 	/*int connect(int a)
 	    {
 	        if(a<10)
 	            clients-=1;
 	        else
 	            clients+=1;
 	        return clients;
 	    }*/
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
		        cout << i.ipRangeStart <<" "<<i.ipRangeStop<<" "<<i.clients<<endl;
            cout<<endl;
 	    }
 	    void connect(string Start, string Stop,int a)
 	    {
 	        for (auto i : container_)
 	        
 	        {
 	            if(Start == i.ipRangeStop &&Stop == i.ipRangeStart)
 	            {
         	        if(i.clients>a)
         	            i.clients-=1;
         	        else
         	            i.clients+=1;
 	            }
 	            
 	        }
 	    }
 	 
 	    //auto bound_member_fn = std::bind (&SM::connect,_1,_2);
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
      	/*auto bound_member_fn = std::bind (&SM::connect,_1);
      	std::cout << bound_member_fn() << '\n';*/
  };
    template <class T,class U, class Z>std::shared_ptr<Watcher<T,U,Z>>watcherPtr_;
  
     		
    template <class T,class U, class Z>
    class Notifier
    {
    	private:
   	        std::vector<const Watcher<T,U,Z>> subscribers_;
   	
   };
   
   template <class T,class U, class Z> std::shared_ptr<Notifier<T,U,Z>> notifierPtr_;
   template <class T,class U, class Z> std::shared_ptr<const Notifier<T,U,Z>> notifierCPtr_; 
int main()
{
    cout<<"Hello World"<<endl;
    
    struct SM ob,ob2;
    ob.ipRangeStart="90";
    ob.ipRangeStop="150";
    ob2.ipRangeStart="102";
    ob2.ipRangeStop="150";
    ob.clients=200;
    ob2.clients=100;
    StateMachine<int>state;
    state.pushCont(ob);
    state.pushCont(ob2);
    
    state.afisare();
    state.connect("90","150",100);
    state.connect("102","150",101);
    state.afisare();
    
    return 0;
}
