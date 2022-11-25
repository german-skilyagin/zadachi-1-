#include <iostream>
using namespace std;
int main() {
   char word[]={"0123456789ABCDEFGHIJKLMNOPQ"};
   char let[]={"abcdefghijklmnopqrstuvwxyz "};
   string s,ans;
   cin>>s;
   while(ans.size() <= s.size()){
    for(int i=0;i<27;i++){
        int index=0;
        for(int j=0;j<27;j++){
            if(word[j] == s[i]){
                index=j;
                break;
            }
        }
        if(index-2-i > -1){
            ans.push_back(let[index-2-i]);
        }
        else{
            ans.push_back(let[26-i-1+index]);
        }
    }
   }
   ans.erase(ans.begin()+s.size(),ans.end());
   cout<<ans;
}