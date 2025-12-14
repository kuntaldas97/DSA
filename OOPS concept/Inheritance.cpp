#include <iostream>

using namespace std;
class Fruit{
    public:
    string name;
};
class Mango : public Fruit{
    public:
    int weight;
};
class Alfanso : public Mango{
    public:
    int sugerLevel;

};

int main(){
    Alfanso f1;
    cout << f1.name << " "<<f1.weight << " "<<f1.sugerLevel << endl;

    return 0;
}
