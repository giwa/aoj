#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4, ab, cd;
    int n;

    cin >> n;
    while(n--){
        cin >>x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        ab = (y1 - y2) / (x1 - x2);
        cd = (y3 - y4) / (x3 - x4);

        if ((y2 - y1)/ (x2 - x1) == (y4 - y3) / (x4 - x3)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
