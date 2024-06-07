#include<iostream>
#include<vector>
// #include "../../../../../../../../mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/algorithmfwd.h"

using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(22);
    v.push_back(20);
    v.push_back(78);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.at(3)=100;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // reverse(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
}

// // CPP program to illustrate
// // std::reverse() function of STL
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// 	vector<int> vec1;
// 	vector<int>::iterator p;

// 	// Inserting elements in vector
// 	for (int i = 0; i < 8; i++) {
// 		vec1.push_back(i + 10);
// 	}
// 	// Displaying elements of vector
// 	cout<<"Initial Vector:"<<endl;
// 	for(p = vec1.begin(); p < vec1.end(); p++) {
// 		cout << *p << " ";
// 	}
// 	cout << endl;

// 	cout << "Reverse only from index 5 to 7 in vector:\n";
// 	// Reversing elements from index 5 to index 7
// 	reverse(vec1.begin() + 5, vec1.begin() + 8);

// 	// Displaying elements of vector after Reversing
// 	for (p = vec1.begin(); p < vec1.end(); p++) {
// 		cout << *p << " ";
// 	}
// 	cout << endl <<endl;

// 	vector<int> vec2{ 4, 5, 6, 7 };

// 	cout<<"Initial Vector:"<<endl;
// 	for (p = vec2.begin(); p < vec2.end(); p++) {
// 		cout << *p << " ";
// 	}
// 	cout << endl;

// 	cout << "Reverse full Vector:"<<endl;
// 	// Reversing directly from beginning to end
// 	reverse(vec2.begin(), vec2.end());
	
// 	// Displaying elements of vector after Reversing
// 	for (p = vec2.begin(); p < vec2.end(); p++) {
// 		cout << *p << " ";
// 	}
// 	cout << endl;

// 	return 0;
// }
