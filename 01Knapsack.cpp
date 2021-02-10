#include <bits/stdc++.h>
using namespace std;
int m,n,w[40],c[40],f[210];
int main() {
        cin >> m >> n;
        for (int i = 1;i <= n;i ++)
                cin >> w[i] >> c[i];
        for (int i = 1;i <= n;i ++)
                for (int j = m;j >= 1;j --)
                        f[j] = (w[i] <= j)? max(f[j],f[j - w[i]] + c[i]) : f[j];
        cout << f[m] << endl;
        return 0;
}
