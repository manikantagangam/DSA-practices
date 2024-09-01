// Optimized BubbleSort

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& v){
    for(int i = 0; i<v.size()-1; i++){
        bool swapped = false;
        for(int j = 0; j<v.size()-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    vector<int> v = {5, 2, 9, 1, 5, 6};
    bubbleSort(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}