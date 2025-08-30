#include <iostream>
#include <cstdio>

using namespace std;

const long long N  = 1e4 + 10;
long long l, m;
bool flag[N];
long long int ans;

int main(){
    cin >> l >> m;
    for( int i = 0; i <m; i++){
        long long u, v;
        cin >> u >> v;
        for(long long j = u;j <= v; j++){
            flag[j] = 1;
        }
    }
    for(long long i = 0; i <= l; i++){
        if(!flag[i]) ans ++;
    }
    cout << ans << endl;
    return 0;
}