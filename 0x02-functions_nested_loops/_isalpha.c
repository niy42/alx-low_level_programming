#include <unistd>
/**
*_isalpha - checks for lowercase character
* 
*Return: 1 if c is lowercase
*Otherwise: return 0
*/
int _isalpha(int c){
	return (write(1, &c, 1));
}
