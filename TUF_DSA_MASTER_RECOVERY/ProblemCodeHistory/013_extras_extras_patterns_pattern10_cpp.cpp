class Solution {
public:
    void pattern10(int n) {
        //UPPER OUTER LOOP
        for(int i =1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        //LOWER OUTER LOOP
        for(int i =1;i<=n-1;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};