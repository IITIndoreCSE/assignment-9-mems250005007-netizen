       
#include <iostream>
using namespace std;

struct Point {float x; float y;};

int main() {
    int c=0;
    Point items[7] = { };
    cout << "Enter coordinates for 7 points (x, y):" << endl;
    
    
    
    for (int i = 0; i < 7; i++) {
        cout<< "Point " << i+1 <<"- x: ";
        cin >> items[i].x;
        cout << endl;
        cout<< "Point " << i+1 <<"- y: ";
        cin >> items[i].y;
        cout << endl ;
        
        
        
        
    }
    
