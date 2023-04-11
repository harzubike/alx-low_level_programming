#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1 if it is not present in
 * the array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (left = 0, right = jump; right < size && array[right] < value;
	     left = right, right += jump)
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= right && left < size; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}

