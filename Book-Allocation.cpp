#include <bits/stdc++.h> 

bool isPossible(vector<int> time, long long n, long long m, long long mid){
	int dayCount = 1;
	long long currentDayTime = 0;
	for(int i = 0; i<m; i++){
		if(currentDayTime + time[i] <= mid){
			currentDayTime+=time[i];
		}
		else{
			dayCount++;
			currentDayTime = time[i];
		}
		if(dayCount>n){
			return false;
		}
	}
	return true;
}


long long ayushGivesNinjatest(long long n, long long m, vector<int> time) 
{	
	long long start = *max_element(time.begin(), time.end());
	long long sum = 0;
	for(int i = 0; i<m;i++){
		sum+=time[i];
	}
	long long end = sum;
	long long mid = start + (end-start)/2;
	long long ans = -1;
	while(start<=end){
		if(isPossible(time, n, m, mid)){
			ans=mid;
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}
