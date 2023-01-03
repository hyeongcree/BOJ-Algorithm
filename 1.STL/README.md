#include <iostream>

using namespace std ;
//하지만프로젝트같은곳에선잘안쓴다. 쓰면 std::안써도됨
int main(void){
    ios::sync_with_stdio(false)
    cin.tie(0);

    int n;
    cin>>n;

    cout<<n<<'\n';
return 0;

#벡터
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
    cout<<'\n';
return 0;
}

#MAP은 

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

#SET

#include <iostream>
#include <unordered_set>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> s;

    s.insert(3);
    s.insert(1);
    s.insert(6);

    s.insert(1);

    //vector:3 1 6 1, set:1 3 6
    unordered_set<int>::iterator iter;

    for(iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<' ';
    }
    cout<<'\n';
    

return 0;
}
//set=sort+only one
//unordered_set=sort가안되었다, 맨마지막부터출력됨
//#include<unordered_set>