bool dfs(int now,int group){
	chk[now]=group;//1�̳�-1�̴�. 
	for(int i=0;i<vec[now].size();i++){
		int next=vec[now][i];
		if(chk[next]==0){//0�� �����̶��ű�. 
			if(!dfs(next,-group)){
				return false;//���ٴ°Ŵϲ�. 
			}
		}else if(chk[now]==chk[next]){
			return false;//���޴µ����ٴ°�. 
		}
	}
	return true;
}
