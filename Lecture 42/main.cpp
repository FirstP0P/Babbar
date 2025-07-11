#include <iostream>
#include <cstring>

// #include "Hero.cpp"
using namespace std;

class Hero{

    //Properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;
    
    //Default Constructor
    Hero(){
        cout<<"Constructor is called"<<endl;
        name = new char [100]; 
    }

    // Parameterised constructor
    Hero(int health,char level){
        cout<<"this -> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    // Copy constructor
    Hero(Hero &temp){

        //Deep Copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name=ch;

        cout<<"Copy constructor called"<<endl;
        cout<<"health"<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
    }

    void print(){
        cout<<"name "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
        cout<<endl;        
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(int ch){
        level=ch;   
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor called "<<endl; 
    }
    
};

int Hero::timeToComplete=5;

int main(){

    //Creation of object
    // Hero Anish; //1 byte of memory will be allocated even if no properties are present

    // Anish.health=70;
    // Anish.level='A';

    // Anish.setHealth(63211); //Setter
    // cout<<"Anish health is: "<<Anish.getHealth()<<endl; //Getter
    // cout<<"Health is: "<<Anish.health<<endl;
    // cout<<"Level is: "<<Anish.level<<endl;


    // --------------------------------------------------------
    /*
    //Static allocation
    Hero Anish;
    Anish.setLevel('A');
    Anish.setHealth(70);
    cout<<"Level is: "<<Anish.level<<endl;
    cout<<"Health is: "<<Anish.getHealth()<<endl;

    //Dynamically allocation
    Hero *b= new Hero;
    b->setLevel('B');
    b->setHealth(80);

    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;
    */
   
    // --------------------------------------------------------
    /*
    //Hero created statically
    cout<<"Hi"<<endl;
    Hero Anish;
    cout<<"Hello"<<endl;
    
    //Hero created dynamically
    cout<<"Hi"<<endl;
    Hero *b= new Hero;
    cout<<"Hello"<<endl;
    */

    // --------------------------------------------------------
    /*
    Hero Anish(10);
    cout<<"Address of Anish "<<&Anish<<endl;

    // --------------------------------------------------------

    /*
    Hero Manish(70,'C');
    Manish.print();

    Hero Banish(Manish);
    Banish.print();
    */
    /*
    // --------------------------------------------------------

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='G';
    hero1.print();

    hero2.print();

    */
    // --------------------------------------------------------
    /*
    Hero hero1;
    Hero hero2;
    
    hero1=hero2;

    */
    // --------------------------------------------------------

    /*
    //Static
    Hero a;

    //Dynamic
    Hero *b =new Hero();
    delete b;   //Manually called
    */
    
    // --------------------------------------------------------

    cout<< Hero::timeToComplete<<endl;   //Access it this way

    Hero a;
    cout<<a.timeToComplete<<endl;   //Don't access it this way

    return 0;
}