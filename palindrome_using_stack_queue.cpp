#include <bits/stdc++.h>
using namespace std;
stack<char>s1;
queue<char>q1;


void fill_stack(string s){
	for(int i=0;i<s.length();i++)
		s1.push(s[i]);
}
void fill_queue(string s){
	for(int i=0;i<s.length();i++)
		q1.push(s[i]);

}
int palindrome(){
	char c_stack,c_queue;
	bool ok=1;
	int length = s1.size();
	for(int i=0;i<length;i++){
		c_stack= s1.top();
			s1.pop();
		c_queue= q1.front();
			q1.pop();

		if(c_queue!=c_stack){
			ok = 0;
			break;
		}
	}
	if(ok!=1)return 0;
	return 1;		
}
int main(){
	string s;
	cin>>s;
	fill_stack(s);
	fill_queue(s);
	if(palindrome())cout<<"Yes "<<s<<" is a palindrome\n";
	else cout<<"No "<<s<<" is not a palindrome\n";

}