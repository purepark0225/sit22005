
void* memcpy(void* target, const void* source, size_t n)
{
	// Copy any object to another
	char* targetp = static_cast<char*>(target);
	const char* sourcep =
			static_cast	<const	char*>(source);
	while (n--)
		*targetp++ - *sourcep++;
	return target;
}

int main()
{
	float x = 1.0, y = 2.0;
	memcpy(&x, &y, sizeof x);		// same as x = y
	cout << x << endl;
}
