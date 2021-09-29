#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
  
#define MAX 26  
void substring(string str, int k)
{
    int n = str.size();
    int fre[MAX] = {0};
    
    for(int i=0; str[i]; i++)
    {
        fre[str[i] - 'a']++;
    }
    
    for(int i=0; str[i]; i++)
    {
        if(fre[str[i] - 'a']>= k)
            cout<<str[i];
    }
    return;
}

int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    substring(str,k);
    return 0;
}