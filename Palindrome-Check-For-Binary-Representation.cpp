#include <bits/stdc++.h> 

void binary(long long n, string &str){

	if(n == 0)
	return;

	long long num = n%2;
	n=n/2;
    binary(n, str);

    str += (num + '0');
}

bool check	(string str, int i, int j){
   if(i >= j)
        return true;

    if(str[i] != str[j])
        return false;

    return check(str, i + 1, j - 1);
}

bool checkPalindrome(long long N)
{
	string str;
	binary(N, str);
	return check(str, 0, str.length() - 1);
}
