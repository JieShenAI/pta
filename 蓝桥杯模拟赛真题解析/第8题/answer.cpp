/*
我的代码超时了，n,m <= 1000,k <= 1000,二维数组模拟的时间复杂度O(n*m*k)；10^9
*/

#include <iostream>
#include <queue>

#define loop(i,x,y) for(register int i = x;i <= y;i++)
using namespace std;

//草地上的一块
struct block{
    int i;
    int j;
    int month;
};
const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};

int N,M,K;
int vis[1000][1000]{};
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //从文本读取输入
    //freopen("in","r",stdin);
    //freopen("out","w",stdout);
    int a = clock();
    cin>>N>>M;
    queue<block> q;
    char next_char;
    cin.get(next_char);
    //这个读取的是什么
    while(next_char != '\n')cin.get(next_char);

    loop(i,0,N-1){
        loop(j,0,M-1){
            cin.get(next_char);
            if(next_char == 'g'){
                q.push({i,j,0});
                vis[i][j] = 1;
            }
        }
        cin.get(next_char);
        while (next_char != '\n')cin.get(next_char);
    }
    cin>>K;

    while (!q.empty()) {
        block b = q.front();
        q.pop();
        int month = b.month;
        if (month < K) {
            loop(i, 0, 3) {
                int nx = b.i + dx[i];
                int ny = b.j + dy[i];
                //越界和是否访问过的检查
                if (0 <= nx && nx < N && 0 <= ny && ny < M && vis[nx][ny] == 0) {
                    vis[nx][ny] = 1;
                    q.push({nx, ny, month + 1});
                }
            }
        }


    }
    //输出
    loop(i, 0, N - 1) {
        loop(j, 0, M - 1) {
            if (vis[i][j] == 1)
                cout << 'g';
            else
                cout << '.';
        }
        cout << endl;
    }
    clog << clock() - a << endl;
    return 0;
}
