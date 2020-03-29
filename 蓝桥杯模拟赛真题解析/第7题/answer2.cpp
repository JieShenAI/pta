/*
 解法2：
 将单词的辅音标记为0，元音标记为1，那么符合要求的单词形态为 0+1+0+1
 在限定开头必须为0，最后必须为1的情况下，01交替3次，
 即前后元素相加结果为1的次数必须为3
 */
#include <iostream>
int work();
using namespace std;

int main(){
    while (1){//死循环仅仅用作输入测试
        if(work())
            cout<<"yes\n";
        else
            cout<<"no\n";
        //break;
    }
    return 0;
}

inline bool isYuan(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int work(){
    string word;
    getline(cin,word);
    unsigned long size = word.size();
    if(size < 4)
        return 0;
    //辅元辅元，若开头是元音或结尾不是元音
    if(isYuan(word[0]) || !isYuan(word[size - 1]))
        return 0;
    int *h = new int[size];
    for(int i = 0;i < size; ++i){
        if(isYuan(word[i]))
            h[i] = 1;
        else
            h[i] = 0;
    }
    int cnt = 0;
    for(int i = 1;i < size; ++i){
        if(h[i-1]+h[i] == 1)
            cnt++;
    }
    delete []h;
    return cnt == 3;
}