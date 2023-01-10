#include <iostream>
#include <deque>
using namespace std;
/*생각정리
첫 번째 줄에 몇 개를 입력받을 것인지를 알려주는 정수 n를 입력받는다.
입력받은 만큼 FOR 반복문으로 다음을 진행한다.
int k라는 변수를 선언하여 그 변수에 정수를 입력 받되
if(k==0)이라면 deque의 맨 위의 원소를 pop한다.
else deque의 맨 위에 그 수를 add한다.
모든 과정 반복 후 다시 반복문으로
int sum=0;선언하고, while문으로 반복하면서 deque의 맨 위 원소를 더한 후, pop으로 지운다. 
if(deque의 사이즈가 0이라면,)   break;
최종적으로 sum을 출력한다. 
*/
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);
    deque<int> D ;
    int n, k, sum=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> k;
        if(k!=0)    D.push_back(k);
        else    D.pop_back();
    }
    while(D.size()!=0){
        
        sum=sum+D.front();
        D.pop_front();
        if(D.size()==0) break;
    }
    cout << sum;
    return 0;
}// 꼭 저장하고 컴파일해야함?