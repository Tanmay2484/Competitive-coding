#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_sum(100006,0);

int main() {
	int n;
	cin >> n;
	vector<int> container;
	for(int i = 1; i <=n; i++){
	    int inp;
	    cin >> inp;
	    if(inp==-1){
	    	inp=prefix_sum[i-2]/(i);
	    	container.push_back(inp);
		}
		else{
			container.push_back(inp);
		}
		prefix_sum[0] = container[0];
		prefix_sum[i] = container[i] + prefix_sum[i-1];
	}
	for(int i=0;i<n;i++){
		cout<<container[i]<<" ";
//		if(inp==-1){
//	    	inp=prefix_sum[i-1]/i;
//		}
	}
	
        	
	
	
	
//	for(int number_of_times = 1; number_of_times <= q; number_of_times++){
//	    int l,r;
//	    cin >> l >> r;
//	    cout << prefix_sum[r]-prefix_sum[l-1] << endl;
//	}
}
