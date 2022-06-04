string reverseWord(string str){
  int start =0, int end =str.size()-1;
  while(start<=end)
  {
    int temp=str[start];
    str[start]=str[end];
    str[end]=str[end];
    start++;
    end--;
  }
  
