// RETURN ENTIRE PASCAL TRIANGLE
// class Solution {
// public:
//     int pascalTriangleI(int r, int c) {
//         vector<vector<int>> triangle;
//         for(int i=0;i<r;i++){
//             // Create a row with size (i+1) and initialize all elements to 1
//             vector<int> row(i+1,1);
//             for(int j=1;j<i;j++){
//                 // Each element = sum of element above it and before it
//                 row[j]=triangle[i-1][j]+triangle[i-1][j-1];
//             }
//             triangle.push_back(row);
//         }
//         return triangle;
//     }
// };