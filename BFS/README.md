# BFS

BFS 알고리즘은 너비 우선 탐색 미로탐색을 할 때 이용합니다. 

너비 우선 탐색(BFS)의 과정
깊이가 1인 모든 노드를 방문하고 나서 그 다음에는 깊이가 2인 모든 노드를, 그 다음에는 깊이가 3인 모든 노드를 방문하는 식으로 계속 방문하다가 더 이상 방문할 곳이 없으면 탐색을 마친다.
https://gmlwjd9405.github.io/2018/08/15/algorithm-bfs.html

예시 코드
const int MAX = 100'001;

queue<int> q;
bool visited[MAX]; // 방문 배열. visited[node] = true이면 node는 방문이 끝난 상태이다.

void bfs(const vector<int> graph[], int source) { // graph는 인접 리스트, source는 시작 노드
    // source 방문
    q.push(source);
    visited[source] = true;

    while(!q.empty()) { // 큐가 빌 때까지 반복
        // 큐에서 노드를 하나 빼 온다. 이 노드를 current라고 하자.
        int current = q.front();
        q.pop();

        for(int next: graph[current]) { // current의 인접 노드들을 확인한다. 이 각각의 노드를 next라고 하자.
            if(!visited[next]) { // 만일 next에 방문하지 않았다면
                // next 방문
                q.push(next);
                visited[next] = true;
            }
        }
    }
}