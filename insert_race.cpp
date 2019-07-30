#include<iostream>
#include <time.h>  
#include<vector>
#include<list> 

#define time 100000

using namespace std;



int main(){
	
	vector<int>my_vec(100,0);
	list<int>my_list(100,0);
	
	double tStart, tEnd;
	
	tStart = clock();
	for(int j = 0; j < time; j++){
		my_vec.insert(my_vec.begin(), 6);
	}
	tEnd = clock();
	  cout << "vector 需要" << tEnd - tStart<< "豪秒完成插入資料" << endl;


	
	
	tStart = clock();
	for(int j = 0; j < time; j++){
		my_list.insert(my_list.begin(), 6);
	}
	tEnd = clock();
	  cout << "list 需要" << tEnd - tStart << "豪秒完成插入資料" << endl;
	
	system("pause");
}
