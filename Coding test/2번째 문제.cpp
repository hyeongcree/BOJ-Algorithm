#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sort[2];
/*생각정리
처음에 점의 개수를 입력 받는다.
2. x와 y번째 점의 위치를 입력 받아 vector에 저장한다. 
각 벡터에 원소를 넣을 공간을 넉넉히 3개씩 선언해주자.
3.sort를 사용하여 x축부터 정렬하자
4. for문을 사용하여 중복되는 x축이 있는 경우에 y좌표를 
기준으로 다시 재정렬한다.
4번의 논리: 현재 값을 a로 선언 , 중복체크하는 배열
 sort2[2];를 선언, flag=0를 선언
4-1 flag가 0인 경우:a의 인덱스보다 1큰 값이 똑같다면 , 
sort[0]=을 a의 인덱스로 sort[1]을 a+1의 인덱스로 한다.
그리고 flag=1을 한다. 
    만약 a의 인덱스보다 1큰 값과 다르다면, 아무것도 하지 않는다.
4-2 flag=1인 경우: a와 a+1값이 또 같다면 sort[1]을 
현재 또 1추가된 배열의 인덱스로 설정한다.
    만약 a의 인덱스보다 1큰 것이 다르다면, flag를 0으로 한 후, 
    sort[0]부터 sort[1]까지를 대상으로
    sort를 사용하여 y축 기준으로 정렬한다. 

정렬 한 것들을 x,y축을 한 쌍으로 출력하고 개행한다. 
*/
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);
    vector<pair<int, int> > V;//vector는 main안에서 선언?
    int n;
    cin >> n;
    int v1,v2;
    for(int i=0;i<n;i++){
        cin >> v1 >> v2;
        V.push_back(make_pair(v1,v2)) ;
    }
    vector<pair<int, int> >::iterator iter;
    for(iter=V.begin();iter!=V.end();iter++){
        cout <<*iter;
    }

}