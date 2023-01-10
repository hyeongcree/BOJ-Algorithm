#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0);

    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()) {//비어있으면 1출력 비어있지않으면 0을출력한다. 1의 not은 0이 된다.
        int k=s.top();//top을하게되면 맨위의 원소를 볼 수 있다.
        cout << k << '\n';
        s.pop(); //pop을하게되면 위의 원소를 지울 수 있다.
    }

    return 0;
}