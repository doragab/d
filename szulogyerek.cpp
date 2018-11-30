#include <iostream>
using namespace std;


class Szulo{
    public:
        virtual void fuggveny(){
            cout<<"szulo"<<endl;
        };
};

class Gyerek: public Szulo{
    public:
        void fuggveny() {
            cout<<"gyerek"<<endl;
        }
        void ujfuggveny() {
            cout<<"ujfuggveny"<<endl;
        }
};

int main() {
    Szulo *a;
    a = new Szulo();

    Gyerek *b;
    b = new Gyerek();

    Szulo *c;
    c = new Gyerek();

    //Gyerek *ujszulo;

    a->fuggveny();
    b->fuggveny();
    c->fuggveny();
    
    return 0;
}
