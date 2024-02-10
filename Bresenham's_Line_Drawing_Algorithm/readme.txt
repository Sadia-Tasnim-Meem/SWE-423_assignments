We will always take x_initial < x_final. So rest will depend on the sign of dy.

depending on the slope there are two cases
1. 0 < abs(m) < 1: we will iterate through x axis. if the line is going downwards, we will just negate the y while printing. how do I know it's going downwards? well, dy will be negative
2. abs(m) > 1: we will iterate through y axis. and if the line is going downwards, we will just negate the y while printing

mathematics
0 < abs(m) <= 1 means: 0 < abs(y)/abs(x)
                    => 0 < abs(y)
                    and
                    abs(y)/abs(x) <= 1
                    => abs(y) <= abs(x)
abs(m) > 1 means:   abs(y)/abs(x) > 1
                    => abs(y) > abs(x)
