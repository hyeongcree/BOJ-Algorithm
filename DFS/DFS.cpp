#include <iostream>
#include <vector>
using namespace std;

int N, M, V;
vector<int> V[10001] ;
bool visited[10001] ;
void DFS(int start){
    if(visites[start])  return ;

    visited[start] = true;
    
}

int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    cin >> N >> M >>V;

    for(int i = 0, a, b ; i < M ; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[a].push_back(a);
    }

    DFS(V) ;

    return 0;
}