# include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int cnt = 0;
        while(num > 0){
            if(num % 2 == 0){
                num /= 2;
            }else{
                num -= 1;
            }
            cnt++;
        }
        return cnt;
    }
};

int main(){
    Solution s1;
    int n = 14;

    cout<<s1.numberOfSteps(n)<<endl;

    return 0;
}