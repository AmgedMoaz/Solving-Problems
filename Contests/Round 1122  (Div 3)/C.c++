// AND, OR, Sort!

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        static char buf[200005];
        scanf("%s", buf);
        int zeros = 0;
        for(int i = 0; i < n; i++) if(buf[i] == '0') zeros++;

        if(buf[0] == '1'){
            printf("%d\n", zeros);
        } else {
            long long ones = 0;
            long long best = LLONG_MAX;
            for(int k = 1; k <= n; k++){
                if(buf[k-1] == '1') ones++;
                long long val = 2*ones - k;
                best = min(best, val);
            }
            printf("%lld\n", best + zeros);
        }
    }
}