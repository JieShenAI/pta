#include <iostream>
#include <cstring>
using namespace std;
bool in_yuan(char ch){
	if(ch=='a' || ch == 'e' || ch == 'i' || ch =='o'||ch=='u'){
		return true;
	}
	return false;
}
int main()
{
	string str;
	cin>>str;
	int len = str.length();
	
	if(in_yuan(str[0])){
		cout<<"no";
		return 0;
		}
	int index = 1;
	for(int i = 1;i < len;i ++){
		
		if(index%2 == 0){//要辅音 
			if(in_yuan(str[i]))
				continue;
			//出现辅音
			index++;
		}else{
			//要元音
			if(!in_yuan(str[i]))
				continue;
			else{
				index++;
			}
		}
	}
	//cout<<"index: "<<index<<endl;
	if(index == 4)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}