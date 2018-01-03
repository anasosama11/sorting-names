#include <iostream>

#include<algorithm>

#include<cstdlib>
using namespace std;


int main()
{    cout<<"\t\t\twellcome to  name sorting (AtoZ) app\n"<<endl;int v;
   cout<<"how many names do you want to sort :\n";cin >>v;
   char arr[v][100];  int n = sizeof(arr)/sizeof(arr[0]);
cout<<"please enter the names :\n";


   for (int i=0; i<n; i++){
    cin>>arr[i];
   }
//selection sort algorithm
     for (int i=0; i<n; i++){

     for(int j=0;j<n;j++){
if(strcmp(arr[i],arr[j])<0){

    swap(arr[i],arr[j]);}
    }
}
cout<<"the sorted names are :\n";
    for (int i=0; i<n; i++)
        cout<< arr[i]<<"  ";cout<<endl<<endl;
system("pause");
    return 0;
}
