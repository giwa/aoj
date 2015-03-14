#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4, ab, cd;
    int n, r;

    cin >> n;
    while(n--){
        cin >>x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        r = (x2 - x1) * (y3 - y4) - (x3 -x4) * (y2 - y1);
        if (!r){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
