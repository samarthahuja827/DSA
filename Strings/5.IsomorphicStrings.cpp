// Brute
class Solution {
public:
    bool isomorphicString(string s, string t) {
    	if (s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            int prevS=-1, prevT=-1;
            for(int j=0;j<i;j++){
                if(s[j]==s[i] && prevS==-1){
                    prevS=j;
                }
                if(t[j]==t[i] && prevT==-1){
                    prevT=j;
                }
            }
            if(prevS!=prevT) return false;
        }
        return true;
    }
};



// Hash Map
class Solution {
public:
    bool isomorphicString(string s, string t) {
    	if(s.size()!=t.size()) return false;
      unordered_map<char,char> m1, m2;
      for(int i=0;i<s.size();i++){
        if(m1.count(s[i]) && m1[s[i]]!=t[i]) return false; // already exists in m1 and mapping is not to same elem
        if(m2.count(t[i]) && m2[t[i]]!=s[i]) return false; // already exists in m2 and mapping is not to same elem

        // doing mapping
        m1[s[i]]=t[i];
        m2[t[i]]=s[i];
      }
      return true;
    }
};


// 2 arrays
class Solution {
public:
    bool isomorphicString(string s, string t) {
    	if(s.size() != t.size()) return false;
      vector<int> lastS(256,-1); // fixed size array with all value -1 with 256 elements
      vector<int> lastT(256,-1);
      for(int i=0;i<s.size();i++){
        
        if(lastS[(char)s[i]] != lastT[(char)t[i]]) return false;
        lastS[(char)s[i]]=i;
        lastT[(char)t[i]]=i;
      }
      return true;
    }
};
