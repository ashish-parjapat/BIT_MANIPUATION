#include<bits/stdc++.h>
using namespace std;

int binary_to_gray(int n){
	int m=n>>1;
	int res=n^m;
	return res;
}


int main(){

	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
#endif
   // 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
int n;
cin>>n;
cout<<binary_to_gray(n);

	
}