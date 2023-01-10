#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct Person {
    int height;
    int weight;
} PERSON;

bool compare(const PERSON &a, const PERSON &b){
    if(a.height > b.height) return true;
    else if(a.height == b.height){
        if(a.weght == b.height)
    }
}
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    vector<PERSON> V;

    V.push_back({170, 61});
    V.push_back({128, 36});
    V.push_back({123, 26});
    V.push_back({122, 56});
    V.push_back({228, 76});
    V.push_back({122, 46});

    sort(V.begin(), V.end());//앞에가 먼저 정렬이 되었으면 다음이 정렬됨, structure로 하면 compare와 같은
    //함수를 넣어주어야 함. ,vector의 pair로 되어있으면 굳이 안넣어도 기본적으로 오름차순 내림차순이 된다. 
    //기본적으로는 sort를 하면 오름차순이 되고, sort(begin, end, greater<int>())하면 내림차순이 된다.
    //template은 어떨 때 쓰는가, vector에 int와 structure을 써야되니 여러 가지 타입들을 다 받을 수 있게 됩니다
}
