// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int start = 0;
//         int end = s.size()-1;
//         while(start<end){
//             swap(s[start],s[end]);
//             start++;
//             end--;
//         }
//     }
// };





// Using recursion
void reverse(vector<char> &str, int i, int j){

if(i>j){return;}

    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
class Solution{
    public:
        void reverseString(vector<char>& s){
            reverse(s, 0, s.size()-1);
        }
};