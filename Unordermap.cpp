#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string ,string>table;
    table["in"]="india";
     table.insert(make_pair("br","brazil"));
    pair<string,string>p;
    p.first="in";
    p.second="indonisa";
    table.insert(p);

    unordered_map<string ,string >:: iterator it=table.begin();
    while(it !=table.end()){
        pair<string ,string >p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }
    
    if(table.find("in")!=table.end()){
        cout<<"Table found "<<endl;
    }else{
        cout<<"tbale is not found ";
    }

    return 0;
}
