bool dfs(int now,int group){
	chk[now]=group;//1이나-1이다. 
	for(int i=0;i<vec[now].size();i++){
		int next=vec[now][i];
		if(chk[next]==0){//0은 아직이란거구. 
			if(!dfs(next,-group)){
				return false;//같다는거니께. 
			}
		}else if(chk[now]==chk[next]){
			return false;//다햇는데같다는것. 
		}
	}
	return true;
}
