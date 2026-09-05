#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	int carry = 0;

	vector<int> ans;

	while(i>=0 || j>=0){

		int sum = carry;

		if(i>=0){
			sum = sum + a[i];
			i--;
		}
		if(j>=0){
			sum = sum + b[j];
			j--;
		}

		ans.push_back(sum%10);

		carry = sum/10;
	}

	if(carry>0){
		ans.push_back(carry);
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
