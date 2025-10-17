#include <iostream>
using namespace std;

struct Color {int red; int blue; int green;};

int main() {
    Color items[6] = {{1, 2,3},{2, 4,7},{3, 6,7},{3,67,34},{0,0,44},  {0,86,78} };

    cout << "new structure" << endl;
    for (int i = 0; i < 3; i++) {
      items[i].red=255-items[i].red;
      items[i].blue=255-items[i].blue;
      items[i].green=255-items[i].green;
     
           
        
    }
    for (int i = 0; i < 6; i++) {
     cout <<"Element : "<<i+1<< " red "<<items[i].red<<" blue "<<items[i].blue<<" green "<<items[i].green << endl;
    }

    return 0;
}
