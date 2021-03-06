#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define per(i, l, r) for (int i = (l); i >= (r); --i)
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::pair;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned int ui;
int main() {
    std::ios::sync_with_stdio(false);
    cout.tie(0);
    int n, m = 0, ans = 0, t;
    cin >> n;
    int a[10100];
    rep(i, 1, n) cin >> a[i];
    rep(i, 1, n) {
        ans++;
        m = a[i];
        for (; i <= m; ++i) m = std::max(m, a[i]);
        i = m;
    }
    cout << ans;
    return 0;
}
