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
