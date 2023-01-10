#include <iostream>
#include <deque>

using namespace std;
/*자 생각정리를 해보자
일단 첫째 줄에 정수 N(1 ≤ N ≤ 500,000)을 입력받는다.
그런 후 1부터 N까지의 정수를 for문을이용하여 deque에 
과정 1~3를 반복한다.
과정 1:제일 위의 카드를 pop한다.
과정 2: 제일 위의 카드를 다른 변수에 저장 후 맨 밑으로 삽입한다.
과정 3: 만약 deque의 사이즈가 1이다? 반복문끝내고 프로그램종료해라.
*/
int main(){
ios::sync_with_stdio(false); cin.tie(0);
    deque<int> D;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        D.push_back(i);
    }
    while(D.size()!=1){

        D.pop_front();
        int k=D.front();
        D.pop_front();
        D.push_back(k);

    }
    if(!D.empty()){
    int fin=D.front();
    cout << fin;
    }
    return 0;
}
