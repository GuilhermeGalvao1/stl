#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second 

typedef long long ll;

int main(){ _
    deque<double> d;

    d.push_front(1);
    d.push_front(2);
    d.push_back(3);

    cout << d[0] << d[1] << d[2] << endl;
}