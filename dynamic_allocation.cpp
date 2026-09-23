//dynamic memory allocation 
#include<iostream>
using namespace std;

// here i make class name student 
class Student{
    public:
    int id;
    string name;
    int semester;
    float *gpa;// adding gpa in memory allocation 

    // here i make constructor 

    Student(int id, string name, int semester,float gpa ){
        cout<<"student parametrise constructor "<<endl;
        this->id=id;
        this->name =name ;
        this->semester =semester ;
        this->gpa=new float(gpa);
    }

    // here i declare the function / behaviour 

    void sleep(){
        cout<<this->name<< " is sleeping ";
    }

    ~Student(){
        cout<<"student distructor";
        delete this->gpa;
    }
};

int main(){
    Student*A= new Student(342,"suraj",4,6.5);
    cout<< A->name<<endl;
    cout<<*(A->gpa)<<endl;
    delete A;
}