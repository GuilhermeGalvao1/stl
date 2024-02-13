#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second 

typedef long long ll;

int main(){ _
    //heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(15);

    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();

    //heap minimo
    priority_queue<int, vector<int>, greater<int>> heap_minimo;

    heap_minimo.push(5);
    heap_minimo.push(2);
    heap_minimo.push(15);

    cout << heap_minimo.top() << " ";
    heap_minimo.pop();
    cout << heap_minimo.top() << " ";
    heap_minimo.pop();
    cout << heap_minimo.top() << endl;
    heap_minimo.pop();

}