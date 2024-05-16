#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while ((t--))
    {
        string bin;
        cin >> bin;
        int n = bin.size();
        // count number of ones and zeroes in the binary string
        //  if(bin[0] == '0'){
        //      cout<<"no"<<endl;
        //      continue;
        //  }
        //  if(bin[n-1] != '0' || bin[n-2] != '0'){
        //      cout<<"no"<<endl;
        //      continue;
        //  }
        //  int zeroes = 0,ones = 0;
        //  for(int i = 0;i<bin.size();i++){
        //      if (bin[i] == '0') {
        //          zeroes++;
        //      }
        //      else {
        //       ones++;
        //      }
        //  }
        // cout<<(zeroes == ones*2?"yes":"no")<<endl;
        stack<char> st;
        int isOne = 0;
        for (int i = 0; i < n; i++)
        {
            // Counting how many times the one has appeared and how many ones are in the stack that we can use
            if (bin[i] == '1')
            {
                isOne++;
            }
            // Checking if we can make '100' till now, if yes then we remove it from stack and reduce the number of ones
            if (!st.empty() && bin[i] == '0' && st.top() == '0' && isOne)
            {
                st.pop();
                st.pop();
                isOne--;
                continue;
            }
            st.push(bin[i]);
        }
        // Printing the result
        cout << (st.empty() ? "yes" : "no") << endl;
    }
}