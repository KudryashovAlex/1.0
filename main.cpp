#include<iostream>
#include<cstring>
class base
{
private:
    unsigned short int cost;
    std::string name;
    unsigned short int attack;
    unsigned short int hp;
public:
    base(unsigned short int cost, std::string name, unsigned short int attack, unsigned short int hp);
    void show();
};
   void base::show()
   {
   std::cout<<cost<<std::endl<<name<<std::endl<<attack<<std::endl<<hp<<std::endl;
   }

   base::base(unsigned short int cost, std::string name, unsigned short int attack, unsigned short int hp)
   {
       this->cost=cost;
       this->name=name;
       this->attack=attack;
       this->hp=hp;
   }
int main()
{
base a(5,"pi",4,5);
a.show();
}
