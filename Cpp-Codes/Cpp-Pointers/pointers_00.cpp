#include<iostream>
using namespace std;

int main(){
	
	int arr[5]= {2, 4, 6, 7, 8};
	
	int* p = arr;
	
	cout << *(p+1);
	
	
// In pointers without using brackets its increment to the current value of of index
// using brackets to increment it increment to the specific index what the vlaue user 
// entered	

// for e.g user cout << *p+1   the output is 3 incrementing the element of index 0
// if user write cout << *(p+1) the output is 4 incrementing in its index not element
	
	return 0;                      
}

