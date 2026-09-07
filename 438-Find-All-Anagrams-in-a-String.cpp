class Solution {
    bool isEqual(int a[26], int b[26]) {
            for (int j = 0; j < 26; j++) {
                if (a[j] != b[j])
                    return false;
            }
            return true;
        }
public:
    vector<int> findAnagrams(string s, string p) {
        

        vector<int> ans;

        int n1 = p.size(), n2 = s.size();

        if (n2 < n1) {
            return {};
        }

        int count1[26] = {0}, count2[26] = {0};
        for (int i = 0; i < n1; i++) {
            count1[p[i] - 'a']++;
            count2[s[i] - 'a']++;
        }

        if (isEqual(count1, count2)) {
            ans.push_back(0);
        };

        for (int i = n1; i < n2; i++) {
            count2[s[i] - 'a']++;
            count2[s[i - n1] - 'a']--;

            if (isEqual(count1, count2)) {
                ans.push_back(i-n1+1);
            };
        }

        return ans;
    }
};