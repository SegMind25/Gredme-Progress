#include <stddef.h>
#include <stdint.h>

// Writes n * size into *out and returns 1 when that product fits in a size_t.
// Returns 0 and leaves *out untouched when the multiplication would wrap.
int	checked_size(size_t n, size_t size, size_t *out)
{
	if(n != 0 && size > SIZE_MAX / n)
	{
		return 0;
	}
	*out = size * n;
	return 1;
}