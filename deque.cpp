#include <iostream>
#include <deque>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0);

    deque<int> D ;

    D.push_back(2);
    D.push_back(3);
    D.push_back(4);

    D.push_front(1);//배열은 index라는 것을 가지지만, deque에는 인덱스라는 것이 없다. 배열이라기보다는 하나의 공간으로 보아야 한다.

    while(!D.empty()) {
        int k=D.front();
        cout <<k <<' ';
        D.pop_front();
    }

    cout << '\n';

    D.push_back(2);
    D.push_back(3);
    D.push_back(4);

    D.push_front(1);

    while(!D.empty()) {
        int k=D.back();
        cout <<k <<' ';
        D.pop_back();
    }

    cout << '\n';
    
    return 0;
    }
    /*que나 deque를 쓰는것이 vector보다 빠르다
    deque는 stack과 que를 합쳐놓아서 앞 뒤가 모두 뚫려있다고 볼 수 있다.*/