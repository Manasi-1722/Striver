#include <bits/stdc++.h>
using namespace std;

int main()
{
    // SET - It stores everything in sorted order and has all unique elements
    // In set every function takes logarithmic time i.e T.C = log(n)

    set<int> st;
    st.insert(1);  // 1
    st.insert(2);  // 1 2
    st.insert(2);  // 1 2         ****Unique element****
    st.insert(7);  // 1 2 7
    st.emplace(4);  // 1 2 4 7
    st.insert(6);   // 1 2 4 6 7

    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    // Functionality of insert in vector 
    // can be used also, that only increases
    // efficiency

    // begin, end, rbegin, rend, size, empty
    // and swap all are same as those of vector

    // To check whether the element is there in set we use " find " function
    // this Find function returns an Iterator i.e address of the stored element in set
    auto it = st.find(7);


    // if we find an element which is not there in set 
    // then it always returns st.end() i.e index which is just after last elements index
    auto it1 = st.find(0);
    

    st.erase(6);        // deletes the element from set      // takes log(n) time
    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;


    auto it2 = st.find(2);     // finds the element first and save its address
    st.erase(it2);             // now send that address to erase function to delete it

    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;


    


    
    return 0;
}