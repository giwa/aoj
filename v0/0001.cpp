#include <iostream>
using namespace std;

const static int MAX = 10000;

int main() {
    int R[MAX]={0};
    int e;

    for (int i=0; i < 10; i++ ) {
        cin >> e;
        R[e] = e;
    }

    int cnt = 0;
    for (int j = MAX; j >= 0 ; j--){

        if  (cnt >= 3) break;

        if (R[j] != 0){
            cout << R[j] << endl;
            cnt++;
        }
    }
    return 0;
}
