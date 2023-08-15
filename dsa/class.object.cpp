#include<iostream>
using namespace std;
//creation of class
class hero{
    //properties
    private:
    int health;
    public:
    char level;
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health =h;
    } 
    void setlevel(char l){
        level =l;
    }

};
int main(){
    //creation of objects
    hero h1;
    h1=sethelth(70);
    h1.sethealth('b')
    cout<<"health is :"<<h1.gethealth()<<endl;
    
    h1.sethealth(70);
  //  h1.health=70;
    h1.level='a';
    cout<<"health is : "<<h1.gethealth()<<endl;
    cout<<"level is : "<<h1.level<<endl;
}
