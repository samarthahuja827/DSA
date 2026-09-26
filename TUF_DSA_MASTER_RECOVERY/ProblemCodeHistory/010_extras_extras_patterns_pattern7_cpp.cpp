class Solution {
public:
    void pattern7(int n) {
        for(int i=1;i<=n;i++){
            // LEFT SPACES
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            // STARS
            for(int j=1;j<=(2*i-1);j++){
                cout<<"*";
            }
            // RIGHT SPACES you can add to visualize or leave this part
            // for(int j=1;j<=n-i;j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }
    }
};