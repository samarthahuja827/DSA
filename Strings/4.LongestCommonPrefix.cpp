// horizontal scanning
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			string ans=str[0];
            for(int i=0;i<str.size();i++){
                int j=0;
                while(j<ans.size() && j<str[i].size() && ans[j]==str[]){
                    j++;
                }
                ans=ans.substr(0,j);
            }
            if(ans=="") break;
		}
};


// vertical scanning
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			string ans="";
            for(int i=0;i<str[0].size();i++){ // scanning letters from first word
                char ch=str[0][i];
                int flag=1;
                for(int j=1;j<str.size();j++){ //checking in other words
                    if(str[j].size()<=i|| ch!=str[j][i]){
                        flag=0;
                        break;
                    }
                }
                if(flag==0) break;
                else ans.push_back(ch);
            }
            return ans;
		}
};


// Tries Approach
class Solution {
public:

    struct Node {
        Node* child[26];
        bool isEnd;

        Node() {
            for(int i = 0; i < 26; i++)
                child[i] = NULL;

            isEnd = false;
        }
    };

    void insert(Node* root, string& s) {
        Node* node = root;

        for(char ch : s) {
            int idx = ch - 'a';

            if(node->child[idx] == NULL)
                node->child[idx] = new Node();

            node = node->child[idx];
        }

        node->isEnd = true;
    }

    string longestCommonPrefix(vector<string>& strs) {
        Node* root = new Node();

        for(string& s : strs)
            insert(root, s);

        string ans = "";
        Node* node = root;

        while(true) {
            int count = 0;
            int next = -1;

            for(int i = 0; i < 26; i++) {
                if(node->child[i] != NULL) {
                    count++;
                    next = i;
                }
            }

            if(count != 1 || node->isEnd)
                break;

            ans.push_back('a' + next);
            node = node->child[next];
        }

        return ans;
    }
};


// Divide and Conquer Approach
class Solution {
public:
    string commonPrefix(string a, string b) {
        int i = 0;
        while (i < a.size() && i < b.size() && a[i] == b[i]) {
            i++;
        }
        return a.substr(0, i);
    }

    string solve(vector<string>& strs, int low, int high) {
        if (low == high)
            return strs[low];
        int mid = (low + high) / 2;
        string left = solve(strs, low, mid);
        string right = solve(strs, mid + 1, high);
        return commonPrefix(left, right);
    }
    string longestCommonPrefix(vector<string>& strs) {
        return solve(strs, 0, strs.size() - 1);
    }
};


// sorting approach
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }
        return first.substr(0, i);
    }
};


// Binary Search Approach
class Solution {
public:
    bool isCommon(vector<string>& strs, int len) {
        string prefix = strs[0].substr(0, len);
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].substr(0, len) != prefix)
                return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int low = 0;
        int high = strs[0].size();
        for (string s : strs) {
            high = min(high, (int)s.size()); // high = shortest string's length
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            if (isCommon(strs, mid))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return strs[0].substr(0, high);
    }
};
