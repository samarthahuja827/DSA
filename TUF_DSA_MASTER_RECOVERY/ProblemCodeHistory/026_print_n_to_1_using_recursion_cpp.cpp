class Solution {
  public:
    void printNumbers(int n) {
        if(n>0){
          cout<<n<<endl;
          printNumbers(n-1);
        }
      return;
    }
};