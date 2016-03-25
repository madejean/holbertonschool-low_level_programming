char *uppercase_string(char *str)
{
  int i; 
<<<<<<< HEAD
  /*do loop to go through the string and print uppercase letter using ascii table*/
=======
  /*loop goes through string and prints Uppercase letters using ascii*/
>>>>>>> e9a71b5c60380651ed825287ad088945bdc98e27
  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32; 
	}
    }

  return str; 
}
