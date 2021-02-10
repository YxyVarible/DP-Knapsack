#include <bits/stdc++.h>
using namespace std;
int m,n,f[6010],w[10010],c[10010],x,y,s,t,n1;
int main() {
        cin >> m >> n;
        for (int i = 1;i <= n;i ++) {
                t = 1;
                cin >> x >> y >> s;
                while (s >= t) {
                        ++ n1;
                        w[n1] = x * t;
                        c[n1] = y * t;
                        s -= t;
                        t <<= 1;
                }
                ++ n1;
                w[n1] = x * s;
                c[n1] = y * s;
        }
        for (int i = 1;i <= n;i ++)
                for (int j = m;j >= w[i];j --) {
                        x = f[j - w[i]] + c[i];
                        if (x > f[j]) f[j] = x;
                }
        cout << f[m];
        return 0;
}
