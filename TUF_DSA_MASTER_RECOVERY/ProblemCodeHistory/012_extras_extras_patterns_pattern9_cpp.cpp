class Solution {
public:
    void pattern9(int n) {
        //UPPER OUTER LOOP
        for(int i=1;i<=n;i++){
            //Spaces
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            //STARS
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            // //Spaces
            // for(int j=1;j<=n-i;j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }
        //LOWER OUTER LOOP
        for(int i=1;i<=n;i++){
            //SPACES
            for(int j=1 ; j <= i-1 ; j++){
                cout<<" ";
            }
            //STARS
            for(int j=1;j<=2*(n-i)+1;j++){
                cout<<"*";
            }
            // //SPACES
            // for(int j=1 ; j <= i-1 ; j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }

    }
};