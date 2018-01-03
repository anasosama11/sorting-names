#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

void sortStrings(char arr[][100], int n)
{
    char temp[100];

    // Sorting strings using bubble sort
    for (int j=0; j<n-1; j++)
    {
        for (int i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

class b
{
protected :
    int v;
public:
    b()
    {
        v=9;
    }
    b( int c)
    {
        v=c;
    }
    void show ()
    {

        cout<<v<<endl;
    }




    b operator ++()
    {

        return b (++v);
    }
    b operator ++(int)
    {

        return b(v++);
    }

    b operator =(b c)
    {
        v=c.v;
        return v;
    }


};
int main()
{    cout<<"\t\t\twellcome to  name sorting (AtoZ) app\n"<<endl;int v;
   cout<<"how many names do you want to sort :\n";cin >>v;
   char arr[v][100];  int n = sizeof(arr)/sizeof(arr[0]);
cout<<"please enter the names :\n";


   for (int i=0; i<n; i++){
    cin>>arr[i];
   }


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
