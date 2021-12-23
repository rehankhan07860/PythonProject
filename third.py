#Program to find the area of a circle
import math
r = float(input("Enter the radius of the circle: "))
area = math.pi*r*r
print("Area: %.2f" % (area))
print("Area: {:0.2f}".format(area))