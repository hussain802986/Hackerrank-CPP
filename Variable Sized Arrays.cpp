/*
Variable sized array

Sample Input

2 2            first 2 integers are n & q. n is the Number of arrays. q is the number of queries. 
3 1 5 4        the first element 3(size of k) in this line is the size of first array.
5 1 2 8 9 3    
0 1            0,1 is the address of the element to be displayed. 0 means the first array. 1 is the address in the first array to be displayed.
1 3
Sample Output

5
9
*/
#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    cin.ignore();
    vector<vector<int>> a(n);
    
    for(int i=0;i<n;i++)
    {
        string line;
        getline(cin, line);
        istringstream ss(line);
        
        //First number is the size of k
        int k_size,k_item;
        ss>>k_size;
        vector<int> k(k_size,0);    //declaring vector of k_size and initializing all elements to 0
        
        //Populate k array
        for(int j=0;j<k_size;j++)
        {
            ss>>k_item;
            //don't use push_back
            k[j] = k_item;
        }
        // Add k to the array. Don't use push_back
        a[i]=k;
    }
    
    for(int i=0;i<n;i++)
    {
        string query;
        getline(cin,query);
        istringstream ss(query);
        
        //Get loation in the vector
        int x,y;
        ss>>x>>y;
        cout<<a.at(x).at(y)<<endl;    // a.at(x).at(y) is the same is a[x][y]
    }
    return 0;
}

