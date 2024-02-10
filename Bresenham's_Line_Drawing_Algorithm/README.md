# Assignment on implementation of Bresenham's Line Drawing Algorithm

## Description

The algorithm was coded using both C++ and Python language. Python was used later for visualization. The different test cases and their ouput are as follows:

## Case 1: (1,1), (8,4)

![image](https://github.com/Sadia-Tasnim-Meem/SWE-423_assignments/assets/87076070/f527d2d1-098b-46d2-956d-95d09a8a6779)

## Case 2: (1,1), (4,8)

![image](https://github.com/Sadia-Tasnim-Meem/SWE-423_assignments/assets/87076070/0fadcccb-7b8c-4959-b0fd-71ee9a2af0d0)

##  Adjustments to the algorithm made for the slope of m>1
### Exchanging x and y coordinates
For a line whose slope is in the 45° to 90°
range, we can obtain its mirrored counterpart by 
exchanging the x and y coordinates of its endpoints. 
So, the distances and decision parameter for 0 < m < 1 are <br>
dT = 2*(dy - dx) <br>
dS = 2*dy <br>
d = 2*dy - dx <br> 
<br>
<br>
and they become <br>
dT = 2*(dx-dy) <br>
        dS = 2*dx <br>
        d = 2*dx - dy <br>
        for m > 1 <br>
That means, the decision  parameter is modified accordingly too. 
### Scan converting the counterpart
After exchanging x and y coordinates and modifying the decision parameter, we can scan convert these coordinates as usually. 
But we must exchange x and y again to plot them properly.
