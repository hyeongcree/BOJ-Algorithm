#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    stack<int> s;
    int num;
    string command;
    cin >> num;
    for(int i=0;i< num;i++){
        getline(cin, command);
        if(command=="push 1"){
            s.push(1);
        }
        else if(command=="push 2"){
            s.push(2);
        }
        else if(command=="push 3"){
            s.push(3);
        }
        else if(command=="push 123"){
            s.push(123);
        }
        else if(command=="top"){
            int k=s.top();
            if(sizeof(s)==0)    cout << -1;
            else cout << k;
        }
        else if(command=="pop"){
            int p=s.top();
            if(sizeof(s)==0)    cout << -1;
            else {
                s.pop();
                cout << p;
            }
        }
        else if(command=="empty"){
            if(s.empty())  cout << 1;
            else    cout<<0;
        }
    }
    return 0;
}

