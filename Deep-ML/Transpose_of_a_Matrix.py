import numpy as np

def transpose_matrix(a: list[list[int|float]]) -> list[list[int|float]]:
    lst = np.array(a)
    b = (lst.T).tolist()
	return b

# https://www.deep-ml.com/problems/2
