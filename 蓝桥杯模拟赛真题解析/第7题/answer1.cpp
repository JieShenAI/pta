/*
找到第一个元音的下标index1，必须大于0，且能找到
沿着index1继续找下一个非元音得到index2，必须能找到
沿着index2继续找下一个元音得到index3，必须能找到
最后判断index3-1位置的字符应该是从后往前第一个非元音（因为index3及以后的字符都必须是元音了）
辅 元(index1) 辅(index2) 元(index3)
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
    }
    return 0;
}

int work(){
    string word;
    const string yuan = "aeiou";
    getline(cin,word);
    if(word.size() < 4)
        return 0;

    //第一个元音字符的position
    int index1 = word.find_first_of(yuan,0);
    if(index1 == 0 || index1 == string::npos){
        return 0;
    }
    //之后的第一个辅音
    int index2 = word.find_first_not_of(yuan,index1 + 1);
    //到达字符串尾端，或者没找到
    if(index2 == word.size() - 1 || index2 == string::npos)
        return 0;
    //最后的一个音（元音）
    int index3 = word.find_first_of(yuan,index2 + 1);
    if(index3 == string::npos)
        return 0;
    //然后我们需要确定当前这个元音后面没有辅音，
    // 所以我们要验证最后一个辅音是不是在index3 - 1的位置
    if(index3 - 1 != word.find_last_not_of(yuan))
        return 0;
    return 1;
}
   
