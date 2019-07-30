#include<iostream>
#include <time.h>  
#include<vector>
#include<list> 
#include<algorithm>

#define time 1000

using namespace std;



int main(){
	
	vector<int>my_vec(50000, 3);
	list<int>my_list(50000,3);
	double tStart, tEnd;
	my_vec.push_back(5);
	my_list.push_back(5);
	
	tStart = clock();
		
	for(int i = 0; i < time; i++){
		vector<int>::iterator itr_1 = find(my_vec.begin(), my_vec.end(),5);
	}
	 tEnd = clock();
	  cout << "vector 需要" << tEnd - tStart<< "豪秒完成搜索" << endl;


	
	tStart = clock();
	for(int j = 0; j < time; j++){
		list<int>::iterator itr_2 = find(my_list.begin(), my_list.end(), 5);	
	}
	tEnd = clock();
	  cout << "list 需要" << tEnd - tStart << "豪秒完成搜索" << endl;
	
	system("pause");
}
