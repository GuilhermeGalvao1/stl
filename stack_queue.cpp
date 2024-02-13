#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second 

typedef long long ll;

int main(){ _
    stack<int> st;
    queue<int> q;

    st.push(1); st.push(2);
    cout << st.top() << " ";
    st.pop();
    cout << st.top() << " ";
    st.pop();

    cout << endl;

    q.push(1);
    q.push(2);

    cout << q.front() << " ";
    q.pop();
    cout << q.front() << endl;
}