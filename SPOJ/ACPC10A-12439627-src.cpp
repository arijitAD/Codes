#include <iostream>
using namespace std;

int main() {
	long a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0){
			break;
		}
		if((b-a)==(c-b)){
			cout<<"AP "<<c+(c-b)<<endl;
		}
		else{
			cout<<"GP "<<c*(c/b)<<endl;
		}
	}
	return 0;
}