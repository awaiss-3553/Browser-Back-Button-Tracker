#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;
int main(){
    stack<string> back;
    back.push("Youtube");
    back.push("github");
    back.push("google");
    back.push("facebook");

    while(!back.empty()){
        cout<<back.top()<<endl;
        back.pop();
    }
}
