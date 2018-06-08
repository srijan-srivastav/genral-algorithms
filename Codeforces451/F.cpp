#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
  string s;
  cin>>s;
  vector<string> initial;
  string midd=s.substr(1,s.length()-1);
  map<ll,ll> end;
  for(ll i=1;i<s.length()-1;i++)
  {
       string g=s.substr(0,i);
       initial.push_back(g);
  }
  
  for(ll i=2;i<s.length();i++)
  {
       string g=s.substr(i,6);
     
       ll c=stoi(g);
       end[c]=1;
  }
  
 sort(initial.begin(),initial.end());
    for(ll i=0;i<initial.size();i++)
    {
      ll x=stoi(initial[i]);
      string temp=(midd).substr(initial[i].length()-1);
      
        
         vector<string> ch;
        for(ll k=1;k<=temp.length();k++)
        {
          string c=temp.substr(0,k);
          ch.push_back(c);
        }
        
       
       
        for(ll h=0;h<ch.size();h++)
        {
           string ff=ch[h];
           ll y=stoi(ff);
            ll z=x+y;
        if(end[z]==1)
         {
          
          string a="+";
          string e="=";
          string w=to_string(z);
          string final=initial[i]+a+ch[h]+e+w;
          cout<<final<<endl;
          break;
         }
       
           
        }
        
      
        
        
      }
    }

