#include <iostream>

using namespace std;

// creating class
class Animal{

    // state or properties

    private:
    int weight;
    public:
    int age;
    string type;

    // behaviour 
    void eat(){
        cout << "eating" <<endl;
    }
    void sleep(){
        cout << "sleeping"<<endl;
    }
    int getWeight(){
        return weight;
    }
    void setWeight(int weight){
        // if we pass the same variable which we declared in the beginning of a class as an 
        // argument to a function then we'll make use of 'this' which is a pointer to the object and to access the values we can use the below process 
    //  (*this).weight=weight; 
        this->weight=weight;

    }

    // concept of constructor

    Animal(){
        this->age=0;
        this->weight=0;
        this->type="";
        cout << "Constructor is called :"<<endl;
    }
    Animal(int age){
        this->age=age;
    cout << "Single Parameterized Constructor is called :"<<endl;  
    }
    Animal(int age, int weight){
        this->age=age;
        this->weight=weight;
    cout << "Double Parameterized Constructor is called :"<<endl;
    }
    Animal(int age, int weight, string type){
        this->age=age;
        this->weight=weight;
        this->type=type;
    cout << "Tripple Parameterized Constructor is called :"<<endl;
    }

    // copy constructor
    
    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->type=obj.type;
    cout << "This is a copy constructor : "<< endl;
    }

    ~Animal(){
        cout << "I'm inside the destructor :"<<endl;
    }
};

int main(){

    // creating object
    // static
    // Animal ramesh;
    // ramesh.age=14;
    // ramesh.type="Lion";
    // ramesh.setWeight(150);
    // int weight=ramesh.getWeight();

    // cout << "The age of Ramesh is : "<<ramesh.age << " years"<< endl;
    // cout << "The type of Ramesh is : "<< ramesh.type << endl;
    // cout << "The weight of ramesh is : "<<weight<<" kg"<<endl;
    // ramesh.eat();
    // ramesh.sleep();

    // // Dynamic oject creation
    // Animal* suresh = new Animal;

    // suresh->age=5;
    // suresh->type="baby";

    // cout << suresh->age << " "<< suresh->type << endl;
    // suresh->eat();
    // (*suresh).sleep(); // using both *objectName or -> you can access the value of that object

    // Animal* mukesh=new Animal;

    Animal a(10);

    Animal* b=new Animal;

    delete b;
    //Animal animal1(c);

    return 0;
}