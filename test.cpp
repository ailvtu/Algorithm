/***********
**********/
#include <iostream>
using namespace std;

/**********
back array
*********/
int *f(){
	int *a = new int [2];
	a[0] = 2;
	a[1] = 1;
	return a;
}
void sys(){
	void * a = 0;
	cout <<"sys:"<<sizeof(&a)<<endl;
}
int main (int arge,char *argv[]){
        //cout<<"the test for g++"<<endl;
        int *b = f();
        //cout<<b[1]<<endl;
        sys();
        return(0);
}


