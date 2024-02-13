#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

int main(){ _
    map<int, string> m;
    m[3] = "oie";
    m[4] = "bla";
    m[3] = "x";
    cout << m[4] << endl;

    auto it = m.find(3);
    cout << (*it).first << " " << (*it).second << endl;
}