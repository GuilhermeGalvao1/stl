#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second 

typedef long long ll;

int main(){ _
    set<int> ss;

    ss.insert(1);
    ss.insert(2);
    ss.insert(1);
    ss.insert(5);
    ss.insert(7);

    auto it = ss.begin();
    while(it != ss.end()){
        cout << *it << endl;
        it++;
    }

    cout << endl;

    ss.erase(5);
    ss.erase(ss.begin());

    for(auto x: ss){
        cout << x << endl;
    }

    cout << endl;

    cout << ss.count(2) << endl;
    cout << ss.count(3) << endl;

    cout << endl;

    it = ss.find(3);
    if(it == ss.end()){
        cout << "nao ta dentro" << endl;
    }else{
        cout << "ta dentro" << endl;
    }

    it = ss.upper_bound(3);
    cout << *it << endl;
}