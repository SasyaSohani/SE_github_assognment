//this is a github assignment
//assignment 2 of software engineering course
//made changes in the new-branch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of guests: "<<endl;
    cin >> n;
    vector <int> entry(n);
    vector <int> exit(n);
    int max_id1 = 0;//maximum entry time
    int max_id2 = 0;//maximum exit time ig
    int max_id= 0;//max of both
    int sum = 0;
    int max_val = 0;
    int res_idx = 0;
    cout<<"Enter the entry time of each guest: "<<endl;
    for(int i=0;i<n;i++){
        cin>>entry[i];
        max_id1 = max(entry[i],max_id1);
    }
    cout<<"Enter the exit time of each guest: "<<endl;
    for(int i=0;i<n;i++){
        cin>>exit[i];
        max_id2 = max(exit[i],max_id2);
    }
    max_id = max(max_id1, max_id2);
    vector<int>arr((max_id+1),0);//hash map vibes
      for(int i=0;i<n;i++){
        arr[entry[i]]++;//for every entry increment 
        arr[exit[i]+1]--; //for every exit decrement
    }
    for(int i=0;i<max_id;i++){
        sum += arr[i]; //keep adding elements from hash map
        if (sum > max_val){
            max_val = sum; //max of sum
            res_idx = i; // keep track of index
            //cout<<max_val<< " " <<res_idx <<endl;
        }
    }
    
   cout<< "Maximum guests " << max_val <<" at time: " << res_idx << endl;
    
}
