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
    int in_hand;
public:
    base hnad[30];
    void start();
    ~desk();
    void show_hand();
    void drop();
};
    void desk::show_hand()
    {
        for(auto i=0; i<this->in_hand;i++)
            this->hnad[i].show();
    }
   void base::show()
   {
   std::cout<<this->cost<<std::endl<<this->name<<std::endl<<this->attack<<std::endl;
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
