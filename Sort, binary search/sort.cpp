#include <iostream>
#include <algorithm>    //sort 할때 많이 쓰는데 여러가지 기능들이 있다.
#include <vector>
#define SIZE 10
using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    int arr[SIZE]={1,3,5,2,7,8,4,10,9,6};
    vector<int> V;
    
    cout << "10개의 입력을 부탁드립니다."<<'\n';
    for(int i=0, k;i<SIZE;i++){
        cin >> k;
        V.push_back(k);
    }
    sort(arr, arr+5);
    sort(V.begin(), V.end());

    for(int i=0;i<SIZE;i++) cout << arr[i] << ' ';
    cout << '\n';

    for(int i=0;i<V.size();i++) cout << V[i] << ' ';
    cout <<'\n';
    
    return 0;
}