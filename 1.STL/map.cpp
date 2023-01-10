#include <iostream>
#include <map>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    map<int, int> m;//red balck tree

    m.insert(make_pair(2, 3));
    m.insert(make_pair(1, 5));
    m.insert(make_pair(8, 1));

    m[3]=5;//원래 키값이 있으면 바뀌고, 없었으면 insert됨


    for(auto iter=m.begin();iter!=m.end();iter++){
        cout<<iter->first<<' '<<iter->second<<'\n';
    }
    cout<<'\n';
    
return 0;
}
//unorderd_map
