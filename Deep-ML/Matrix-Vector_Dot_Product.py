import numpy as np

def matrix_dot_vector(a: list[list[int|float]], b: list[int|float]) -> list[int|float]:
	# Return a list where each element is the dot product of a row of 'a' with 'b'.
	# If the number of columns in 'a' does not match the length of 'b', return -1.
    a = np.array(a)
    b = np.array(b)

    row_a, col_a = a.shape
    if col_a != b.size:
        return int(-1)

    prod = np.dot(a, b).tolist()
    return prod


  # https://www.deep-ml.com/problems/1
