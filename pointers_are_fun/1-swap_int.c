void swap_int(int *a, int *b)
{
  int t;
  t = *a; //store value of *a in a temporary variable to call it later
  *a = *b; //*a takes value of *b
  *b = t; //*b takes the original value of *a store in t
}
