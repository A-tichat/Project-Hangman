#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

vector<int> ranlist(int z){
	int x=0,y=0,ran=0;
	vector<int> list;
	do{
		x=rand()%z+1;
		for (int j=0;j<list.size();j++) {
			if(list[j]==x) {
				x=rand()%z+1;
				j=-1;
			}
		}
		list.push_back(x);
		ran++;
	}while (ran<z);
	
	return list;
}
