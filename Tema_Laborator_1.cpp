#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Animale //clasa abstracta
{
	protected:
		int viteza;
	private:
		int picioare;
	public:
		Animale();
		Animale(int viteza,int picioare) 
		{
			this->viteza = viteza;
			this->picioare = picioare;
		}
	   
	   virtual void afisare()
	   {
	   		cout << "---------------------------"<<endl;
		   cout << "VitezaL: " << this->viteza<<endl;
		   cout << "Picioare: " << this->picioare<<endl;
	   }
		public:virtual void AddLifeTime(int a) = 0;
		public:virtual void getspeed() = 0;
};
class Porumbel :public Animale
{	
	protected:
		bool canFly;
	public:Porumbel(int viteza, int picioare,bool canFly) :Animale(viteza,picioare)
	{
		
		this->canFly=canFly;
	}
    ~Porumbel();
	 void afisare()
	{
		   Animale::afisare();
		   cout << "Poate zbura: " << this->canFly<<endl;
	}
	  void AddLifeTime(int Life_Time) 
	   {
		   cout << "LifeTime: " << Life_Time << " years" << endl;
	   }
	 public:virtual void getspeed() 
	   {
		   cout <<"viteza Returnata:"<< viteza*5 << endl;
	   }
};
class Pinguin :public Animale
{
	private:
		char *regiune;
	protected:
		bool canFly;
	public:
	Pinguin (int viteza,int picioare, char *regiune ,bool canFly) :Animale(viteza,picioare)
	{
		this->regiune=new char[strlen(regiune)+1];
		strcpy(this->regiune,regiune);
		this->canFly=canFly;
	}
    ~Pinguin();
	 void afisare()
	{
		   Animale::afisare();
		   cout << "Regiune: " << this->regiune<<endl;
		   cout << "Poate zbura? : " << this->canFly<<endl;
	}
	void AddLifeTime(int Life_Time) 
	   {
		   cout << "LifeTime: " << Life_Time << " years" << endl;
	   }
	 public:virtual void getspeed() 
	   {
		   cout <<"viteza Returnata:"<< viteza*0.9 << endl;
	   }
};
class Maimuta :public Animale
{
	private:
		char *tip;
	protected:
		bool Inteligenta;
	public:
	Maimuta (int viteza,int picioare,char *tip ,bool Inteligenta) :Animale(viteza,picioare)
	{
		this->tip=new char[strlen(tip)+1];
		strcpy(this->tip,tip);
		this->Inteligenta=Inteligenta;
	}
    ~Maimuta();
	 void afisare()
	{
		   Animale::afisare();
		   cout << "Regiune: " << this->tip<<endl;
		   cout << "E Inteligenta? 1=DA SAU 0=NU : " << this->Inteligenta<<endl;
	}
	void AddLifeTime(int Life_Time) 
   {
		   cout << "LifeTime: " << Life_Time << " years" << endl;
   }
	 public:virtual void getspeed() 
	{
		   cout << "viteza Returnata: "<< viteza*20 << endl;
	}
};
int main()
{
	char regiune[100];
	bool canFly;
	Animale *Porumbel1 = new Porumbel(10, 2,1);
	Animale *Porumbel2 = new Porumbel(15, 2,0);
	Animale *Porumbel3 = new Porumbel(20, 2,0);
	Animale *Porumbel4 = new Porumbel(5, 2,1);
	Animale *Porumbel5 = new Porumbel(80, 2,0);
	Animale *a, *b;
	b=a;//calls assignment operator
	Animale *c=a; //calls copy constructor
	cout<<"Afisare date porumbel :"<<endl;
	Porumbel1->afisare();
	Porumbel1->AddLifeTime(3);
	Porumbel1->getspeed();
	
	Porumbel2->afisare();
	Porumbel2->AddLifeTime(5);
	Porumbel2->getspeed();

	Porumbel3->afisare();
	Porumbel3->AddLifeTime(7);
	Porumbel3->getspeed();
	
	Porumbel4->afisare();
	Porumbel4->AddLifeTime(8);
	Porumbel4->getspeed();
	
	Porumbel5->afisare();
	Porumbel5->AddLifeTime(8);
	Porumbel5->getspeed();
	cout<<"regiunea: ";
	cin>>regiune;
	cout<<"Afisare date Pinguin :"<<endl;
	Animale *Pinguinnn = new Pinguin(8, 7,regiune,1);
	Pinguinnn->afisare();
	Pinguinnn->AddLifeTime(9);
	Pinguinnn->getspeed();
	
	Animale  *Pinguinnn2 = new Pinguin(8, 7,regiune,5);
	Pinguinnn2->afisare();
	Pinguinnn2->AddLifeTime(8);
	Pinguinnn2->getspeed();

	char tipul[100];
	cout<<"Tipul de maimuta: ";
	cin>>tipul;
	cout<<"Afisare date Maimuta :"<<endl;
	Animale *Maimuta1 = new Maimuta(8,7,tipul,0);
	Maimuta1->afisare();
	Maimuta1->AddLifeTime(8);
	Maimuta1->getspeed();
	Animale *Maimuta2 = new Maimuta(9, 5,tipul,1);

	Maimuta2->afisare();
	Maimuta2->AddLifeTime(10);
	Maimuta2->getspeed();
	Animale *Maimuta3 = new Maimuta(56, 2,tipul,1);

	Maimuta3->afisare();
	Maimuta3->AddLifeTime(10);
	Maimuta3->getspeed();
	return 0;
}
