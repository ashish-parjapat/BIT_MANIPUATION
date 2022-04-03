//right right the number and if it give 1with AND with 1 then return


#include<bits/stdc++.h>
using namespace std;
int first_set_bit(int n){
	int c=0;
	while(n!=0){
		c++;
		if(n&1){
			return c;
		}
		n=n>>1;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<first_set_bit(n);

}