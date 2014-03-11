#include "solution.hpp"

int main(){

    Solution sol;

    int NumArray[] = {1,2,3,4};
 
    std::vector<int> lstA (NumArray,NumArray + sizeof(NumArray)/ sizeof(int)) ;

    std::vector<std::vector<int> > PermuteA;

    PermuteA = sol.permutation(lstA);

    sort(PermuteA.begin(), PermuteA.end(), compare);

    // for (std::vector<std::vector<int> >::size_type  i = 0; i < PermuteA.size(); i++){
    //     for (std::vector<int>::size_type j = 0; j < PermuteA[i].size(); j++){
    //         std::cout << ' ' << PermuteA[i][j];
    //     }
    //     cout << "\n" ;
    // }

    // test!
    int Num = PermuteA.size();

    bool flag = true;
    for (std::vector<std::vector<int> >::size_type i = 0 ; i < PermuteA.size() -1 ; i++){
        if (compare(PermuteA[i], PermuteA[i+1]) == false){
            flag = false;
            break;
        }
    }
        
    leettest((Num==24) && (flag==true));


    return 0;
}
