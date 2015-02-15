#include <iostream>
#include <stack>
using namespace std;

int main(){
    int i;
    stack<int> s;
    while(cin >> i){
        if (i == 0){
            cout << s.top() << endl;
            s.pop();
        }else{
            s.push(i);
        }
    }

}
