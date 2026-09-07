class Solution {
public:
    bool isEqual(int a[26], int b[26]) {
        for (int j = 0; j < 26; j++) {
            if (a[j] != b[j]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();

        if (n2 < n1) {
            return false;
        }

        int count1[26] = {0}, count2[26] = {0};
        for (int i = 0; i < n1; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if (isEqual(count1, count2)) return true;

        for (int i = n1; i < n2; i++) {
            count2[s2[i] - 'a']++;
            count2[s2[i - n1] - 'a']--;

            if (isEqual(count1, count2)) return true;
        }

        return false;
    }
};