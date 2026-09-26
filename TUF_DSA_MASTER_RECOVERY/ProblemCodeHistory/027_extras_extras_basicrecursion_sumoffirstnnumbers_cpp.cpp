class Solution{	
	public:
		int NnumbersSum(int N){
			if(N>0){
			return N + NnumbersSum(N-1);
		}
		return 0;
	}
};