#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    map<int, int>mymap;
    std::map<int,int>::iterator it = mymap.begin();
    mymap[1] = 34;
    mymap[2] = 32;
    mymap[3] = 25;
    mymap[4] = 82;
    mymap[5] = 11;
    mymap[6] = 97;
    
    cout<<"Az eredeti sorrendünk"<<endl;
    cout<<"Kúlcs\tÉrtékünk"<<endl;
    
    for( it=mymap.begin(); it!=mymap.end(); ++it ){
        cout<< it->first<<"\t"<<it->second<<endl;
    }
    
    vector<pair<int, int>> ordered;
    
    for(auto i : mymap){
        pair<int, int> p {i.first, i.second};
        ordered.push_back ( p );
    }
    std::sort (
               std::begin ( ordered ), std::end ( ordered ),
               [ = ] ( auto && p1, auto && p2 ) {
                   return p1.second < p2.second; //növekvő sorrend
               }
               );
    
    cout<<"\n\nA rendezett sorrendünk"<<endl;
    cout<<"Kúlcs\tÉrték"<<endl;

    for( auto i : ordered){
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    return 0;
}
