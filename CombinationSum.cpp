IF I WANT ALL DISTINCE COMBINATION SUM

void printsums(int k,int total,vector<int>v,unordered_set<string>visited,int j){
    if(k==0){
        cout<<total<<" ";
        return;
    }
    string key = to_string(k)+" "+to_string(total);
    if(visited.find(key)!=visited.end())
        return;
    for(int i=j;i<v.size();i++){
        printsums(k-1,total+v[i],v,visited,i+1);
    }
    visited.insert(key);
}

IF I WANT REPITITION

void printsums(int k,int total,vector<int>v,unordered_set<string>visited,int j){
    if(k==0){
        cout<<total<<" ";
        return;
    }
    string key = to_string(k)+" "+to_string(total);
    if(visited.find(key)!=visited.end())
        return;
    for(int i=j;i<v.size();i++){
        printsums(k-1,total+v[i],v,visited,i);			//difference here
    }
    visited.insert(key);
}
void getDivingLen(int k,int total,int shortLen,int longLen){
    if(k==0){
        cout<<total<<endl;
        return;
    }
    getDivingLen(k-1,total+shortLen,shortLen,longLen);
    getDivingLen(k-1,total+longLen,shortLen,longLen);
}
//cache this if you want memoization by using set<string>visited
