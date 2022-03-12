#include<bits/stdc++.h>	//POJ不支持

#define rep(i,a,n) for (int i=a;i<=n;i++)

using namespace std;

int t;
int n;
struct node {
	int x,y;
};

int main(){
	while(cin>>t){
		while(t--){
			cin>>n;
			priority_queue<int> q;

			rep(i,1,n) {
				q.push(i);
			}

			vector<node> v;
			while(q.size() > 1){
				int temp1 = q.top();
				q.pop();

				int temp2 = q.top();
				q.pop();

				v.push_back({temp1, temp2});

				q.push((temp1 + temp2 + 1) / 2);
			}

			cout<<q.top()<<endl;
			int len = v.size();
			
            rep(i, 0, len-1){  
				cout<<v[i].x<<" "<<v[i].y<<endl;
			}
		}
	}
    
	return 0;
}
