/****************
sort algorithm
creat by Dash
data : 2016-03-23
***************/
#include"iostream"
using namespace std;
string  str;
void  quicksort(int  left ,int right){

	if (left>right)
		return;
	int i,j;
	int  temp =  str[left];
	i = left;
	j = right;

	while(i != j){
		while(str [j]>= temp && i < j )
			j--;
		while(str [i] <=temp && i< j )
			i++;
		if (i  < j ){
			int tem = str [j];
			str [ j ] = str [i];
			str [ i ]  = tem;
		}
	}
	str [ left ] = str [i ];
	str [ i ]  = temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
string  buble_sort(string  str2){
	for (int i = 0; i < str2.length(); ++i)
	{
		for (int j = i; j< str2.length(); ++j)
		{
			if (str2[i]<str2[j])
			{
				int t = str2 [i];
				str2 [i] = str2 [j];
				str2 [j] = t; 
			}
		}
	}
        return str2;
}

int main(int argc, char const *argv[])
{
	
	cout<<"please input the que with n:"<<endl;
	cin >> str ;
	quicksort(0,str.length()-1);
	string str2 = buble_sort(str);
              cout<<str2<<endl;
	return 0;
}
