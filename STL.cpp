#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int,5> a = {1,3,5,4,6};
	for(auto it = a.rbegin();it!=a.rend();it++) // prints in reverse order
	{
		cout<<*it<<" ";
	}
	//for each loop
	for(auto it:a)
	{
		cout<<it<<" ";
	}
	string s = "satyam";
	for(auto c : s)
	{
		cout<<c<<" "; //prints each character
	}
	// vector
	
	vector<int> v;
	v.push_back(0);
		v.push_back(1);
			v.push_back(2);
	v.pop_back(); // removes 2 
	v.clear(); //remove all the elements from vector 
	vector<int> vec(4,0); //creates of size 4 and initialise all to 0
	vector<int> vec2(4,10);
	vector<int> vec3(v2.begin(),v2.end());//copies entire vec2 in vect 3
	vector<int> vec4(vec2);//copies entire vec2 in vect 3
	
	vector<int> e;
	e.push_back(1);
		e.push_back(2);
			e.push_back(3);
				e.push_back(4);
	vector<int> e1(e.begin(),e.begin()+2) // for accessing the first two elements of the vector
	
	//emplace _ back
   v.emplace_back(1); //it is similar to push_back but comparitevely it takes lesser time when compared to push_back
   
     // 2-d vectors
	 vector<vector<int>> vec;
	 //here vector<int> is itself a datatype i.e it is a vector which will store the vectors
	 vector<int> v1;
	 v1.push_back(1);
	  v1.push_back(2);
	  vector<int> v2;
	   v2.push_back(10);
	    v2.push_back(20);	
	    
	vec.push_back(v1); // vec being 2d array stores vectors as their value and v1 will be "0" based index
	vec.push_back(v2); // vec being 2d array stores vectors as their value and v2 will be "1" based index
	
	for(auto vctr : vec) // here vctr is vector itself
	{
		for(auto it : vctr)
		{
			cout<<it<<" "<<endl;
		}
	}
	
	//traditional way - longer code
	for(int i=0;i<vec.size();i++)
	{
		for(int j=0;j<vec[i].size();j++)
		{
			cout<<vec[i][j]<<" ";
		}
	}
	
	//each index can also be increased
	
	vec[2].push_back(1);
	
	// defining a 10X20 vector 
	
	vector<vector<int>> v(10,vector<int> (20,0)); //0 is the size
	
	
	//set 
	
	set<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	s.erase(s.begin()); // deletes the first element
	s.erase(s.begin(),s.end()); //deletes whole set
	s.erase(s.begin(),s.begin()+2) //deletes first two elements
	s.erase(5) //deletes element 5
	// copy set
	set<int> s1(s.begin(),s.end());//copies s elements into set s1
	auto it = s.find(7); //if 7 exist pointer will be on the element 7 //logn
	// to print set
	for(auto it=s.begin();it!s.end();it++)
	{
		cout<<*it;
	}
	 
	 OR
	 
	 for(auto it : s)
	 {
	 	cout<<it;
	 }
	 
	 s.count(2); //finds how many times 2 has occured
	 
	 
	 unordered_set<int> st;//this will store elements in any order 
	 // unordered_set avg. time complexity is O(1)
	 //but the worst case t.c is linear i.e O(size of set)
	 
	 
	 multiset<int> ms; // multiset will store all the values in sorted order and it stores duplicates values as well
	 
	 //MAP
	 
	 //ordered map
	 map<string,int> m;
	 m["satyam"] = 22;
	 m["paridhi"] = 21;
	 m["Aashiq"] = 22;
	 m["satyam"] = 23 //here it overides the key value and it will store as 23 instead of 21
	 m.emplace("satyam",21);
	 m.erase("satyam");//single instance
	 m.erase(m.begin(),m.end()); //similar to other operations
	 auto it = m.find("satyam"); //points where satyam lies
	 
	 //pair
	 pair<int,int> p; //for reference of map
	 p.first = 1;
	 p.second =10;
	 
	 for(auto it : m)
	 {
	 	cout<<it.first<<" "<<it.second<<endl;
	 }
	 
	 OR
	 
	 for(auto it = m.begin();it!=m.end();it++)
	 {
	 	cout<<it->first<<" "<<it->second<<endl;
	 }
	 
	 //Pair class
	 
	 pair<int,int> pr = {1,2};
	 pair<pair<int,int>,int> p = {{1,2},3};
	 cout<<p.first.second;//return 2
	 pair<pair<int,int>,pair<int,int>> p = {{1,2},{3,4}}; 
	 cout<<p.first.first; // returns 1
	 cout<<p.second.second; // returns 4
	 
	 // pairs can be used with other containers
	 vector<pair<int,int>> v;
	 set<pair<int,int>> s;
	 map<pair<int,int>,int> m; //unordered map cannot use pairs 
	 
	 //stack
	 
	 bool flag = st.empty(); //returns true or false wheter the stack is empty or not
	 while(!st.empty())  //deletes the entire stack
	 {
	 	st.pop();
	 }
	 
	 queue<int> q;
	 for(int i=0;i<n;i++)
	 q.push(i);
	 
	 //Always check wheter stack is empty or not because stack should have minimum "1" element to print otherwise it will throw an error
	 
	 /*Priority Queue*/
	 //Duplicates are allowed
	 priority_queue<int> pq;
	 pq.push(1);
	 pq.push(2);
	 pq.push(3);
	  // It will store the data in descending order and all the operations will be performed in O(logn) time even in worst case
	  priority_queue<pair<int,int>> pq;
	  pq.push(1,5);
	  pq.push(1,6);
	  pq.push(1,7);
	  // pq will look for first element if they are equal then it will look for the seocnd element
	  
	  /* minimum priority queue*/
	  priority_queue<int,vector<int>,greater<int>> pq; 
	 pq.push(1);
	 pq.push(2);
	 pq.push(3);
	 cout<<pq.top()<<endl; //prints 1
	 pq.pop();
	  
	  
	/* Dequeue*/
	
	//functions are common except you can perform action from both the sides i.e from front as well as from back
	//push_front
	//push_back
	//pop_front
	//pop_back
	//begin,end,rbegin,rend
	//size
	//clear
	//empty
	//at
	dequeue<int> dq;
	
	/* list more useful than dequeue because all operations are same except it performs "removes" operation in O(1) time*/
	list<int> ls;
		//push_front
	//push_back
	//pop_front
	//pop_back
	//begin,end,rbegin,rend
	//size
	//clear
	//empty
	//at
	//remove
	ls.push_front(1);
	ls.push_front(2);
	ls.remove(2); // O(1)
	
	
	// Implementation of Map
	//Return the elements which is repeating most number of times
	int n;
	cin>>n;
	unordered_map<int,int> m;
	int maxi = 0;
	for(int i=0;i<n;i++)
	{
		int x; //insering the elements into the map
		cin>>x;
		m[x]++;
		if(m[x] > m[maxi])
		{
			maxi = x;
		}
	}
	cout<<maxi<<endl;
	
	
	//Implementation of multiset
	//Suppose you want to print all the elements in sorted order then
	int n;
	cin>>n;
	multiset<int> m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		m.insert(x); //logn
	}
	for(auto x : m)
	{
		cout<<it<<endl;
	}
	
	
	// Reverse in array as well as in vectors
	reverse(a,a+n);
	reverse(v.begin(),v.end());
	
	// max and min
	int ma = *max_element(a,a+n); // if you will not use star it will become or return iterator
	int mi = *min_element(a,a+n);
	//sly for vectors
	int maxi = *max_element(v.begin(),v.end()); //sly for mini
	
	//Accumulate function
	
	/*Accumulate function is used to store the sum between the given range*/
	
	// Syntax : accumulate(startIterator,endIterator,Initialsum)
	
	int sum = accumulate(arr,arr+n,0); //here zero beacuse sum here we initially assume as zero
	
	// sly for vectors
	int sum = accumulate(v.begin(),v.end(),10); //here sum is initially 10
	
	/* count function*/
	//syntax - count(startIterator,endIterator,Element)
	
	int cnt = count(a,a+n,5); // here it will search in the array for 5 how many times it occur and then return the value
	
	/* to get index of any element in the array use // ***iterator - begin ***
	*/
	
	// to find the first occurence of any element in an array wheter sorted or unsorted use this //
	
	//Find function will not return index but it will return the iterator to that element then we can find idx by above formula
	
	auto it = find(arr,arr+n,5); // here 5 is the element we need to find its first occurence	
	auto idx = it - arr;
	    OR 
	auto idx = it - v.begin();
	
	   // arr[] -> {1, 5, 6, 2, 3, 5, 6}
    // x = 4 
    auto it = find(vec.begin(), vec.end(), 4); 
    if(it == vec.end()) {
    	cout << "element is not present"; //since 4 is not present it will be pointing to the last index+1 idx i.e end
    }
    else {
    	cout << "Element is first present at: " << it - vec.begin(); 
    }
	
	/*Binary  Search*/
	
	//if u want to find any element exist in the array  or not
	//B.S only work in sorted arrays
	//works in logn complexity
	
	bool x = binary_search(arr,arr+n,10); //sly for vectors
	
	 // lower_bound function 
    // returns an iterator pointing to the first
    // element which is not less than x 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 10 
    // x = 6 
    // x = 13 
    // this works in log N 
 
    auto it = lower_bound(arr, arr+n, x); 
    ind = it - arr; 
 
    auto it = lower_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); //in single line we can write this
    
     // upper bound 
    // returns an iterator which points to an element which is 
    // just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> end() iterator 
    // x = 15 -> end() iterator 
 
    auto it = upper_bound(arr, arr+n, x); 
    ind = it - arr; 
 
    auto it = upper_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();
    
    // Q1. find me the first index where the element X lies 
    // find function can be used but that takes O(N) times
    // the array is sorted.. 
    
    // There are couple of ways to do it
    // 1st way 
    if(binary_search(arr, arr+n, x) == true) {
    	cout << lower_bound(arr, arr+n, x) - arr; 
    }
    else cout << "does not exists"; 
 
 
    // 2nd way 
    int ind = lower_bound(arr, arr+n, x) - arr; 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    /////////////0  1  2  3  4  5   6   7   8   9   10 
    // find x = 13 -> ind = 11, which is out of bound 
    // hence arr[11] will give you runtime error 
    
    if(ind != n && arr[ind] == x) //here we check if the iterator has not reached the last index otherwise it  will give wrong ans bcause element is not present
	 {  
    	cout << "Found at: " << ind;  
    }
    else {
    	cout << "Not found";
    }
	
	 // Find me the last occurrence of x in an arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 
 
    // last occurrence of x = 10, ans = 7th index
    // last occurrence of x = 6, ans = does not exists
    // last occurrence of x = 0, 
    // last occurence of x = 13 
    int ind = upper_bound(arr, arr+n, x) - arr; 
    ind -= 1; 
    if(ind>=0 && arr[ind] == x) {
    	cout << "last occurrence: " << ind; 
    }
    else {
    	cout << "Does not exists"; 
    }
    	
    	// Q3. tell me the number of times the x appears in arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 
 
    // x = 10, ans = 3 
    // x = 7, ans = 2 
    
   int ans =  upper_bound(arr,arr+n,7)-lower_bound(arr,arr+n,7);
   
   // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 
 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba
     //sorting is required as pre-requisite
    // s = "bca" 
    bool res = next_permutation(s.begin(), s.end()); 
 
    // s = "cba"
    bool res = next_permutation(s.begin(), s.end()); 
 
    // if I give you any random string s = "bca"
    // i want you to print all the permutations 
 
    string s = "bca"; 
    sort(s.begin(), s.end()); // this makes the string as "abc"
    do {
    	cout << s << endl; 
    } while(next_permutation(s.begin(), s.end())); 
     
     //previous permutations
     bool res = prev_permutation(s.begin(), s.end());
     
     //Comparator
     //suppose you want to sort the array in the descending order then use comparator
     //Always of boolean type
     bool comp(int a,int b)
     {
     	if(a<=b)
     	{
     		return true;
		 }
		 return false;
	 }
	 
	 //Suppose you want to sort array of pairs such that
	 //if first element of pair is sorted in ascending order
	 // if the first element of the pairs are equal then sort the second of the pair
	 //in descending order
	 //eg. pair<int,int> arr[] = {{1,4},{5,9},{5,12}}
	 //sol :  {{1,4},{5,12},{5,9}}
	 
	 bool comp(pair<int,int> a,pair<int,int> b)
	 {
	 	if(a.first<b.first)
	 	{
	 		return true;
		 }
		 if(a.first==b.first)
		 {
		 	if(a.second > b.second)
		 	{
		 		return true;
			 }
		 }
	 }
	 
	 // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    sort(arr, arr+n, greater<int>); 
     // even in pairs if u use greater<int>
     //it will sort first element of pair in descending order
     // and if first of the pair are equal it will then 
     //sort second element in descending order.
}
