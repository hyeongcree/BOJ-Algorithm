#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0);

    queue<int> Q;//BFS알고리즘을 구하는 데 쓰인다. 
    queue<pair<int, int> > QP;//pair할 때는 >>사이에 띄어쓰기 반드시 해 주어야 함.

    Q.push(3);
    Q.push(4);
    Q.push(5);

    QP.push(make_pair(3,4)) ; //컴파일러 버전에 따라서 QP.push({3,4});로 써도 될 때도 있다.

    while(!Q.empty()) {
        int k=Q.front();
        cout << k << '\n';
        Q.pop();
    }

    return 0;
}
//q는 가장 먼저 온 사람이 가장 먼저 빠진다, stack과 반대
//queue<pair<pair<int, int>, pair<int, int> > > QP;
//하게 되면 QP.push({{1,2},{3,4}}); 하게되면 int a = QP.front().first.first;로 저장 가능
/*typedef struct Ghost{
    int a;
    int b;
} GHOST ;
하면 밑에 queue<GHOST>등으로 사용 가능하다. 
GHOST t= {3,4};
QP.push(t);
 전역변수에 선언하면 0으로초기화되는 반면 지역변수를 쓰면 쓰레기값이들어가서 에러가나는겨우가있다.
 string.h를 추가하여 memset이라는 함수를 쓸 수 있다. memset은 0으로만 초기화가 가능하고, ex)memset(arr, 0, sizeof(arr)) memset을 쓰는 것이 for문으로 초기화하는 것보다 빠르다.
 fill은 0이 아닌 1,2,3으로 초기화싶을때 쓴다
*/
