#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int res = 0,cost = 0,sum = 0;
    for(int i = 1; i<=12; i++){
        cin >> cost;
        res += 300 - cost;
        if(res < 0){
            cout << "-" << i;
            return 0;
        }
        while(res >= 100){
            res -= 100;
            sum += 100;
        }
    }
    cout << 1.2 * sum + res;
    return 0;
}