#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int n){
	vector<int> x;
	for(int i=0; i<n ; i++){
		x.insert(x.begin()+i,rand()%10);
	}
	return x;
}

void showVector(vector<int> n){
	cout << "[" ;
	for(int i=0; i<n.size(); i++){
		cout << n[i] << " " ;
	}
	cout << "]" ;
}

int dotProduct(vector<int> n,vector<int> m){
	int x =0;
	for(int i=0; i<5 ; i++){
		x += n[i]*m[i];
	}
	return x;
}
