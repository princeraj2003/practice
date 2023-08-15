#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char l){
        level=l;
    }

};
int main(){
    hero h1;  // static allocation
    h1.sethealth(70);
    h1.setlevel('b');
    cout<<"health is :"<<h1.gethealth()<<endl;
    cout<<"level  is :"<<h1.getlevel()<<endl;
    hero *b=new hero; //dynamic allocation
    b->sethealth(80);
    b->setlevel('c');
     cout<<"health is :"<<(*b).gethealth()<<endl;
    cout<<"level  is :"<<(*b).getlevel()<<endl;
    return 0;
}
