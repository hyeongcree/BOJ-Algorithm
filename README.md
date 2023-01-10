# Stack
#include <stack>해주어야 함

stack<int> s;와 같은 방법으로 선언

s.push(element): top에 원소를 추가
s.pop(): top에 있는 원소를 삭제
s.empty(): 비어있으면 1출력 비어있지 않으면 0을 출력함, 0의 반대는 1
s.top():맨위의 원소값

## Stack은 나중에 들어간 것이 먼저 나오는 (Last In First Out)의 형태를 띠는 자료구조입니다. 이 방식이 Stack의 가장 큰 특징이자 스택을 사용하는 이유라고 할 수 있습니다. Stack은 C++ 표준 라이브러리(Standard Template Library)에 있는 정의되어 있어 필요할 때마다 만들어 사용하지 않고 include 하여 사용하시면 편리합니다.

# Queue
queue<int> Q와 같은 방법으로 선언, int말고 다른 것들도 사용 가능?

queue<pair<int, int> > QP와 같이 pair을 2개 선언 가능함

make_pair
항상 출처를 남길 때는 영어더라도 공식 레퍼런스를 참조해라
블로그는 틀린 내용을 기술해 놓는 경우가 있음