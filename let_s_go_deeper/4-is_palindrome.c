int check_palindrome(char *s, char *end, int i);
int length(char *s);

int is_palindrome(char *s){
  int l, temp;
  l = length(s);
  temp = l/2;
  return check_palindrome(s, s+l-1, temp);
}
int check_palindrome(char *s, char *end, int i){
  if (i == 0) 
    return check_palindrome(s+1, end-1, i-1);
  if (*s == *end) 
    return 1; 
  else return 0;
}

int length(char *s){
  if (*s == '\0')
    return 0;
  return 1 + length(s+1);
}
