
#include <iostream>
#include<list>
using namespace std;

int main(){
    
    int a[10];
    int i;
    for(i=0;i<10;i++) cin>>a[i];
    
    // Start of selection sort 
    
    int least_index;  // stores index of least element 
    
    int j;
    
    for(i=0;i<9;i++){
        least_index = i;
        
        for(j=i;j<10;j++){
        if(a[j]<a[least_index]) least_index =j; //If we find an index in j=(0,9) at a[j] is less than the least index which we assumed, then this j will be  least index
    }
    int temp;
    
    //interchange the first element with last element
    temp =a[i];
    a[i] = a[least_index];
    a[least_index] = temp;
    
    }
    
    cout<<"The elements after sorting are: "<<endl;
    for(i=0;i<10;i++) cout<<a[i]<<" ";
    
}
