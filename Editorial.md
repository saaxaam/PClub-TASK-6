
# Y21 and Brownies

The critical observation to make is that the optimal rectangle should always have a lower-left vertex at the origin. This is due to the fact that the line has positive y-intercept and negative slope: any rectangle which doesn't have a vertex at the origin could easily be extended to have a vertex at the origin and even more brownies.

Now we just need to pick any of the allowed x coordinate and its corresponding maximum y coordinate or vice versa.
We keep on picking it and comaparing it with previous for the maximum number of brownies.

To calculate the number of brownies in a rectangle we must realise that number of brownies in a rectangle is the sum from 0 to the x coordinate + sum from 0 to cooresponding y coordinate.
This forms a arithmetic progession series with common difference 1 and first term 0 and the nth term being x+1 or y+1 respectively.

It is better to choose a y coordinate and then a corresponding x coordinate as the number of y coordinates will always be less than or equal to x as m>=0. For the former case time complexity is O(b) but in latter is O(m*b).