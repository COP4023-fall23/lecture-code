import math
import numpy as np
class Quadratic:
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    def find_solution(self):
        decr = self.b**2-4*self.a*self.c
        if(decr>= 0):
          sol1 = (-self.b + math.sqrt(decr))/(2*self.a)
          sol2 = (-self.b - math.sqrt(decr))/(2*self.a)
          print("Solution 1:{0:0.4} and Solution 2: {1:0.4}".format(sol1,sol2))
        else:
            print("The equation does not have real solutions.")
    def evaluation(self, x_values):
        y_values = np.zeros(len(x_values))

        for i in range(len(x_values)):
            y_values[i] = self.a*x_values[i]**2 + self.b*x_values[i] + self.c        
        return y_values
