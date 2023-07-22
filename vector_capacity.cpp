#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   cout<< endl;
   
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;
    //v.clear();
   v.push_back(10);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;
    v.pop_back();
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   v.insert(v.begin()+3,100);
    
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
     replace(v.begin()+3,v.end(),10,1);

      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}
