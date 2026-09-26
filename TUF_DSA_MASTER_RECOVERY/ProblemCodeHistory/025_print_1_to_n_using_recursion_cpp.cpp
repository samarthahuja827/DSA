class Solution {
  public:
    void printNumbers(int n) {
      if (n>0){
        printNumbers(n-1);
        cout<<n<<endl;
      }
      return;
    }
};
