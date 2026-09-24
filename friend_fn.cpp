#include<iostream>
using namespace std;

class Mango {
private:
    int x, y;
    
public:
    void eat(int a, int b) {
        x = a;
        y = b;
    }
    
    void show() {
        cout << x << " " << y << endl;
    }
    
    //  friend function
    friend void dis(Mango);
};


void dis(Mango e) {
    cout << "mango  "<<"x:" << e.x << " y: " << e.y << endl;
}

int main() {
    Mango myMango;        
    myMango.eat(10, 20);   

    dis(myMango); 
    
    return 0;
}
