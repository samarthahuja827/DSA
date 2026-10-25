// USING STL - StringStream
// BRUTE:
class Solution {
   public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;
        while (ss >> word) {
            ans = word + " " + ans;
        }
        // we get an extra space at last
        return ans.substr(0, ans.size() - 1);
    }
};
// T: O(n^2) 
// S: O(n)


// USING 2 POINTER APPROACH method 1
// BETTER
class Solution {
   public:
    string reverseWords(string s) { 
        int i = s.size() - 1;
        string ans = "";
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;
            int j = i;
            while (i >= 0 && s[i] != ' ') i--;
            if (!ans.empty()) ans += " ";
            ans += s.substr(i + 1, j - i);
        }
        return ans;
    }
};
};
// T: O(n) 
// S: O(n)
// method2
// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.length();
//         string ans = "";

//         reverse(s.begin(), s.end());

//         for (int i = 0; i < n; i++) {
//             string word = "";

//             while (i < n && s[i] != ' ') {
//                 word += s[i];
//                 i++;
//             }

//             reverse(word.begin(), word.end());

//             if (word.length() > 0) {
//                 ans += " " + word;
//             }
//         }

//         return ans.substr(1);
//     }
// };



// BEST
class Solution {
   public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());  // reverse entire string
        int l = 0, r = 0, i = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] != ' ') {
                s[r] = s[i];
                r++;
                i++;
            }
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        return s.substr(0, r - 1); // (starting, length)
        ;
    }
};
};
// T: O(n) 
// S: O(1)
