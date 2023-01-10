#include <iostream>
#include <vector>
#include <algorithm>
/*생각정리
가장 작은 값이 나와야 하므로,
우선 n과 n만큼의 배열 A,B 만큼 
1.우선 배열 A를 가장 작은 순으로 배열함.
2. 배열 B를 큰숫자로부터 배열한다.
그것들을 곱하고 출력한다
끝
*/

using namespace std;

int main(void){
    vector<int> A, B;
    int n;//입력받을 변수
    int p;//put하도록 돕는 변수
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p;
        A.push_back(p);
    }
    for(int i=0;i<n;i++){
        cin >> p;
        B.push_back(p);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(A[i]*B[i]);//곱셈 먼저 한다.
    }
    cout << sum;
    return 0;
}