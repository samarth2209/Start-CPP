//PRINT A ISOCALES TRIANGLE USING STARS “*”

#include<iostream>

using namespace std;

void printIsoc(int n){
	
	for(int i=n; i>0; i--){
        
		for(int j=0; j<=n; j++){
            
			(j>=i)?(cout<<" *"):(cout<<" ");
           
		    }
        
		cout<<endl;
    }
	
}

int main(){
	int n;
	
	cout<<"Enter rows"<<endl;
	cin>>n;
	
	printIsoc(n);
	
	return 0;
}
