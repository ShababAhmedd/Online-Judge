import numpy as np


def calculate_matrix_mean(matrix: list[list[float]], mode: str) -> list[float]:
	
	mtrx = np.array(matrix)

	if mode == 'row':
		means = np.mean(mtrx, axis=1).tolist()
	else:
		means = np.mean(mtrx, axis=0).tolist()
	
	return means

# https://www.deep-ml.com/problems/4
