// Brute
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
      if(s.size()!=goal.size()) return false;
			for(int i=0;i<s.size();i++){
        if(s==goal) return true;
        s.substr(i)+s[0]; // rotate by one
      }
      return false;
		}
};


// Using STL
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.size() != goal.size()) return false;
      for(int i=0;i<s.size();i++){
        if(s==goal) return true;
        rotate(s.begin(),s.begin()+1,s.end()); // format rotate(it at first, it at new first after rotation, it at end)
      }
      return false;
		}
};


// Optimal
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.size() != goal.size()) return false;
      return (s+s).find(goal)!=string::npos; // s+s gives a word which contains all roattions as subset. if goal is found in that word ie not equal to not found(string::npos) then return true.
		}
};
