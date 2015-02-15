#include<iostream>

using namespace std;
int MAX = 31;

int main(){
    int lot[31];
    for (int i = 1; i < 31; i++){
        lot[i] = i;
    }

    int w, n;
    cin >> w >> n;
    for (int i=0; i< n; i++){
        int a, b;
        (cin >> a).ignore() >> b;
        swap(lot[1], lot[b]);
    }
    for (int i=1; i<=w; i++){
        cout << lot[i] << endl;
    }
    return 0;
}
