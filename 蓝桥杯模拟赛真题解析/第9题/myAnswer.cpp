//超时了，单纯的递归
#include <iostream>
using namespace std;
void dfs(bool flag,int start,int end,int &result);

int main(){
    int result = 0;
    int n;
    cin>>n;
    dfs(true,0,n,result);
    cout<<result;
    return 0;
}
void dfs(bool flag,int start,int end,int &result){
    int sum = end - start;
    if (sum < 0)
        sum = -sum;
    //初始1
    if(flag){
        //初始的时候可以[1,sum]
        for(int i = 1;i <= sum; i++) {
            result += 1;
            cout<<end<<" "<<i<<"  root"<<endl;
            dfs(false, end, i, result);
        }
    }else {
        for (int i = 1; i < sum; i++) {
			//有多少分支，加多少条
            cout<<end<<" "<<i<<endl;
            result += 1;
            dfs(false, end, i, result);
        }
        
    }
}