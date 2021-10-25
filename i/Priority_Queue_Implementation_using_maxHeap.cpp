#include <bits/stdc++.h>
using namespace std;
class PriorityQueue {
    vector<int> pq;
    public:
    PriorityQueue(){
        
    }
    //Implementation of maxHeap
    bool IsEmpty(){
        return pq.size() == 0;
    }
    int sizeOfMaxHeap(){
        return pq.size();
    }
    int Top(){
        if(IsEmpty()){
            return 0;
        }
        return pq[0];
    }
    void insert(int value){
        pq.push_back(value);
        int parent = 0;
        int child = pq.size()-1;
        while(child > 0){
             parent = (child - 1)/2;
            if(pq[parent] < pq[child]){
                int temp = pq[parent];
                pq[parent] = pq[child];
                pq[child] = temp;
            }else{
                break;
            }
            child = parent;
        }
    }
    int removeMax(){
        if(IsEmpty()){
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq.size()-1;
        pq.pop_back();
        
        //down-Heapify
        int parent = 0;
        int lci = 2*parent + 1;
        int rci = 2*parent + 2;
        while(lci < pq.size()){
            int MaxIndex = parent;
            if(pq[MaxIndex] < pq[lci]){
                MaxIndex = lci;
            }
            if(pq[MaxIndex] < pq[rci] && rci <pq.size()){
                MaxIndex = rci;
            }
            if(MaxIndex == parent){
                break;
            }
            int temp = pq[parent];
            pq[parent] = pq[MaxIndex];
            pq[MaxIndex] = temp;
            
            parent = MaxIndex;
            lci = 2*parent +1;
            rci = 2*parent + 2;
        }
        return ans;
        
        
        
        return ans;
    }
    
};
int main()
{
    PriorityQueue p;
    p.insert(1);
    p.insert(5);
    p.insert(6);
    p.insert(0);
    p.insert(8);
    p.insert(2);
    cout<<p.sizeOfMaxHeap()<<endl;
    cout<<p.Top()<<endl;
    cout<<p.removeMax()<<endl;
     cout<<p.removeMax()<<endl;
      cout<<p.removeMax()<<endl;
       cout<<p.removeMax()<<endl;
        cout<<p.removeMax()<<endl;
         cout<<p.removeMax()<<endl;
    
    return 0;
}
