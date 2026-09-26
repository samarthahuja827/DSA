class Solution {
public:
    void pattern8(int n) {
        for(int i=1; i<=n; i++){
            //SPACES
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            //stars
            for(int j=1;j<=2*(n-i)+1;j++){
                cout<<"*";
            }
            //spaces
            // for(int j=1;j<=i-1;j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }
    }
};