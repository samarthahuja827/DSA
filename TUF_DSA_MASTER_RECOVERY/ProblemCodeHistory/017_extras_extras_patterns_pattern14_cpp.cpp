class Solution {
public:
    void pattern14(int n) {
        for(int i=1;i<=n;i++){
            int letter ="A";
            for(int j=1;j<=i;j++){
                cout<<char(letter);
                letter++;
            }
            cout<<endl;
        }

    }
};