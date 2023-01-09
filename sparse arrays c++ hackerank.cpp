/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string>st{"aba","baba","aba","xzxb"};
    vector<string>qu{"aba","xzxb","ab"};
    vector<int>v;
    vector<string>::iterator st2=st.begin();
    vector<string>::iterator qu2=qu.begin();
    int k=0;
    for(int i=0;i<qu.size();i++)
    {
        v.emplace_back(0);
    }
    int count=0;
    for(int i=0;i<qu.size();i++)
    {
        count=0;
        for(int j=0;j<st.size();j++)
        {
            if(*(qu2+i) == *(st2+j))
            {
                count++;
            }
        }v[i]=count;
    }
    for(int i=0;i<3;i++)
        cout<<v[i]<<" ";
    

    return 0;
}
