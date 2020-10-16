 #include<iostream>
 #include<algorithm>
 
 using namespace std;
 
 struct node
 {
 	int x;
 	int y;
 };
 
 bool cmp(node a,node b)
 {
 
 // 那这个到底是升序排列还是降序排列 
 	if (a.x < b.x)
  // < return true,就是从小到大排序
 		return true;
 	else
	  	return false;
      
 }
 
 int main()
 {
 	
 	node n[10];
 	for(int i =0;i<5;++i){
 		
	 cin>>n[i].x>>n[i].y;
	 	
 	}
 	 
 	sort(n,n+5,cmp);
	 
	 for(int i = 0; i < 5; ++i){
	 cout<<i<<":"<<n[i].x<<" "<<n[i].y<<endl;	
	 } 
	 
 	return 0;
 } 
 
 
/*
12 1
21 2
32 3
42 4
1 5

0:1 5
1:12 1
2:21 2
3:32 3
4:42 4

*/
