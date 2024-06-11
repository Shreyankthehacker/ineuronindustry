#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
vector<int>sreeja(0);
vector<int> dima(0);
int ctr =0;
for(int i=0,k=n-1;k>=i;){
	if(ctr&1){
		//we assume ctr from 0 so odd is dima
		dima.push_back(max(a[i],a[k]));
		if(max(a[i],a[k])==a[k])k--;
		else i++;
		ctr++;
	}
	else{
		sreeja.push_back(max(a[i],a[k]));
		if(max(a[i],a[k])==a[k])k--;
		else i++;
		ctr++;
	}
}
cout<<accumulate(sreeja.begin(),sreeja.end(),0)<<" "<<accumulate(dima.begin(),dima.end(),0);
}
