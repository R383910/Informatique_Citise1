#include <iostream>

using namespace std;

int main() {
    float x;
    float y;
    float* p_f = nullptr;

    p_f = &x;
    *p_f = -2.3;

    cout << "valeur de x : "<<x<<endl;
    cout << "valeur de p_f : "<<p_f<<endl;
    cout << "address de x : "<<&x<<endl;
    cout << "address de y : "<<&y<<endl;

    p_f = &y;
    *p_f = 7.4;

    cout<<"valeur de y : "<< y<<endl;
    cout << "valeur de p_f : "<<p_f<<endl;
    cout << "address de x : "<<&x<<endl;
    cout << "address de y : "<<&y<<endl;

    return 0;
}