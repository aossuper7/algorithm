#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    queue<int> q;
    int a, b;
    cin >> a >> b;
    b--;
    for (int i = 1; i <= a; i++)
        q.push(i);
    cout << '<';
    while (!(q.empty())) {
        int c = b;
        while (c--) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size() != 1)
            cout << ", ";
        q.pop();
    }
    cout << '>';
}