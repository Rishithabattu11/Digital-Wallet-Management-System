// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    return a.first<b.first;
    
    return a.second<b.second;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    // int NoOfUsers;
    int n;
    cin>>n;
    // cin>>NoOfUsers;
    vector<pair<int,int>> details;
    vector<pair<int,int>> result;
    while(n--)
    {
        int id,balance;
        cin>>id>>balance;
        // vector<pair<int,int> details;
        details.push_back({id,balance});
    }
    // for(auto const&x:details)
    // {
    //     cout<<x.first<<" "<<x.second<<"\n";
    // }
    // int Transactions;
    int t;
    cin>>t;
    while(t--)
    {
        int id1,id2,amt;
        cin>>id1>>id2>>amt;
        int flag=1;
        for(auto &x:details)
        {
            if(x.first==id1 && x.second>=amt)
            {
                 x.second-=amt;
                 flag=0;
                 break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            for(auto &x:details)
            { 
                if(x.first==id2)
                {
                    x.second+=amt;
                    cout<<"Success"<<"\n";
                    break;
                }
            }
        }
        else
        {
            cout<<"Failure"<<"\n";
        }
        // for(auto const&x:details)
        // {
        //   cout<<x.first<<" "<<x.second<<"\n";
        // }
    }
    sort(details.begin(),details.end(),compare);
    cout<<"\n";
    for(auto const&x:details)
        {
           cout<<x.first<<" "<<x.second<<"\n";
        }
    return 0;
}