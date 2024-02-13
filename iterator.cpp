#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second 

typedef long long ll;

int main(){ _
    vector<int> v = {1, 3, 5, 8};

    auto it = v.begin();
    it++;

    cout << *it << endl;

    it += 2;

    cout << *it << endl;
}