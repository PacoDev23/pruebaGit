#include <iostream> 

using namespace std;

int suma(int a, int b) {
    int suma = a + b;
    return suma; 
}

int main () {
    int a; 
    int b; 
    cin >> a;
    cin >> b;


    cout << "la suma de " << a << " + " << b << " Es = " << suma(a,b);  
    return 0; 
}

