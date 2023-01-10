#include <iostream>
#include <vector>
#include <queue>
#define SIZE 101

using namespace std;

int dx[4]= {-1, 0, 1,0};
int dy[4]= {0, 1,0,-1};
int MAP[SIZE][SIZE];
int value[SIZE][SIZE];
int R, C;

void BFS() {
    queue<pair<int, int> > Q;
    Q.push({1, 1});
    while(!Q.empty()) {
        pair<int, int> curr = Q.front();
        int curr_x = curr.first;
        int curr_y = curr.second;
        Q.pop();
        
        if(curr_y == R -1 && curr_x == C-1){
            cout << value[R-1][C-1] << '\n';
            break;
        }

        for(int k=0 ; k < 4  ; k++){
            int nx = curr_x; _ dx[k] ;

        }//BFS는 최소를 구할 때 쓰이는데...
    }
}