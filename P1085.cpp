#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int res = 0;
    int max = 8;
    for(int i = 1;i < 8;i++){
        int a,b; 
        cin >> a >> b;
        if(a + b > max){
            max = a + b;
            res = i;
        }
    }
    cout << res;
    return 0;
}