#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int height[20],H,sum;
    for(int i = 0;i<10;i++) cin >> height[i];
    cin >> H;
    H += 30;
    for(int i = 0;i<10;i++) {
        if(H >= height[i]) sum ++;
    }
    cout << sum << endl;
    return 0;
}