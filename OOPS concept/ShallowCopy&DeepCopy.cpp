#include <iostream>

using namespace std;
class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y){
        this->x=_x;
        this->y=new int(_y);
    }

    // Shallow copy : not a good approach
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    // Deep Copy
    abc(const abc &obj){
        this->x=obj.x;
        this->y=new int(*obj.y);
    }

    void print() const{
        cout << x << endl;
        cout << "Address of pointer Y : "<< y<<endl;
        cout << *y << endl << endl;
    }

    ~abc(){
        delete y;
    }

};

int main(){
    abc *a = new abc(1,2);
    (*a).print();
    abc b = *a;
    b.print();
    *b.y=20;
    b.print();
    (*a).print();
    delete a;
    return 0;
}