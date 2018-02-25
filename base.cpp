#include<iostream>
#include<cstring>
class base
{
private:
    unsigned short int cost;
    std::string name;
    unsigned short int attack;
public:
    base(unsigned short int cost, std::string name, unsigned short int attack);
    void show();
    base& operator =(const base& m);
};
class desk
{
private:
    base pack[30];
    void mix();
    int mana;
public:
    base hade[30];
    void start();
    ~desk();
    void drop();
};
   void base::show()
   {
   std::cout<<cost<<std::endl<<name<<std::endl<<attack<<std::endl;
   }

   base::base(unsigned short int cost, std::string name, unsigned short int attack)
   {
       this->cost=cost;
       this->name=name;
       this->attack=attack;
   }
int main()
{
base a(5,"pi",4);
a.show();
}
