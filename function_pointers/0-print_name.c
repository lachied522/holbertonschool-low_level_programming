/**
 * print_name - executes function pointed to by f
 * @name: string
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
