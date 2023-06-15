#include <iostream>
using namespace std;
int main(){
	int row, col;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"Enter number of columns: ";
	cin>>col;
	cout<<endl;
	
	int arr[row][col];
	int sum=0;
	cout<<"Enter elements of an array!"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
	cout<<"Enter element for ["<<i<<"]["<<j<<"]:";	
	cin>>arr[i][j];
	sum = sum + arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Sum of elements of an array: "<<sum;
}
