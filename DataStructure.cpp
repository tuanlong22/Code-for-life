#include <bits/stdc++.h> 
using namespace std;
int main() {
    // Orinary Array
    int n;
  int p[n];
sort(p,p+n);
reverse(p, p+n);
random_shuffle(p, p+n);
// Dynamic Arrays
// Dynamic Arrays is array that can be changed its size during the the execution
// of the program. The most popular dynamic array is vector
 vector<int> v;
 v.push_back(2); // O(1) time complexity
// to access all the elements in the vector, we use loop to iterate through
// all elements of the vector
for(int i=0;i<v.size();i++){
     cout<<v[i]<<endl;  // print all elements of the vector 
}
for(auto x: v){
    cout<<x<<endl; // another way to print all elements of the vector
}
cout<<v.back()<<endl; // print the last element of the vector
v.pop_back(); // delete the last element of the vector
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
// string 
// is also the dynamic array that can be used almost like a vector.
string a ="long";
string b = a+a;
cout<<a+b<<endl; // longlong
string c = b.substr(3,4); // this function returns the substring that begins with
// position k and has l length

// Set structure: All elements in set are distinct
// A set is a data structure, the opetations of set are insert, remove and search
// the structue set is based on a balanced binary tree and its operations work in O(logn) time.
// The structure unordered_set uses hashing, and its operations work in O(1) time
// on average.
set<int> s;
s.insert(0);
s.insert(2);
cout<<s.count(0); //1
s.erase(0);
// A set can be used like a vector but we can not access to its elements using
// [] notation. 
 for(auto x: s){
    cout<<x<<" "; // print all elements of the set
 }
 set<int>:: iterator it =s.begin(); // create a iterator that points to the first element
 auto it = s.begin(); //shoter way to creat a iterator
 // the element to which the iterator points can be accessed using the *
 cout<<*it;
 for (auto it = s.begin(); it != s.end(); it++) {
cout << *it << "\n";  // print all the elements of the set
} 
auto it = s.end(); it--;
cout<<*it << "\n"; // print largest element of the set
// multiset: work like set but it has repeated elements
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.erase(5); // remove all instances of an element from multiset
s.erase(s.find(5)); // remove only one instance of an element from multiset
// Map Structure
// A map consists of key-value-pais
// the structure map is based on a balanced binary tree
// and accessing elements takes O(logn) time, while the structure unordered_map
// uses hashing and accessing elements takes O(1) time on average.
map<string,int> m;
m["monkey"]=4;
m["banana"] = 3;
cout<<m["banana"]<<endl; // 3
// if the value of a key is requested but the map doesn't contain it, the key
// is automatically added to the map
cout << m["aybabtu"] << "\n"; // 0
for(auto x : m){
    cout<<x.first<<" "<<x.second<<"\n"; //prints all the keys and values in a map:
}
//Bitset
// A bitset is a array whose each value is either 0 or 1
bitset<10> b;
b[1] = 1;
b[3] = 1;
b[4] = 1;
b[7] = 1;
cout << b[4] << "\n"; // 1
cout << b[5] << "\n"; // 0
//DEQUE
// A deque is a dunamic array whose size can be changed at both ends of the array
deque<int> d;
d.push_back(1);
d.push_front(2);
d.pop_front();
d.pop_back();
//both adding and removing elements take O(1) time on average at both ends.
// Stack
// a data structure that provides 2 O(1) adding an
// element to the top, and removing an element from the top. It is only possible to
// access the top element of a stack.
stack<int > st;
st.push(3);
st.push(1);
st.push(5);
cout<<st.top()<<endl; // 5
st.pop();  cout<<st.top()<<endl; // 1
//Queue
//also provides 2 O(1) time operations: adding an element to the end
// of the queue, and removing the first element in the queue. It is only possible to
// access the first and last element of a queue.
queue<int> q;
q.push(3);
q.push(2);
q.push(5);
cout << q.front(); // 3
q.pop();
cout << q.front(); // 2
// Priority queue
// The supported operations are
// insertion and, depending on the type of the queue, retrieval and removal of either
// the minimum or maximum element. Insertion and removal take O(logn) time,
// and retrieval takes O(1) time.
// By default, the priority queue is sorted in decreasing orderand it is possible to find and remove the largest element in the queue.
priority_queue<int> qq;
qq.push(3);
qq.push(5);
qq.push(7);
qq.push(2);
cout << qq.top() << "\n"; // 7
q.pop();
cout << qq.top() << "\n"; // 5
q.pop();
q.push(6);
cout << qq.top() << "\n"; // 6
q.pop();
// if we want to create a priority queue that supports finding and removing 
// the smallest elements, we can do it as follow:
priority_queue<int,vector<int>,greater<int>> qq;



// Policy-based data structures
// The g++ complier also support some data structure that are not part of the
//C++ standard library. Such structures called policy-based data structures.
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds; // use this code to 
//After this, we can define a data structure indexed_set that is like set but can be
// indexed like an array. The definition for int values is as follows:
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
indexed_set s;
s.insert(2);
s.insert(3);
s.insert(7);
s.insert(9);
auto x = s.find_by_order(2); // return the element at a given position
cout << *x << "\n"; // 7
cout << s.order_of_key(7) << "\n"; // 2 (return the position of a given element)
}