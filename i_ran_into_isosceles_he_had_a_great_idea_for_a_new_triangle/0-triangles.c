int print_char(char c);

void triangles_in_the_term(int h, int n)
{
  int row;
  int space;
  int star;
  
  if (n <= 0 || h <= 0) {
    return;
  }
  for (n =n; n > 0; n--)
    {
      for (row = 1; row <= h ; row++)
	{
	  for (space = h-row; space >= 1; space--)
	    {
	      print_char(' ');
	    }
	  for (star = 1; star <= (row*2)-1; star ++)
	    { 
	      print_char('*');
	    }
	  print_char('\n');
	}
    }
}
