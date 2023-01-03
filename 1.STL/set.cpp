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