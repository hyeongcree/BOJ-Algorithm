#include<iostream>
#include<vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(0);

    for(int i=0;i<V.size();i++){
        cout<<V[i] <<' ';
    }
    cout << '\n';
    
    V.pop_back();//remove the zero

    vector<int>::iterator iter;
    for(iter=V.begin();iter!=V.end();iter++){
        cout<<*iter<<' ';
    }
    cout << V.size();
    cout << V.capacity();
    cout<<'\n';
    V.clear();
    for(int i=0;i<2;i++)
        cout <<  V[i];
    cout << V.size();
    cout << V.capacity();
return 0;
}
// ~26번째까지의 줄 결과값: 1 2 0
// 1 2
//v.end()는 마지막 원소 +1이므로 비교할 때v.end가 아닐 때까지 비교를 해야함.
