void make_interval(int n, int m, {invert: false}){
  if(invert == false){
    for(int i = n+1; i < m; i++){
      print(i);
    }
  } else{
    for(int i = m-1; i > n; i--){
      print(i);
    }
  }

}

void main(){
  make_interval(5, 10, invert: true);
}