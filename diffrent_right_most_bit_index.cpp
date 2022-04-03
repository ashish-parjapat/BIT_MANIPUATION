#include<bits/stdc++.h>
using namespace std;
int diff_right_most(int m,int n){
	int x=m^x;
	int c=0;
	while(n!=0){
		c++;
		if(n&1){
			return c;
		}
		n=n>>1;
	}
	return -1;
}
//jsut take xor b/t two numbers and find the fist set bit index from right