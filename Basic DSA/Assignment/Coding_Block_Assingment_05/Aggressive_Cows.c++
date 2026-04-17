# include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int cows = 1 , lastStallpos = arr[0];

    for(int i=0;i<N;i++){
        if(arr[i]-lastStallpos >= minAllowedDist){
            cows++;
            lastStallpos = arr[i];
        }

        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){

    sort(arr.begin(),arr.end()); //NlogN

    int st = 1 , end = arr[N-1] - arr[0] , ans = -1;

    while(st <= end){ // O(log(Rnage) * N)
        int mid = st + (end-st)/2;

        if(isPossible(arr,N,C,mid)){ // right
            ans = mid;
            st = mid+1;
        }
        else{ //left
            end = mid-1;
        }
    }
    return ans;

}


int main(){
    int N, C;
	cin>>N>>C;
    vector<int> arr(N);
	for(int i = 0 ; i < N ; i++){
		cin>>arr[i];
	}

    cout<<getDistance(arr,N,C)<<endl;

    return 0;
}