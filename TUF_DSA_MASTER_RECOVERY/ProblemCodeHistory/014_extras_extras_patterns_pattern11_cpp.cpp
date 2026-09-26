class Solution {
public:
    void pattern11(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i%2 !=0 && j%2 != 0) ||(i%2==0 && j%2==0))
                {cout<<"1 ";}
                else if((i%2!=0 && j%2==0) || (i%2==0 && j%2!=0))//or use else
                {cout<<"0 ";}
            }
            cout<<endl;
        }
    }
};