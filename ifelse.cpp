#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;

    // �޿�P
    if (x > 5 && y > 15) {
        cout << "Both conditions are true" << endl; // ����N�|��X
    }

    // �޿��
    if (x > 15 || y > 15) {
        cout << "At least one condition is true" << endl; // ����N�|��X
    }

    // �޿�D
    if (!(x > 15)) {
        cout << "x is not greater than 15" << endl; // ����N�|��X
    }
    return 0;
}