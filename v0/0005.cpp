#include <iostream>
using namespace std;
 
int gcd(int a, int b){
    cout << a << "  " << b << endl;
    if(b > 0){
        return gcd(b, a % b);
    }else{
        return a;
    }
}
 
int lcm(int a, int b){
    return ((a / gcd(a, b)) * b);
}
 
int main(){
    int a, b;
 
    while( cin >> a >> b ){
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
}
