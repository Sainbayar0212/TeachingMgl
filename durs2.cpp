#include<iostream>

using namespace std;

int main(){
	int h,w;
	cout<<"Ondor: ";
	cin>>h;
	cout<<"Orgon: ";
	cin>>w;
	
	for(int i = 1; i<=h; i++){
		for(int j = 1; j<=w; j++){
			if(i==1 || i == h || j ==w || j ==1){
				cout<<"*";
			}else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	
	
	return 0;
}
/*
 01234 -> j
0*****
1*   *
2*   *
3*   *
4*****
I


*/

