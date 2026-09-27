#include<iostream>
using namespace std;
// here i am going to declare perfect incapsulation 
// perfect encapsulation me attributes private hota h
class Student{
    private:
    int id;
    string name;
    int semester;
    public:

    // set and get function 
    void setname (string  a ){
        this->name=a;
    }

    // getter 
    string getname() const{
        return this->name;
    }
    Student(int id, string name, int semester ){
        cout<<"student constructor"<<endl;
        this->id=id;
        this->name=name;
        this->semester=semester;
    }

    // behaviour 
    void sleep(){
        cout<<this->name <<" is sleeping :"<<endl;
    }

    ~Student(){
        cout<<"student distructor ";
    }
};

int main(){
    Student A(232,"suraj",4);
    
    A.setname("singh");
    cout<<A.getname();

}