#include <bits/stdc++.h>
using namespace std;

int main(){
    //string path = "/home/user/Documents/../Pictures";
    string path = "/.../a/../b/c/../d/./";
    stack<string> path_stack;
    stringstream ss (path);
    string dir;

    while(getline(ss, dir, '/')){
        if(dir == "" || dir == "."){
            continue;
        }
        else if(dir == ".."){
            if(!path_stack.empty()){
                path_stack.pop();
            }
        }
        else{
            path_stack.push(dir);
        }
    }

    string canonicalPath = "";

    while(!path_stack.empty()){
        canonicalPath = "/" + path_stack.top() + canonicalPath;
        path_stack.pop();
    }

    if(canonicalPath == ""){
        cout<<"/";
    }
    else{
        cout<<canonicalPath;
    }
    return 0;
}
