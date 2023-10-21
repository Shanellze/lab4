#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    if ((y>=x) && (z>=y)){
        cout << "In order";

    } else {
        cout << "Not in order";
    }

}