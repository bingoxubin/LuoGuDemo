#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i = 1;
    double k,sn = 0;    
    cin >> k;
    while(1){
        sn += double(1) / double(i++);
        if(sn > k) {
            cout << i - 1;
            break;
        }
    }
    return 0;
}