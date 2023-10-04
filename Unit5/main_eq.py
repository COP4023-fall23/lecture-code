#import Unit5.Quadratic as Quadratic
import Quadratic as QE
import numpy as np

eq_1 = QE.Quadratic(1,9,2)
eq_2 = QE.Quadratic(4,5,8)
eq_1.find_solution()
x_values = np.random.rand(6)
y_vale = eq_1.evaluation(x_values)
print(y_vale)