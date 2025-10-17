#include <iostream>
using namespace std;

struct Item {int id; float cost;};

int main() {
    Item items[6] = {{1, 55.5},{2, 47.0},{3, 33.3},{4, 89.9},{0, 0.0},  {0, 0.0} };

    cout << "Items with cost > 50:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.0) {
            cout << "ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
